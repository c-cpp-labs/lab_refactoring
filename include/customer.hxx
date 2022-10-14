//
// Created by MrMam on 15.10.2022.
//

#ifndef REFACTORING_CUSTOMER_HXX
#define REFACTORING_CUSTOMER_HXX

#include "rental.hxx"
#include <vector>

class customer {
public:
    customer(std::string name, std::vector<rental*> rentals):
    _name(name), _rentals(rentals) {}

    [[nodiscard]] std::string get_name() const {
        return _name;
    }
    std::string statement();
private:
    std::string _name;
    std::vector<rental*> _rentals;
};

#endif //REFACTORING_CUSTOMER_HXX
