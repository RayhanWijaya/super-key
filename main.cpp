#include <iostream>

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
	
	return 0;
}