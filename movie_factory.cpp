#include <iostream>
#include <stdexcept>
#include <string>
#include "movie_factory.h"
#include "movie.h"


std::vector<Movie*> CreateMovies(std::vector<std::string> title, std::vector<std::string> director, std::vector<int> runtime, std::vector<int> id, std::vector<double> rating)
{
	std::vector<Movie*> movies;


	for (int i = 0; i < title.size(); i++) {
		movies.push_back(new Movie(title.at(i), director.at(i), runtime.at(i), id.at(i), rating.at(i)));
	}

	return movies;
}
