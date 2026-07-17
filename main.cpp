#include <iostream>
#include <string>
#include "options.h"
#include "password.h"
#include "analyzer.h"

Options password_settings;

int main(){
	int choice;
	std::cout << "Welcome to passwd generator." << '\n';
	std::cout << "Please, choose what you want to do : " << '\n';
	std::cout << "1. Generate password" << '\n';
	std::cout << "2. Analyze password strength" << '\n';
	std::cout << "3. Quit" << '\n';
	std::cout << "Your choice : ";
	std::cin >> choice;
	switch (choice){
		case 1:
			password_settings = ask_options();
			generate_pass(password_settings);
			break;
		case 2:
			pass_analyze();
			break;
		case 3:
			std::cout << "Then, goodbye !" << '\n';
			break;
		default:
			std::cout << "Wrong choice.";
			break;
	}
}

