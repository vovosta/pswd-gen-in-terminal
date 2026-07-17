#include <iostream>
#include <ctype.h> 	
#include <cmath>
#include <iostream>

void pass_analyze(){
	// Here we declare the variables the we'll use after
	int upper_count = 0;
	int lower_count = 0;
	int number_count = 0;
	int special_count = 0;
	std::string pass;
	std::cout << "Please, enter the password you want to analyze : ";
	std::cin >> pass;
	// Here we check if and how many, uppercase, lowercase, numbers and special characters it contains
	for (char c : pass){
		if(std::islower(c)){
			lower_count++;
		}
		else if(std::isupper(c)){
			upper_count++;
		}
		else if(std::isdigit(c)){
			number_count++;
		}
		else if(!std::isalnum(c)){
			special_count++;
		}
	}
	// Here we expose everything to the user
	std::cout << "In your password, there are : " << '\n';
	std::cout << "There is " << lower_count << " lower case" << '\n';
	std::cout << "There is " << upper_count << " upper case" << '\n';
	std::cout << "There is " << number_count << " numbers" << '\n';
	std::cout << "There is " << special_count << " special characters" << '\n';
	std::cout << "The length of your pass is : " << pass.size() << '\n';
	// Here we'll calculate the entropy of the password
	// We first get ou variable their values, wich here is N, the possible total size of the password
	int alphabet_size = 0;
	if(lower_count > 0){
		alphabet_size+=26;	
	}
	else{
		alphabet_size+=0;
	}
	if(upper_count > 0){
		alphabet_size+=26;
	}
	else{
		alphabet_size+=0;
	}
	if(number_count > 0){
		alphabet_size+=10;
	}
	else{
		alphabet_size+=0;
	}
	if(special_count > 0){
		alphabet_size+=32;
	}
	else{
		alphabet_size+=0;
	}
	// Here we declare the entropy variable and how to calculate it, we'll for this use the following formula : Entropy = L(the length of the password) * log2(N(N is numbers of characters possible)
	double entropy = pass.length() * std::log2(alphabet_size);
	std::cout << "The entropy of your password is " << entropy << " bytes" << '\n';
	std::cout << "The following password strength estimation is only theoretical. Passwords containing common words or predictable patterns may be much weaker than their entropy suggests." << '\n';
	// We'll here determine the strength of the password according to the byte we just calculated with the entropy
	if(entropy < 28){
		std::cout << "Strength : Very Weak" << '\n';
	}
	else if(entropy < 36){
		std::cout << "Strength : Weak" << '\n';
	}
	else if(entropy < 60){
		std::cout << "Strength : Medium" << '\n';
	}
	else if(entropy < 80){
		std::cout << "Strength : Strong" << '\n';
	}
	else if(entropy < 128){
		std::cout << "Strength : Very strong" << '\n';
	}
	else{
		std::cout << "Strength : Excellent" << '\n';
	}

}
