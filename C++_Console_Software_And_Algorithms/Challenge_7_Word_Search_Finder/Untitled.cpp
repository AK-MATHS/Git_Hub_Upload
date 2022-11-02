// Section 19
// Challenge 3
// Word Finder


#include <iostream>
#include <fstream>


int main() {
	
	int counter{0};
	
	std::string user_word {};
	std::cin >> user_word;
	
	std::ifstream in_file;
	
	std::string line_getter{};
	
	in_file.open("play.txt");
	
//	int counter{0};
	
	if(!in_file) {
		std::cerr << "Error opening file!!" << std::endl;
		return 1;
	}
	
//	i+(user_word.length()-1)
	
	
	while(!in_file.eof()) {
		std::getline(in_file, line_getter);
//		std::cout << line_getter.length() << std::endl;
		
		
		
		for (size_t i{0}; i < line_getter.length()-user_word.length(); i++) {
			int mapped{0};
//			size_t x{0};
			
			if (user_word.at(0) == line_getter.at(i)){
				
				
				for (size_t j{i}; j < i+user_word.length(); j++){
					if (j < line_getter.length()) {
						if (user_word.at(j-i) == line_getter.at(j)) {
						++mapped;
						}
					}
					else {
						j = i+user_word.length();
					}
					
				}
				if (mapped == user_word.length()) {
//					std::cout << "Found at " << i << std::endl;
					++counter;
				}
			}
//			++x;
			
//			size_t x{0};
//			bool b{true};
//			while (b == true) {
//				if (user_word.at(x) == line_getter.at(i)) {
//					b = true;
//					++x;
//					++i;
					
		}
	}

	
	std::cout << counter << std::endl;
	
	
	in_file.close();
	
	return 0;
}