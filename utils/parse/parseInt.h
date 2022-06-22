bool parseInt(std::string& reqString, int& dest) {
	try {
		reqString = std::stoi(reqString);
	}
	catch (std::invalid_argument) {
		std::cout << "Invalid argument in parseInt \n";
		return false;
	}
	return true;
}
