#ifndef OPTIONS_H
#define OPTIONS_H
#include <string>
// We declare the struct we'll use in ``options.cpp``
struct Options{
	int length;
	bool use_lowercase;
	bool use_uppercase;
	bool use_number;
	bool use_special;

};

// We declare here the function we'll use in options.cpp
Options ask_options();

#endif
