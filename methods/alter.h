std::string methodAlter(std::string passwordToAlter, struct includeChar passIncludeChar) {
	std::string password;

	std::vector<std::string> acceptedTypes;

	if (passIncludeChar.specialChars) acceptedTypes.push_back("specialChar");
	if (passIncludeChar.upperChars)   acceptedTypes.push_back("upperChar");
	if (passIncludeChar.lowerChars)   acceptedTypes.push_back("lowerChar");
	if (passIncludeChar.numbers)      acceptedTypes.push_back("number");

	for (char passChar : passwordToAlter) {
		char newPassChar;

		std::vector<char> forms;

		if (mapCharForms.find(passChar) != mapCharForms.end()) {
			std::map<std::string, std::vector<char>> charForms = mapCharForms[passChar];

			for (std::string passCharType : acceptedTypes) {
				if (charForms.find(passCharType) == charForms.end())  {
					continue;
				}

				forms.insert(
					forms.end(),
					charForms[passCharType].begin(),
					charForms[passCharType].end()
				);
			}
		}

		if (isalpha(passChar)) {
			if (passIncludeChar.upperChars) forms.push_back(toupper(passChar));
			if (passIncludeChar.lowerChars) forms.push_back(tolower(passChar));
		}

		if (forms.size() > 1)
			newPassChar = forms[rand() % forms.size()];
		else if (forms.size() == 1)
			newPassChar = forms[0];
		else
			newPassChar = passChar;

		password.push_back(newPassChar);
	}

	return password;
}
