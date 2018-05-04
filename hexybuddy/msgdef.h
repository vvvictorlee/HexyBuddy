#pragma once

namespace hexybuddy {

enum class Command : unsigned {
    New = 25,
    Open = 26,
    Save = 27,
    About = 36,
    Registration = 37,
    Level_beginner = 41,
    Level_intermediate = 42,
    Level_advanced = 43,
    Level_expert = 44,
    Hint = 50,
    Close = 52,
    Hexy_off = 60,
    Hexy_on = 61,
    Demo = 62,
    Move = 63,
    Rules = 100,
    How_to_play = 101,
    More_help = 102,
    User_argeement = 103,
    size_4 = 104,
    size_5 = 105,
    size_6 = 106,
    size_7 = 107,
    size_8 = 108,
    size_9 = 109,
    size_10 = 110,
    size_11 = 111,
    Clock = 127,
    Sound = 200,
    Coord = 201,
    Shape_diamond = 210,
    Shape_flat_1 = 211,
    Shape_flat_2 = 212,
    Guess = 230,
    Swap_off = 240,
    Swap_on = 241,
    Score = 400,
    Random = 511,
    New_2 = 729,
    Numbering = 730,
};

} // namespace hexybuddy