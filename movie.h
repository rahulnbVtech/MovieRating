#ifndef MOVIE_CLASS

#define MOVIE_CLASS


#include <iostream>
#include <stdexcept>
#include <string>


class Movie {
private: 
	int id;

	std::string title;
	std::string director;
	int runtime;
	double rating;

public:

	Movie(std::string t, std::string d, int r, int i, double rate);
	void PrintMovieData();
	std::string GetTitle();
	std::string GetDirector();
	double GetRating();
	int GetRuntime();
	int GetID();

};


#endif