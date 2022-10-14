//
// Created by MrMam on 15.10.2022.
//

#ifndef REFACTORING_RENTAL_HXX
#define REFACTORING_RENTAL_HXX

#include "movie.hxx"

class rental {

public:
    rental(movie *m, int days): _movie(m), _days_rented(days) {}

    [[nodiscard]] int get_days_rented () const {
        return _days_rented;
    }

    [[nodiscard]] movie* get_movie() const {
        return _movie;
    }

private:
    movie* _movie;
    int _days_rented;
};

#endif //REFACTORING_RENTAL_HXX
