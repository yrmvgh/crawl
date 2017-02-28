#pragma once

enum species_type
{
    SP_HUMAN,
    SP_HIGH_ELF,
    SP_DEEP_ELF,
    SP_SLUDGE_ELF,
    SP_HALFLING,
    SP_HILL_ORC,
    SP_KOBOLD,
    SP_MUMMY,
    SP_NAGA,
    SP_OGRE,
    SP_TROLL,

    SP_RED_DRACONIAN,
      SP_FIRST_NONBASE_DRACONIAN = SP_RED_DRACONIAN,
    SP_WHITE_DRACONIAN,
    SP_GREEN_DRACONIAN,
    SP_YELLOW_DRACONIAN,
    SP_GREY_DRACONIAN,
    SP_BLACK_DRACONIAN,
    SP_PURPLE_DRACONIAN,
#if TAG_MAJOR_VERSION == 34
    SP_MOTTLED_DRACONIAN,
#endif
    SP_PALE_DRACONIAN,
      SP_LAST_NONBASE_DRACONIAN = SP_PALE_DRACONIAN,
    SP_BASE_DRACONIAN,
    SP_CENTAUR,
    SP_DEMIGOD,
    SP_SPRIGGAN,
    SP_MINOTAUR,
    SP_DEMONSPAWN,
    SP_GHOUL,
    SP_TENGU,
    SP_MERFOLK,
    SP_VAMPIRE,
    SP_DEEP_DWARF,
    SP_FELID,
    SP_OCTOPODE,
#if TAG_MAJOR_VERSION == 34
    SP_DJINNI,
#endif
    SP_LAVA_ORC,
    SP_GARGOYLE,
    SP_FORMICID,
    SP_VINE_STALKER,
    SP_BARACHIAN,
    SP_DORF,
    SP_IMP,
    SP_PLUTONIAN,
    SP_NULL,
    SP_SKELETON,
    NUM_SPECIES,

    SP_UNKNOWN  = 100,
    SP_RANDOM   = 101,
    SP_VIABLE   = 102,
};
