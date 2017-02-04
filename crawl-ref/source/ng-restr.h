#ifndef NG_RESTR_H
#define NG_RESTR_H

#include "item-prop-enum.h"

struct newgame_def;

enum char_choice_restriction
{
    CC_BANNED = 0,
    CC_RESTRICTED,
    CC_UNRESTRICTED,
};

char_choice_restriction species_allowed(job_type job, species_type speci);
char_choice_restriction job_allowed(species_type speci, job_type job);
bool is_good_combination(species_type spc, job_type job,
                         bool species_first, bool good = false);
char_choice_restriction weapon_restriction(weapon_type wpn,
                                           const newgame_def &ng);

#endif
