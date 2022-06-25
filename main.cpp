#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <stdexcept>
#include <cstdlib>
#include <cctype>
#include <time.h>

#include "utils/parse/parseInt.h"
#include "utils/input/intInput.h"
#include "utils/input/stringInput.h"

#include "data/includeChar.h"
#include "data/charForms.h"

#include "methods/alter.h"
#include "methods/random.h"

void greet() {
	std::cout << "super-key \n";

	std::cout << '\n';

	std::cout <<
		"methods: \n"
		"* random (generates a jumbled password e.g. '5#17f&03kjf') \n"
		"* alter (changes the form of each character in a given password e.g. 'pokemon_rocks' to 'p0k3mOn-r0cK5') \n";

	std::cout << '\n';
}

int main() {
	greet();
	srand(time(0));

	std::string password;
	std::string method;
	struct includeChar passIncludeChar;

	stringInput("Method: ", method);

	if (method == "random") {
		int passLength;
		intInput("Password Length: ", passLength);

		password = methodRandom(passLength, passIncludeChar);
	}
	else if (method == "alter") {
		std::string passwordToAlter;
		stringInput("Enter a password to alter: ", passwordToAlter);

		password = methodAlter(passwordToAlter, passIncludeChar);
	}
	
	std::cout << "Generated Password: " << password << '\n';
	
	return 0;
}
