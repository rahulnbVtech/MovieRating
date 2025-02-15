#include <iostream>
#include <vector>
#include <limits>
#include "movie.h"
#include "movie_factory.h"

// Find the highest rated movie
Movie* FindHighestRatedMovie(std::vector<Movie*> movies) {
    double max = 0;
    Movie* movie = nullptr; 
    for (int i = 0; i < movies.size(); i++) {
        if (movies.at(i)->GetRating() >= max) {
            max = movies.at(i)->GetRating();
            movie = movies.at(i);
        }
    }
    return movie;
}

// Calculate the average runtime of the movies
int CalculateAverageRuntime(std::vector<Movie*> movies) {
    int sum = 0;
    for (int i = 0; i < movies.size(); i++) {
        sum += movies.at(i)->GetRuntime();
    }
    return sum / movies.size();
}

int main() {
    std::vector<std::string> titles{ "Movie 1", "Movie 2", "Movie 3", "Movie 4", "Movie 5" };
    std::vector<std::string> directors{ "Director 1", "Director 2", "Director 3", "Director 4", "Director 5" };
    std::vector<int> runtimes{ 140, 175, 150, 160, 140 };
    std::vector<int> ids{ 1, 2, 3, 4, 5 };
    std::vector<double> ratings{ 9.1, 9.2, 9.0, 8.8, 8.9 };
    std::vector<Movie*> movies = CreateMovies(titles, directors, runtimes, ids, ratings);

    Movie* highest_rated = FindHighestRatedMovie(movies);
    int average_runtime = CalculateAverageRuntime(movies);


    std::cout << "Average runtime: " << average_runtime << " minutes" << std::endl;

    
    for (Movie* movie : movies) {
        delete movie;
    }

    return 0;
}
