
// Challenge 7
// Word Finder

#include <chrono>

#include <iostream>
#include <fstream>
#include <vector>


//using namespace std::chrono;


int main() {
	
	
	
	//Open the input file on the stream
	std::ifstream in_file;
	in_file.open("play.txt");
	
	
	//Check to see if the file opens successfully. If not, exit the program
	if(!in_file) {
		std::cerr << "Error opening file!!" << std::endl;
		return 1;
	}
	
	
	
	
	
	//initialize and request the search keyword
	std::string user_word {};
	std::cout << "Kindly enter the case sensitive keyword you wish to search for: " << std::endl;
	std::cin >> user_word;
	
	
	
	// The big guy that counts the number of the keywords found in the text
	int counter{0};
	
	//This variable keeps track of the line been read to the stream
	int line_counter{0};	
	
	//Read each line of the text into the string line getter
	std::string line_getter{};
	
	
	// Get starting timepoint
    auto start = std::chrono::high_resolution_clock::now();
	
	//The while loop reads each line of the text file into the string variable "line_getter" provided it hasn't reached the end of text
	while(!in_file.eof()) {
		
		//Read from one line stream to line_getter
		std::getline(in_file, line_getter);
		
		//Increment the stream line counter
		++line_counter;
		
		std::cout << "line counter is: " << line_counter << std::endl;
		
		
		//This nested for loop carries out a systematic search for the indicated keyword through each stream line
		
		for (size_t i{0}; i < line_getter.length(); i++) {
			//define a variable named "mapped" to keep track of the characters in the user defined keyword that consecutively match the characters in the streamline 
			int mapped{0};
			
			//Test is the character at the current index is similar to the character at the zeroth index of the user defined string
			if (user_word.at(0) == line_getter.at(i)){
				
				//define a vector that stores the indices of other charaters in the stream that zeroth index of the user defined string as it goes into the next level iteration
				std::vector<size_t>first_letter_indices{};
				
				//if you find a first character match, iterate through the next user_word.length-1 characters to find the
				for (size_t j{i+1}; j < i+user_word.length(); j++){
					std::cout << "j = " << j << std::endl;
					
					//check if we are at the end of the current stream line
					if (j < line_getter.length()) {
						
						//check for matching characters of in next user_word.length()-1 indices of user_word and stream line 
						// if yes increment "mapped"
						if (user_word.at(j-i) == line_getter.at(j)) {
							++mapped;
						}
						
						//Checks to keep track of the other user_word.length()-1 characters that matches the first character and stores the index in a vector
						if (user_word.at(0) == line_getter.at(j)) {
							first_letter_indices.push_back(j);
						}
					}
					// if at the end of the stream, this exits this current loop by through j out of range
					else {
						j = i+user_word.length();
					}
					
				}
				
				//Check to see if you have a complete keyword string match
				if (mapped == user_word.length()-1) {
					++counter;
					std::cout << "found" << std::endl;
					//if yes, set the index of the outer loop to start another search from the end of the found keyword
					i +=user_word.length()-1;
				}
				
				//if we have an incomplete match in the current j-iteration, set the outer loop index i to start the next iteration at, if any, the index of the match of the first character of the user defined keyword
				else if (first_letter_indices.size() != 0) {
					i = first_letter_indices.at(0);
				}
				
			}
			
			//check to see if the remaining string length to be iterated over in the current line stream is up to the keyword you are looking for. If not, move out of the current line stream.
			if (i>line_getter.length()-user_word.length()-1) {
				i=line_getter.length();
			}
			
			
			
		}
	}

	
	std::cout << counter << std::endl;
	
	// Get ending timepoint
    auto stop = std::chrono::high_resolution_clock::now();
	
	// Get duration. Substart timepoints to 
    // get durarion. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<std::chrono::microseconds>(stop - start);
  
    std::cout << "Time taken by function: "
         << duration.count() << " microseconds" << std::endl;
	
	
	// close the opened file
	in_file.close();
	
	
	
	
	
	return 0;
}
