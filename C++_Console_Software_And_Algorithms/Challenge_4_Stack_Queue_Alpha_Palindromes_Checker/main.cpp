
// Challenge 4
/*

* Challenge 4 - Stack and Queue Challenge

* A palindrome is a string that reads the same backwards or forwards.
* Simple examples are:
* madam
* bob
* toot
* radar

* An entire phrase can also be a palindrome, for example:
* A Toyota's a toyota
* A Santa at NASA
* A man, aplan, a cat, a ham, a yak, a hat, a canal-Panama!

* For the purposes of this challenge I will only consider alpha characters and ommit all other characters.
* I will also not be considering case.
* So,
* A Santa at Nasa, will be processed as:
* ASANTAATNASA

* A common method to solve this problem is to compare the string to its reverse and
* if they are equal then it must be a palindrome. But I will use stack and queue.


*/




// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string &s) {
	
	// Implement stack and a queue to solve the challenge.
	
	std::stack<char> stk;
	std::queue<char> que;
	
	for (char c : s) {
		if (std::isalpha(c)) {
			stk.push(std::toupper(c));
			que.push(std::toupper(c));
		}
	}
	while (!stk.empty()) {
		if (stk.top() == que.front()) {
			stk.pop();
			que.pop();
		}
		else {
			return false;
		}
	}
	
	
	return true;
}


int main() {
	
	std::vector<std::string> test_strings { "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama", "This is a palindrome", "palindrome"
	};
	
	std::cout << std::boolalpha;
	std::cout << std::setw(10) << std::left << "Result" << "\t" << "String" << std::endl;
	
	for(const auto &s : test_strings) {
		std::cout << std::setw(10) << std::left << is_palindrome(s) << "\t" << s << std::endl;
	}
	std::cout << std::endl;
	
	return 0;
}
