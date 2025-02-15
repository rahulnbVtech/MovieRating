#ifndef MOVIE_FACTORY

#define MOVIE_FACTOR

#include <iostream>
#include <vector>
#include <string>
#include "movie.h"


std::vector<Movie*> CreateMovies(std::vector<std::string> title, std::vector<std::string> director, std::vector<int> runtime, std::vector<int> id, std::vector<double> rating);


#endif