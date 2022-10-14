#include <iostream>
#include <list>
#include "include/customer.hxx"
#include "include/movie.hxx"
#include "include/rental.hxx"

int main() {
    auto* RAMBO = new movie("Rambo", REGULAR);
    auto* LOTR = new movie("Lord of the Rings", NEW_RELEASE);
    auto* HARRY_POTTER = new movie("Harry Potter", CHILDREN);

    std::vector<rental*> rentals = {
        new rental(RAMBO, 1), new rental(LOTR, 4), new rental(HARRY_POTTER, 5)
    };

    std::string statement = (new customer("John Doe", rentals))->statement();

    std::cout << statement;
}
