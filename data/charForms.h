std::map<char, std::map<std::string, std::vector<char>>> mapCharForms {
	{'a', {
		{"number", {'4'}},
	}},
	{'e', {
		{"number", {'3'}},
	}},
	{'g', {
		{"number", {'6'}},
	}},
	{'i', {
		{"number", {'1'}},
	}},
	{'o', {
		{"number", {'0'}},
	}},
	{'s', {
		{"number", {'5'}},
	}},
	{'z', {
		{"number", {'2'}},
	}},
	{' ', {
		{"specialChar", {'-', '_'}},
	}},
	{'-', {
		{"specialChar", {' ', '_'}},
	}},
	{'_', {
		{"specialChar", {' ', '-'}},
	}},
};
