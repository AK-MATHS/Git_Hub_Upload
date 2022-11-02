
// Challenge 2
// Automated Grader

// This program helps a tutor to grade the multiple choice responses of a group of students in a class

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

int main() {
    
    // Read the file that contains the responses of the student to the class quiz
	std::ifstream in_file;
	in_file.open("response.txt");
	
    // Cross check to see if there was any error in opening the file containing the students' responses
    
	if (!in_file) {
		std::cerr << "Error opening the file" << std::endl;
		return 1;
	}
	std::string answer{};
	
	std::vector<std::string>names;
	std::vector<std::string>responses;
	
	int total_score{0};
	double average_score{0};
	
	int field_width_name{20};
	int field_width_score{10};
	
	
	
	int counter{0};
	
    //Logic to check the students' responses against the right answers
	while(!in_file.eof()) {
		
		
		if (counter == 0) {
			std::getline(in_file, answer);
//			std::cout << answer << std::endl;
			
		}
		else if ( counter%2 != 0){
			std::string name{};
			std::getline(in_file, name);
//			std::cout << name << std::endl;
			
			names.push_back(name);
			
		}
		else {
			std::string response{};
			std::getline(in_file, response);
//			std::cout << response << std::endl;
			
			responses.push_back(response);
		}
		
		++counter;
	}
	
	int score{};
	std::vector<int>scores;
	
    
    // Calculate the students' score marks and the class average
    
	for (size_t i=0; i < names.size(); i++) {
		
//		std::cout << names.at(i) << std::endl;
		
		for (size_t j=0; j < answer.length(); j++) {
			if (answer[j] == responses.at(i)[j]){
				++score;
			}
		}
		scores.push_back(score);
		total_score += score;
		score = 0;
	}
	
    // Format the output
    
	std::cout << std::setw(field_width_name) << std::left << "Student" << std::setw(field_width_score) << std::right << "Score" << std::endl;
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
	std::cout << std::setfill(' ');
	
	
	
	for (size_t k=0; k<names.size(); k++) {
		std::cout	<< std::setw(field_width_name) << std::left << names.at(k)
					<< std::setw(field_width_score) << std::right << scores.at(k)
					<< std::endl;
	}
	
	average_score = static_cast<double>(total_score)/names.size();
	
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << std::setw(field_width_name) << std::left << "Average_Score" << std::setw(field_width_score) << std::right << average_score << std::endl;
	
	
	in_file.close();
	return 0;
}
