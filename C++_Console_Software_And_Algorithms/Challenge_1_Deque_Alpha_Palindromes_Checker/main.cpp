
// Challenge 1
// Identifying a palindrome using a deque data structure

#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


//Creating function that outputs/displays all the elements of a deque in a certain format

template <typename T>
void display(const std::deque<T> &d) {
	std::cout << "[";
	for (const auto &elem : d) {
		std::cout << elem;
	}
	std::cout << "]" << std::endl;
	
}

//Create a boolean function that takes a string of characters as (const reference) input and tells if the input is a palindrome

bool is_palindrome(const std::string &s) {
	
	// You must implement this function
	// Using deque to solve the problem.
	
    //initialize a deque d
    std::deque<char> d;
	
	//std::erase_if(s.begin(), s.end(), [](char c) { return isalpha(c) == 0;});
	
    // For every character c in the input s
	for (char c : s) {
        // Take every character c in string s that is an alphabet and store it as an upper case in deque d
		if (std::isalpha(c)) {
			d.push_back(std::toupper(c));
		}
	}
	
	
	
//	std::transform(s.begin(), s.end(), std::back_inserter(d), 
//		[](char c) { 
//			if (std::isalpha(c) == true ) { 
//				return std::toupper(c);
//			}
//			
//		});
		
		
		
	
	display(d);
	
    //initialize a deque counter from the first element (itf) and a reverse deque counter from the last element of the deque (itr)
	auto itf = d.begin();
	auto itr = d.rbegin();
	
	size_t counter{0};
	size_t mid{0};
	
    //determine the mid point of the deque
	if (d.size() % 2 == 0) {
		
		mid = d.size()/2;
		
		
	}
	else {
		
		mid = (d.size()-1)/2;
		
	}
	
	
	//compare the elements of the deque counters (itf and itr) while increasing itf and itr(reverse) to the midth term
	while (counter != mid+1) {
		
		if (*itf != *itr) {
			std::cout << *itf << std::endl;
			std::cout << *itr << std::endl;
			
			return false;
			
		}
		
		++itf;
		++itr;
		++counter;
	}
	
	
	
	
	return true;
}





int main() {
    
    //Test data given in the form of a vector of strings. One can also adapted the program to take inputs from the user
    
	std::vector<std::string> test_strings { "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama", "This is a palindrome", "palindrome"
	};
	
    //formatting and outputing palindrome test results
	std::cout << std::boolalpha;
//	std::cout << std::setw(30) << std::left << "Result" << "String" << std::endl;
	for(const auto &s : test_strings) {
		
		std::cout << is_palindrome(s) << s << std::endl;
		
//		std::cout << std::setw(30) << std::left << is_palindrome(s) << s << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
	
}
