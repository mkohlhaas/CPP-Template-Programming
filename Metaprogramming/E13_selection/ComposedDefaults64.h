#ifndef BOQ_COMPOSED_DEFAULTS64_METAPROGRAMMING_H
#define BOQ_COMPOSED_DEFAULTS64_METAPROGRAMMING_H

#include <type_traits>

#include "TypeList.h"

namespace bits_of_q::composed_defaults64
{
    // implementation using composition of transform and join functions
    // speeding up join by using default arguments

    //////////////////////////////////// JOIN /////////////////////////////////////

    namespace detail
    {
        template <typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>,
                  typename = type_list<>, typename = type_list<>, typename = type_list<>, typename = type_list<>>
        struct join64;

        template <
            typename... T0s, typename... T1s, typename... T2s, typename... T3s, typename... T4s, typename... T5s,
            typename... T6s, typename... T7s, typename... T8s, typename... T9s, typename... T10s, typename... T11s,
            typename... T12s, typename... T13s, typename... T14s, typename... T15s, typename... T16s, typename... T17s,
            typename... T18s, typename... T19s, typename... T20s, typename... T21s, typename... T22s, typename... T23s,
            typename... T24s, typename... T25s, typename... T26s, typename... T27s, typename... T28s, typename... T29s,
            typename... T30s, typename... T31s, typename... T32s, typename... T33s, typename... T34s, typename... T35s,
            typename... T36s, typename... T37s, typename... T38s, typename... T39s, typename... T40s, typename... T41s,
            typename... T42s, typename... T43s, typename... T44s, typename... T45s, typename... T46s, typename... T47s,
            typename... T48s, typename... T49s, typename... T50s, typename... T51s, typename... T52s, typename... T53s,
            typename... T54s, typename... T55s, typename... T56s, typename... T57s, typename... T58s, typename... T59s,
            typename... T60s, typename... T61s, typename... T62s, typename... T63s>
        struct join64<
            type_list<T0s...>, type_list<T1s...>, type_list<T2s...>, type_list<T3s...>, type_list<T4s...>,
            type_list<T5s...>, type_list<T6s...>, type_list<T7s...>, type_list<T8s...>, type_list<T9s...>,
            type_list<T10s...>, type_list<T11s...>, type_list<T12s...>, type_list<T13s...>, type_list<T14s...>,
            type_list<T15s...>, type_list<T16s...>, type_list<T17s...>, type_list<T18s...>, type_list<T19s...>,
            type_list<T20s...>, type_list<T21s...>, type_list<T22s...>, type_list<T23s...>, type_list<T24s...>,
            type_list<T25s...>, type_list<T26s...>, type_list<T27s...>, type_list<T28s...>, type_list<T29s...>,
            type_list<T30s...>, type_list<T31s...>, type_list<T32s...>, type_list<T33s...>, type_list<T34s...>,
            type_list<T35s...>, type_list<T36s...>, type_list<T37s...>, type_list<T38s...>, type_list<T39s...>,
            type_list<T40s...>, type_list<T41s...>, type_list<T42s...>, type_list<T43s...>, type_list<T44s...>,
            type_list<T45s...>, type_list<T46s...>, type_list<T47s...>, type_list<T48s...>, type_list<T49s...>,
            type_list<T50s...>, type_list<T51s...>, type_list<T52s...>, type_list<T53s...>, type_list<T54s...>,
            type_list<T55s...>, type_list<T56s...>, type_list<T57s...>, type_list<T58s...>, type_list<T59s...>,
            type_list<T60s...>, type_list<T61s...>, type_list<T62s...>, type_list<T63s...>>
        {
            using type = type_list<T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s..., T7s..., T8s..., T9s...,
                                   T10s..., T11s..., T12s..., T13s..., T14s..., T15s..., T16s..., T17s..., T18s...,
                                   T19s..., T20s..., T21s..., T22s..., T23s..., T24s..., T25s..., T26s..., T27s...,
                                   T28s..., T29s..., T30s..., T31s..., T32s..., T33s..., T34s..., T35s..., T36s...,
                                   T37s..., T38s..., T39s..., T40s..., T41s..., T42s..., T43s..., T44s..., T45s...,
                                   T46s..., T47s..., T48s..., T49s..., T50s..., T51s..., T52s..., T53s..., T54s...,
                                   T55s..., T56s..., T57s..., T58s..., T59s..., T60s..., T61s..., T62s..., T63s...>;
        };
    } // namespace detail

    template <
        typename L0 = type_list<>, typename L1 = type_list<>, typename L2 = type_list<>, typename L3 = type_list<>,
        typename L4 = type_list<>, typename L5 = type_list<>, typename L6 = type_list<>, typename L7 = type_list<>,
        typename L8 = type_list<>, typename L9 = type_list<>, typename L10 = type_list<>, typename L11 = type_list<>,
        typename L12 = type_list<>, typename L13 = type_list<>, typename L14 = type_list<>, typename L15 = type_list<>,
        typename L16 = type_list<>, typename L17 = type_list<>, typename L18 = type_list<>, typename L19 = type_list<>,
        typename L20 = type_list<>, typename L21 = type_list<>, typename L22 = type_list<>, typename L23 = type_list<>,
        typename L24 = type_list<>, typename L25 = type_list<>, typename L26 = type_list<>, typename L27 = type_list<>,
        typename L28 = type_list<>, typename L29 = type_list<>, typename L30 = type_list<>, typename L31 = type_list<>,
        typename L32 = type_list<>, typename L33 = type_list<>, typename L34 = type_list<>, typename L35 = type_list<>,
        typename L36 = type_list<>, typename L37 = type_list<>, typename L38 = type_list<>, typename L39 = type_list<>,
        typename L40 = type_list<>, typename L41 = type_list<>, typename L42 = type_list<>, typename L43 = type_list<>,
        typename L44 = type_list<>, typename L45 = type_list<>, typename L46 = type_list<>, typename L47 = type_list<>,
        typename L48 = type_list<>, typename L49 = type_list<>, typename L50 = type_list<>, typename L51 = type_list<>,
        typename L52 = type_list<>, typename L53 = type_list<>, typename L54 = type_list<>, typename L55 = type_list<>,
        typename L56 = type_list<>, typename L57 = type_list<>, typename L58 = type_list<>, typename L59 = type_list<>,
        typename L60 = type_list<>, typename L61 = type_list<>, typename L62 = type_list<>, typename L63 = type_list<>,
        typename... MORE_LISTS>
    struct join
    {
        using type = typename join<
            typename detail::join64<L0, L1, L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14, L15, L16, L17, L18,
                                    L19, L20, L21, L22, L23, L24, L25, L26, L27, L28, L29, L30, L31, L32, L33, L34, L35,
                                    L36, L37, L38, L39, L40, L41, L42, L43, L44, L45, L46, L47, L48, L49, L50, L51, L52,
                                    L53, L54, L55, L56, L57, L58, L59, L60, L61, L62, L63>::type,
            MORE_LISTS...>::type;
    };

    template <typename LIST>
    struct join<LIST>
    {
        using type = LIST;
    };
    template <typename... LISTS>
    using join_t = typename join<LISTS...>::type;

    // test concatenation of two lists
    static_assert(
        std::is_same_v<join_t<type_list<int, bool>, type_list<float, double>>, type_list<int, bool, float, double>>);
    // test concatenation involving empty list
    static_assert(std::is_same_v<join_t<type_list<>, type_list<int, bool>>, type_list<int, bool>>);
    // test concatenation of three lists
    static_assert(std::is_same_v<join_t<type_list<int, float>, type_list<int, bool>, type_list<float, double>>,
                                 type_list<int, float, int, bool, float, double>>);

    ///////////////////////////////// TRANSFORM ///////////////////////////////////

    template <typename LIST, template <typename> class FUNC>
    struct transform;

    template <template <typename...> class LIST, typename... Ts, template <typename> class FUNC>
    struct transform<LIST<Ts...>, FUNC>
    {
        using type = LIST<typename FUNC<Ts>::type...>;
    };

    template <typename LIST, template <typename> class FUNC>
    using transform_t = typename transform<LIST, FUNC>::type;

    namespace detail
    {
        template <typename T>
        struct to_void
        {
            using type = void;
        };
    } // namespace detail

    static_assert(
        std::is_same_v<transform_t<type_list<int, bool, float>, detail::to_void>, type_list<void, void, void>>);

    ////////////////////////////////// REMOVE_IF //////////////////////////////////

    namespace detail
    {
        template <template <typename> class PREDICATE, typename T>
        struct wrap_if_not : if_<PREDICATE<T>::value, type_list<>, type_list<T>>
        {
        };

        template <template <typename> class PREDICATE>
        struct wrap_if_not_func
        {
            template <typename T>
            using func = wrap_if_not<PREDICATE, T>;
        };

        template <typename LIST_OF_LISTS>
        struct join_list_of_lists;
        template <template <typename...> class LIST, typename... Ts>
        struct join_list_of_lists<LIST<Ts...>> : join<Ts...>
        {
        };

        template <typename LIST_OF_LISTS>
        using join_list_of_lists_t = typename join_list_of_lists<LIST_OF_LISTS>::type;

        static_assert(
            std::is_same_v<join_list_of_lists_t<type_list<type_list<int, bool>, type_list<>, type_list<float>>>,
                           type_list<int, bool, float>>);
    } // namespace detail

    template <template <typename> class PREDICATE, typename LIST>
    struct remove_if
    {
        using type =
            detail::join_list_of_lists_t<transform_t<LIST, detail::wrap_if_not_func<PREDICATE>::template func>>;
    };

    template <template <typename> class PREDICATE, typename LIST>
    using remove_if_t = typename remove_if<PREDICATE, LIST>::type;

} // namespace bits_of_q::composed_defaults64

#endif
