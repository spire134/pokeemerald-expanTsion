//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 18
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 17
            .lvl = 42,
#line 16
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 25
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 28
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .lvl = 43,
#line 26
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 30
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 35
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 38
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .lvl = 44,
#line 36
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 45
    [DIFFICULTY_NORMAL][PARTNER_CORIN_QUARTZ] =
    {
#line 46
        .trainerName = _("Corin"),
#line 47
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 48
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 52
            .species = SPECIES_GROWLITHE_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 52
            .heldItem = ITEM_PECHA_BERRY,
#line 55
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 53
            .ability = ABILITY_INTIMIDATE,
#line 54
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 56
                MOVE_ROCK_TOMB,
                MOVE_HOWL,
                MOVE_LEER,
                MOVE_FLAME_WHEEL,
            },
            },
            {
#line 61
            .species = SPECIES_MORELULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 61
            .heldItem = ITEM_BIG_ROOT,
#line 64
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 62
            .ability = ABILITY_ILLUMINATE,
#line 63
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 65
                MOVE_SLEEP_POWDER,
                MOVE_MEGA_DRAIN,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
            },
            },
            {
#line 70
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .heldItem = ITEM_BLACK_SLUDGE,
#line 73
            .iv = TRAINER_PARTY_IVS(11, 0, 26, 11, 21, 21),
#line 71
            .ability = ABILITY_LIQUID_OOZE,
#line 72
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 74
                MOVE_MEGA_PUNCH,
                MOVE_STOCKPILE,
                MOVE_SWALLOW,
                MOVE_SPIT_UP,
            },
            },
        },
    },
#line 79
    [DIFFICULTY_NORMAL][PARTNER_TASMIN_PIRATES] =
    {
#line 80
        .trainerName = _("Tasmin"),
#line 81
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 82
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender =
#line 83
F_TRAINER_FEMALE | 
#line 84
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 86
            .species = SPECIES_GLAMEOW,
#line 86
            .gender = TRAINER_MON_MALE,
#line 89
            .iv = TRAINER_PARTY_IVS(0, 31, 5, 26, 0, 24),
#line 87
            .ability = ABILITY_OWN_TEMPO,
#line 88
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 90
                MOVE_HYPNOSIS,
                MOVE_AERIAL_ACE,
                MOVE_FAKE_OUT,
                MOVE_GROWL,
            },
            },
            {
#line 95
            .species = SPECIES_SHUPPET,
#line 95
            .gender = TRAINER_MON_FEMALE,
#line 98
            .iv = TRAINER_PARTY_IVS(10, 20, 10, 20, 0, 10),
#line 96
            .ability = ABILITY_FRISK,
#line 97
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 99
                MOVE_WILL_O_WISP,
                MOVE_HEX,
                MOVE_PAIN_SPLIT,
                MOVE_SCREECH,
            },
            },
            {
#line 104
            .species = SPECIES_TIMBURR,
#line 104
            .gender = TRAINER_MON_MALE,
#line 104
            .heldItem = ITEM_HARD_STONE,
#line 109
            .iv = TRAINER_PARTY_IVS(18, 10, 10, 5, 10, 18),
#line 105
            .ability = ABILITY_GUTS,
#line 106
            .lvl = 24,
#line 108
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 107
            .teraType = TYPE_FIGHTING,
            .moves = {
#line 110
                MOVE_ROCK_SLIDE,
                MOVE_SLAM,
                MOVE_BULK_UP,
                MOVE_ROCK_SMASH,
            },
            },
        },
    },
