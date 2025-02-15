cmake_minimum_required(VERSION 3.24)  
project(MovieRating)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
include_directories(test/catch2)


add_executable(MovieRating
 "movie.cpp"
 "main.cpp"
 "movie_factory.cpp"
)



