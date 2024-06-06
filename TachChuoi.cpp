#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
	std::string str = "Trau oi ta bao trau nay. Trau ra ngoai ruong trau cay voi ta.";
	std::stringstream ss(str);
	std::string word;
	std::vector<std::string> tokens;
	
	while (ss >> word) {
		tokens.push_back(word);
	}
	
	for (const auto& token : tokens) {
		std::cout << token << std::endl;
	}
	
	return 0;
}
