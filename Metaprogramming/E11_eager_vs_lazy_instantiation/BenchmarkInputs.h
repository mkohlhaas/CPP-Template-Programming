#include "TypeList.h"

namespace bits_of_q
{
    template <int>
    struct dummy
    {
    };

    using input4_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>>;

    using input6_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void>;

    using input8_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>>;

    using input10_different =
        type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>, dummy<8>, dummy<9>>;

    using input12_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>,
                                        dummy<8>, dummy<9>, dummy<10>, dummy<11>>;

    using input14_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>,
                                        dummy<8>, dummy<9>, dummy<10>, dummy<11>, dummy<12>, dummy<13>>;

    using input16_different =
        type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>, dummy<8>, dummy<9>,
                  dummy<10>, dummy<11>, dummy<12>, dummy<13>, dummy<14>, dummy<15>>;

    using input18_different =
        type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>, dummy<8>, dummy<9>,
                  dummy<10>, dummy<11>, dummy<12>, dummy<13>, dummy<14>, dummy<15>, dummy<16>, dummy<17>>;

    using input20_different = type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, void, dummy<6>, dummy<7>,
                                        dummy<8>, dummy<9>, dummy<10>, dummy<11>, dummy<12>, dummy<13>, dummy<14>,
                                        dummy<15>, dummy<16>, dummy<17>, dummy<18>, dummy<19>>;

    using input32_different =
        type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, dummy<5>, dummy<6>, dummy<7>, dummy<8>, dummy<9>,
                  dummy<10>, dummy<11>, dummy<12>, dummy<13>, dummy<14>, void, dummy<16>, dummy<17>, dummy<18>,
                  dummy<19>, dummy<20>, dummy<21>, dummy<22>, dummy<23>, dummy<24>, dummy<25>, dummy<26>, dummy<27>,
                  dummy<28>, dummy<29>, void, dummy<31>>;

    using input64_different =
        type_list<dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, dummy<5>, dummy<6>, dummy<7>, dummy<8>, dummy<9>,
                  dummy<10>, dummy<11>, dummy<12>, dummy<13>, dummy<14>, void, dummy<16>, dummy<17>, dummy<18>,
                  dummy<19>, dummy<20>, dummy<21>, dummy<22>, dummy<23>, dummy<24>, dummy<25>, dummy<26>, dummy<27>,
                  dummy<28>, dummy<29>, void, dummy<31>, dummy<32>, dummy<33>, dummy<34>, dummy<35>, dummy<36>,
                  dummy<37>, dummy<38>, dummy<39>, dummy<40>, dummy<41>, dummy<42>, dummy<43>, dummy<44>, dummy<45>,
                  dummy<46>, dummy<47>, dummy<48>, dummy<49>, dummy<50>, dummy<51>, void, dummy<53>, dummy<54>,
                  dummy<55>, dummy<56>, dummy<57>, dummy<58>, dummy<59>, dummy<60>, dummy<61>, dummy<62>, dummy<63>>;

    using input128_different = type_list<
        dummy<0>, dummy<1>, dummy<2>, dummy<3>, dummy<4>, dummy<5>, dummy<6>, dummy<7>, dummy<8>, dummy<9>, dummy<10>,
        dummy<11>, dummy<12>, dummy<13>, dummy<14>, void, dummy<16>, dummy<17>, dummy<18>, dummy<19>, dummy<20>,
        dummy<21>, dummy<22>, dummy<23>, dummy<24>, dummy<25>, dummy<26>, dummy<27>, dummy<28>, dummy<29>, void,
        dummy<31>, dummy<32>, dummy<33>, dummy<34>, dummy<35>, dummy<36>, dummy<37>, dummy<38>, dummy<39>, dummy<40>,
        dummy<41>, dummy<42>, dummy<43>, dummy<44>, dummy<45>, dummy<46>, dummy<47>, dummy<48>, dummy<49>, dummy<50>,
        dummy<51>, void, dummy<53>, dummy<54>, dummy<55>, dummy<56>, dummy<57>, dummy<58>, dummy<59>, dummy<60>,
        dummy<61>, dummy<62>, dummy<63>, dummy<64>, dummy<65>, dummy<66>, dummy<67>, dummy<68>, dummy<69>, dummy<70>,
        dummy<71>, dummy<72>, dummy<73>, dummy<74>, dummy<75>, void, dummy<77>, dummy<78>, dummy<79>, dummy<80>,
        dummy<81>, dummy<82>, dummy<83>, dummy<84>, dummy<85>, dummy<86>, dummy<87>, dummy<88>, dummy<89>, dummy<90>,
        dummy<91>, dummy<92>, dummy<93>, dummy<94>, dummy<95>, dummy<96>, void, dummy<98>, dummy<99>, dummy<100>,
        dummy<101>, dummy<102>, dummy<103>, dummy<104>, dummy<105>, dummy<106>, dummy<107>, dummy<108>, dummy<109>,
        dummy<110>, dummy<111>, dummy<112>, dummy<113>, dummy<114>, void, dummy<116>, dummy<117>, dummy<118>,
        dummy<119>, dummy<120>, dummy<121>, dummy<122>, dummy<123>, dummy<124>, dummy<125>, dummy<126>, dummy<127>>;

    using input4_same4 = type_list<int, bool, float, void>;
    using input8_same4 = type_list<int, bool, float, void, int, bool, float, char>;
    using input16_same4 =
        type_list<int, bool, float, void, int, bool, float, char, int, bool, float, char, void, bool, float, char>;
    using input32_same4 =
        type_list<int, bool, float, void, int, bool, float, char, int, bool, float, char, void, bool, float, char, int,
                  void, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char>;
    using input64_same4 =
        type_list<int, bool, float, void, int, bool, float, char, int, bool, float, char, void, bool, float, char, int,
                  void, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool,
                  float, char, int, bool, float, char, int, bool, float, char, int, void, float, char, int, bool, float,
                  char, int, bool, float, char, int, bool, float, char, int, bool, float, char>;
    using input128_same4 =
        type_list<int, bool, float, void, int, bool, float, char, int, bool, float, char, void, bool, float, char, int,
                  void, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool,
                  float, char, int, bool, float, char, int, bool, float, char, int, void, float, char, int, bool, float,
                  char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char,
                  int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int,
                  bool, float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool,
                  float, char, int, bool, float, char, int, bool, float, char, int, bool, float, char, int, bool, float,
                  void, int, bool, float, char, int, bool, float, char>;

} // namespace bits_of_q
