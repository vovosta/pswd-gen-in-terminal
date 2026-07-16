#include <iostream>
#include <string>
#include "options.h"
#include "password.h"

Options password_settings;

int main(){
	int choice;
	std::cout << "Welcome to passwd generator." << '\n';
	std::cout << "Please, choose what you want to do : " << '\n';
	std::cout << "1. Generate password" << '\n';
	std::cout << "2. Quit" << '\n';
	std::cout << "Your choice : ";
	std::cin >> choice;
	switch (choice){
		case 1:
			password_settings = ask_options();
			generate_pass(password_settings);
			break;
		case 2:
			std::cout << "Then, goodbye !" << '\n';
			break;
	}
}

