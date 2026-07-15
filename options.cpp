#include <iostream>
#include "options.h"


Options ask_options(){
	Options config;
	int length;
	char u_lowercase;
	char u_uppercase;
	char u_numbers;
	char u_special;
	std::cout << "We'll ask you some question for the parameter of the password : " << '\n';
	std::cout << "What length do you want ? (How many characters) : ";
	std::cin >> length;
	config.length = length;
	std::cout << "Do you want to use lowercase ? (y or n) : ";
	std::cin >> u_lowercase;
	if (u_lowercase == 'y'){
		config.use_lowercase = true;
	}
	else{
		config.use_lowercase = false;
	}
	std::cout << "Do you want to use uppercase ? (y or n) : ";
	std::cin >> u_uppercase;
	if (u_uppercase == 'y'){
		config.use_uppercase = true;
	}
	else{
		config.use_uppercase = false;
	}
	std::cout << "Do you want to use numbers ? (y or n) : ";
	std::cin >> u_numbers;
	if (u_numbers == 'y'){
		config.use_number = true;
	}
	else{
		config.use_number = false;
	}
	std::cout << "Do you want to use special characters ? Such as /*-+ (y or n) : ";
	std::cin >> u_special;
	if (u_special == 'y'){
		config.use_special = true;
	}
	else{
		config.use_special = false;
	}
	std::cout << "Thanks for all the information ! We'll now generate your password !" << '\n';
	std::cout << "Length : " << config.length << '\n';
    std::cout << "Lowercase : " << config.use_lowercase << '\n';
    std::cout << "Uppercase : " << config.use_uppercase << '\n';
    std::cout << "Numbers : " << config.use_number << '\n';
    std::cout << "Special : " << config.use_special << '\n';
	return config;
	
}
