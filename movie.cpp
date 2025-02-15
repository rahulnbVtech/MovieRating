#include <iostream>
#include <stdexcept>
#include <string>
#include "movie.h"

std::string title;
std::string director;
int runtime;
double rating;
int id;

Movie::Movie(std::string t, std::string d, int r, int i, double rate) { // this is the constructor for the movie
	title = t;
	director = d;
	id = i;

	if (r >= 0) {
		runtime = r;
	}
	else {
		throw std::invalid_argument("invalid");
	}

	if (rate >= 0 && rate <= 10) {
		rating = rate;
	}
	else {
		throw std::invalid_argument("invalid");
	}
}

void Movie::PrintMovieData() { // this is where the movie data gets printed
	std::cout << "ID: " << id << "Title: " << title << "Director : " 
		<< director << "Runtime : " << runtime << "Rating: " << rating << std::endl;
}



// The five methods below are all the get methods
std::string Movie::GetTitle()
{
	return title;
}

std::string Movie::GetDirector()
{
	return director;
}

double Movie::GetRating()
{
	return rating;
}

int Movie::GetRuntime()
{
	return runtime;
}

int Movie::GetID() {
	return id;
}

std::string GetTitle() {
	return title;
}



