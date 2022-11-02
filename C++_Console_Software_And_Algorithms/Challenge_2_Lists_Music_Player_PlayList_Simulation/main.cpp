/*
Lists and Forward_Lists
Using std::list

In this challenge, create a menu driven application that will similute a user playing songs from a playlist of songs.
 *
 *
 * Use a list to simulate the user selecting the first song in the playlist and
 * then selecting next and previous to play forward or backwards through the platlist.
 *
 *
 * Also, allow users to add new song to the playlist and
 * they will be added prior to the currently playing song.




The menu looks as follows:


F - Play First Song
N - Play Next song
P - Play Previous song
A - Add and play a new song at current location
L - List the current playlist
========================================
Enter a selection (Q to quit):

And the avaliable playlist is modeled as a std::list<Songs>
 * Song class. Following are the songs in the playlist.
 * Some Songs grabbed these from the pop charts, you can use
 *
 *
 * God's Plan            Drake                            5
 * Never Be The Same    Camila Cabello                    5
 * Pray For Me            The Weekend and K. Lamar        4
 * The Middle            Zedd, Maren Morris & Grey        5
 * Wait                    Maroone 5                        4
 * Whatever It Takes    Imagine Dragons                3

 
 */





#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

// Class that models the songs

class Song {
	// Forward declaration for overloading the insertion operator(<<) for the Song Class
	friend std::ostream &operator<< (std::ostream &os, const Song &s);
	std::string name;
	std::string artist;
	int rating;
public:
	Song() = default;
	Song(std::string name, std::string artist, int rating)
		: name{name}, artist{artist}, rating{rating} {}
	std::string get_name() const {
		return name;
	}
	std::string get_artist() const {
		return artist;
	}
	int get_rating() const {
		return rating;
	}
	
	// overload the < operator for the class to work with the STL Library
	bool operator<(const Song &rhs) const {
		return this->name < rhs.name;
	}
	
	// overload the equality operator (==) for the class to work with the STL Library
	bool operator==(const Song &rhs) const {
		return this->name == rhs.name;
	}
	
};

// Implement the overloaded insertion operator(<<) for the Song Class
std::ostream &operator<< (std::ostream &os, const Song &s) {
	os	<< std::setw(20) << std::left << s.name
		<< std::setw(30) << std::left << s.artist
		<< std::setw(2)	 << std::left << s.rating;
	
	return os;
}


void display_menu() {
	// Function displays menu for all possible option/action
	
	std::cout << "\nF - Play First Song" << std::endl;
	std::cout << "N - Play Next song" << std::endl;
	std::cout << "P - Play Previous song" << std::endl;
	std::cout << "A - Add and play a new song at current location" << std::endl;
	std::cout << "L - List the current playlist" << std::endl;
	std::cout << "========================================" << std::endl;
	
}

void display_current_song(const Song &song) {
	// This function should display
	// Playing: followed by the song that is playing
	
	std::cout << "Playing: " << std::endl;
	std::cout << song << std::endl;
	
//	std::cout << "You implement this function" << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
	// This function should display the current playlist
	// and then the current song
	
	for (auto const &song : playlist) {
		std::cout << song << std::endl;
	}
	
	std::cout << "Current song: " << std::endl;
	std::cout << current_song << std::endl;
	
	std::cout << std::endl;
	
//	std::cout << "You implement this function" << std::endl;
}



// main


int main() {
	
	
	std::list<Song> playlist {
		 {"God's Plan",			"Drake",						5},
		 {"Never Be The Same",	"Camila Cabello",				5},
		 {"Pray For Me",		"The Weekend and K. Lamar",	4},
		 {"The Middle",			"Zedd, Maren Morris & Grey",	5},
		 {"Wait",				"Maroone",						4},
		 {"Whatever It Takes",	"Imagine Dragons",				3}
	};
	
	std::list<Song>::iterator current_song = playlist.begin();
	
//	std::cout << "To be implemented" << std::endl;
	
	display_playlist(playlist, *current_song);
	display_menu();
	
	
	char option{};
	
	
	//program logic
	do {
		
		std::cin.clear();
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		
//		std::cout << "Enter a selection (Q to quit): ";
		
		std::cout << "Enter a selection (Q to quit): ";
		std::cin >> option;
		
		switch (option) {
			case 'F':
			case 'f': 
			{
				std::cout << "Playing first song: " << std::endl;
				
				current_song = playlist.begin(); 
				
				display_current_song(*current_song);
				
			
				break;
			}
			
			case 'N':
			case 'n': 
			{
				std::cout << "Playing next song: " << std::endl;
				
				if (*current_song == playlist.back()) {
					current_song = playlist.begin();
				}
				else {
					++current_song; 
				}
				
				display_current_song(*current_song);
				break;
			}
			
			case 'P':
			case 'p':
			{
				std::cout << "Playing previous song: " << std::endl;
				
				if (*current_song == playlist.front()) {
					current_song = playlist.end();
					--current_song;
				}
				else {
					--current_song;
				}
				
				display_current_song(*current_song);
				break;
			}
			
			case 'A':
			case 'a':
			{
				std::cout << "Adding and playing new song: " << std::endl;
				
				std::string name{};
				std::string artist{};
				int rating{};
				
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				
				std::cout << "Enter song name: ";
				getline(std::cin, name);
				std::cout << "Enter song artist: ";
				getline(std::cin, artist);
				std::cout << "Enter your rating (1-5): ";
				std::cin >> rating;
				
				Song new_song(name, artist, rating);
				
				//checking to see if the song is unique or it already exists
				auto check_new_song_it = std::find(playlist.begin(), playlist.end(), new_song);
				if (check_new_song_it != playlist.end()) {
					current_song = check_new_song_it;
					display_current_song(*current_song);
				}
				else {
					auto it = std::find(playlist.begin(), playlist.end(), *current_song); 
					playlist.insert(it, new_song);
					--current_song;
					display_current_song(*current_song);
				}
				
				break;
			}
			
			case 'L':
			case 'l':
			{
				display_playlist(playlist, *current_song);
				break;
			}
			
			case 'Q':
			case 'q':
			{
				break;
			}
			
			default:
			{
				std::cout << "You have not entered a valid option" << std::endl;
				break;
			}
		}
		display_menu(); 
		
	}while (option != 'Q' || option != 'q');
	
	std::cout << "Thanks for listening" << std::endl;
	
	return 0;
}
