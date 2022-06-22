void intInput(std::string prompt, int& dest) {
	std::string input;

	std::cout << prompt;

	std::getline(std::cin, input, '\n');

	while (!parseInt(input, dest)) {
		std::cout << prompt;
		std::getline(std::cin, input, '\n');
	}
}
