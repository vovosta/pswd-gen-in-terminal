#ifndef OPTIONS_H
#define OPTIONS_H
#include <string>

struct Options{
	int length;
	bool use_lowercase;
	bool use_uppercase;
	bool use_number;
	bool use_special;

};

Options ask_options();

#endif
