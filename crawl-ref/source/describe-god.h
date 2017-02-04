/**
 * @file
 * @brief Functions used to print information about gods.
 **/

#ifndef DESCRIBE_GOD_H
#define DESCRIBE_GOD_H

int god_favour_rank(god_type which_god);
string god_title(god_type which_god, species_type which_species, int piety);
void describe_god(god_type which_god, bool give_title);

#endif
