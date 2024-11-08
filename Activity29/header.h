#ifndef HEADER_H
#define HEADER_H
#include <string>

using namespace std;

struct Movie {
    string episode;
    int year;
};

namespace StringParser {
    Movie parseMovieString(const string& data);
}

#endif
