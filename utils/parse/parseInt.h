bool parseInt(std::string& reqString, int& dest) {
	try {
		reqString = std::stoi(reqString);
	}
	catch (std::invalid_argument) {
		return false;
	}
	return true;
}
