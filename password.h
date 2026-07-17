#ifndef PASSWORD_H
#define PASSWORD_H
#include <string>
#include "options.h"

// Here we declare the function that we'll use after to generate the password, using the parameters the user chose
void generate_pass(Options password_settings);

#endif
