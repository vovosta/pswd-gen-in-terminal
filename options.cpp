#include <iostream>
#include "options.h"


Options ask_options(){
	// Here we use the struct Options we declared in the header file with all the variables and date we need to generate the password
	Options config;
	int length;
	char u_lowercase;
	char u_uppercase;
	char u_numbers;
	char u_special;
	// Here we start to ask, all of the parameters the user wants to use
	std::cout << "We'll ask you some questions for the parameters of the password : " << '\n';
	// Here is the length
	std::cout << "What length do you want ? (How many characters) : ";
	std::cin >> length;
	config.length = length;
	// Here is the user wants lowercase
	std::cout << "Do you want to use lowercase ? (y or n) : ";
	std::cin >> u_lowercase;
	if (u_lowercase == 'y'){
		config.use_lowercase = true;
	}
	else{
		config.use_lowercase = false;
	}
	// Here is the user wants uppercase
	std::cout << "Do you want to use uppercase ? (y or n) : ";
	std::cin >> u_uppercase;
	if (u_uppercase == 'y'){
		config.use_uppercase = true;
	}
	else{
		config.use_uppercase = false;
	}
	// Here if the user wants numbers
	std::cout << "Do you want to use numbers ? (y or n) : ";
	std::cin >> u_numbers;
	if (u_numbers == 'y'){
		config.use_number = true;
	}
	else{
		config.use_number = false;
	}
	// Here if the user wants special characters
	std::cout << "Do you want to use special characters ? Such as /*-+ (y or n) : ";
	std::cin >> u_special;
	if (u_special == 'y'){
		config.use_special = true;
	}
	else{
		config.use_special = false;
	}
	// Here we collect and inform the user of what parameters we'll use to generate the password, according to his choice
	std::cout << "Thanks for all the information ! We'll now generate your password !" << '\n';
	std::cout << "Length : " << config.length << '\n';
    	std::cout << "Lowercase : " << config.use_lowercase << '\n';
    	std::cout << "Uppercase : " << config.use_uppercase << '\n';
    	std::cout << "Numbers : " << config.use_number << '\n';
    	std::cout << "Special : " << config.use_special << '\n';
	// Here we return the value of the parameters to where the funtion was called
	return config;
	
}
