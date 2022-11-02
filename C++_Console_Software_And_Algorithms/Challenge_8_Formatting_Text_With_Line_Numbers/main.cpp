
// Challenge 4
// Copy Romeo and Juliet with line numbers
// This Program formats/processes a long input text file and adds line numbers to each line of the text.



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


int main() {
	// Initialize input and output text files
	std::ifstream in_file{"play.txt"};
	std::ofstream out_file{"edited_play.txt"};
	
    // Crosscheck to see if the input and output files are okay
	if (!in_file) {
		std::cerr << "Error opening input file" << std::endl;
		return 1;
	}
	
	if (!out_file) {
		std::cerr << "Error opening output file" << std::endl;
		return 1;
	}
	
	std::string line;
	std::string formatted_line;
	int line_counter{0};
	
    // Logic that does the text formating
	while(std::getline(in_file, line)) {
		
		if (line.length() != 0) {
			++line_counter;
			
			out_file	<< std::setw(5) << std::left << line_counter
						<< std::left << line
						<< std::endl;
		}
		
		else {
			out_file << line << std::endl;
		}
		
	}
	
	std::cout << "File copied successfully" << std::endl;
	
    // Close all opened files
	in_file.close();
	out_file.close();
	
	return 0;
}
