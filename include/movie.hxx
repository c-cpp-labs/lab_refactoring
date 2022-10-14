#include <utility>

//
// Created by MrMam on 15.10.2022.
//

#ifndef REFACTORING_MOVIE_HXX
#define REFACTORING_MOVIE_HXX

#include <string>

enum movie_type {
    REGULAR, NEW_RELEASE, CHILDREN
};

class movie {
public:
    movie(std::string title, movie_type price_code): _title(title), _price_code(price_code) {}

    [[nodiscard]] movie_type get_price_code() const {
        return _price_code;
    }

    [[nodiscard]] std::string get_title() const {
        return _title;
    }
private:
    std::string _title;
    movie_type _price_code;
};

#endif //REFACTORING_MOVIE_HXX
