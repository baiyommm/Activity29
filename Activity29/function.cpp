#include "header.h"
#include <sstream>

namespace StringParser {
    Movie parseMovieString(const string& data) {
        Movie movie;
        istringstream iss(data);

        // Extract up to the string's comma
        getline(iss, movie.episode, ',');

        // Extract the second element in the string
        iss >> movie.year;

        return movie;
    }
}
