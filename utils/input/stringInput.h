void stringInput(std::string prompt, std::string& dest) {
	std::cout << prompt;

	std::getline(std::cin, dest, '\n');
}
