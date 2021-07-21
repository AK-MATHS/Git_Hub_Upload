


#include <iostream>
#include "Movies.h"

/**************************************************************************
    Movies no.args constructor
**************************************************************************/
Movies::Movies() {
}

/**************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

/**************************************************************************
    add_movie expects the name of the movie, rating and watched count
    
     * It will search the movies vector to see if a movie object already exists
     * with the same name.
     * 
     * If it does then return false since the movie already exists
     * Otherwise, create a movie object from the provided information
     * and add that movie object to the movies vector and return true
**************************************************************************/

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    //you implement this method
    
    for (const Movie &movie : movies) {
        if (movie.get_name() == name) {
            return false;
        }
        else {
        }
    }
    
    Movie movie {name, rating, watched};
    movies.push_back(movie);
    return true;

}

/**************************************************************************
    increment_watched expects the name of the movie to increment 
    the watched count

    it will search the movies vector to see if a movie object already exists
    with the same name.
    If it does the increment that object's watched by 1 and return true.
    
    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    ***********************************************************************/
    
bool Movies::increment_watched(std::string name) {
    //you implement this method
    
    for (Movie &movie : movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
        else {
        }
    }
    return false;
    
}


/***************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.diplay method so the movie
    object displays itself
    ***********************************************************************/
    
void Movies::display() const {
    //You implement this method
        if (movies.size() == 0) {    
            std::cout << "Sorry, no movies to display" << std::endl;
        }
        else {
            std::cout << "\n======================================================" << std::endl;
            for (const Movie &movie : movies) {
                movie.display();
                //std::cout << movie.get_name() << ", " << movie.get_rating() << ", " << movie.get_watched() << std::endl;
            }
            std::cout << "\n======================================================" << std::endl;
        }
}
