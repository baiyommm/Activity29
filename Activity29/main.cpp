#include <iostream>
#include "header.h"

using namespace std;
using namespace StringParser;

int main() {
    
    string data = "24 S2, 2014";
    Movie movie = parseMovieString(data);

    cout << "Episode: " << movie.episode << ", Year: " << movie.year << endl;

    return 0;
}
