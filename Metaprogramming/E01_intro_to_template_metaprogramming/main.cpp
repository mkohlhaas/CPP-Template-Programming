#include <iostream>
#include <type_traits>

// is_pointer

template <typename T>
struct is_pointer
{
    static constexpr bool value = false; // return values as static constexpr
};

template <typename T>
struct is_pointer<T *>
{
    static constexpr bool value = true;
};

template <typename T>
inline constexpr bool is_pointer_v = is_pointer<T>::value;

// strip_pointer

template <typename T>
struct strip_pointer
{
    using type = T; // return types as type aliases
};

template <typename T>
struct strip_pointer<T *>
{
    using type = T;
};

template <typename T>
using strip_pointer_t = strip_pointer<T>::type;

// print

template <typename T>
void
print1(T t)
{
    std::cerr << __PRETTY_FUNCTION__ << '\n';

    if constexpr (is_pointer_v<T> && std::is_floating_point_v<strip_pointer_t<T>>)
    {
        std::cout << *t;
    }
    else
    {
        std::cout << t;
    }
}

template <typename A, typename B, typename C>
void
print3(A a, B b, C c)
{
    print1(a);
    std::cout << ", ";

    print1(b);
    std::cout << ", ";

    print1(c);
    std::cout << '\n';
}

int
main()
{
    using namespace std;

    string hello = "hello world";
    float  a     = 10;
    double b     = 2;

    print3(1, 2, 3);         // 1, 2, 3
    print3(hello, 2, hello); // hello world, 2, hello world
    print3(&hello, 2, 3);    // 0x7ffe558ff200, 2, 3
    print3(&hello, &a, &b);  // 0x7ffe558ff200, 10, 2
}
