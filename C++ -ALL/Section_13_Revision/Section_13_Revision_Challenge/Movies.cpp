#include "Movies.h"

Movies::Movies()
{
}

Movies::~Movies()
{
}


bool Movies::add_movie(std::string name, std::string rating, int watched) {
    
    if (movies.size() == 0) {
        Movie movie(name, rating, watched);
        movies.push_back(movie);
        return true;
    }
    else {
        for (Movie movie: movies) {
            if(name == movie.get_name()) {
                return false;
            }
            else{
                
            }
        }
        Movie movie(name, rating, watched);
        movies.push_back(movie);
        return true;
    }
}
    
bool Movies::increment_watched(std::string name) {
    if (movies.size() == 0) {
        return false;
    }
    else {
        for (auto &movie: movies) {
            if(name == movie.get_name()) {
                movie.increment_watched();
               
                return true;
            }
            else{
                
            }
        }
        return false;
    }
}
    
void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "=======================================" << std::endl;
        std::cout << "Empty" << std::endl;
        std::cout << "=======================================" << std::endl;
    }
    else {
        std::cout << "=======================================" << std::endl;
        for (auto movie: movies) {
            movie.display();
        }
        std::cout << "=======================================" << std::endl;
    }
}