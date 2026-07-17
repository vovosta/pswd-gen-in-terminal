#include <iostream>
#include "password.h"
#include <random>

void generate_pass(Options password_settings){
	std::string characters;
	std::string password;
	
	// Here, we are adding all of the characters the user want to the variable characters, after the algorithm will choose the characters to use here
	// If the user wants to use lowercase
	if (password_settings.use_lowercase){
		characters+="abcdefghijklmnopqrstuvwxyz";
	}
	else{}
	// if the user wants to use upper case
	if (password_settings.use_uppercase){
		characters+="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	}
	else{}
	// if the user wants to use numbers
	if (password_settings.use_number){
		characters+="0123456789";
	}
	else{}
	// if the user wants to use special characters
	if (password_settings.use_special){
		characters+="!@#$%^&*()-_=+[]{}|;:,.<>?";
	}
	// Now we will generate the random password
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(0, characters.size() -1);

	for (int i = 0; i<password_settings.length; i++){
		int index = distrib(gen);
		password+= characters[index];
	}
	// We inform here the result of the password generation
	std::cout << "Your password is : " << password << '\n';
}
