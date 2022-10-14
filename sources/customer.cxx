//
// Created by MrMam on 15.10.2022.
//
#include <string>
#include "../include/customer.hxx"

std::string customer::statement() {
    double total_amount = 0;
    int frequent_renter_points = 0;
    std::string result = "Rental Record for " + get_name() + "\n";

    for (rental* each : _rentals) {
        double this_amount = 0;
        switch (each->get_movie()->get_price_code()) {
            case REGULAR: {
                this_amount += 2;
                if (each->get_days_rented() > 2) {
                    this_amount += (each->get_days_rented() - 2) * 1.5;
                }
            } break;
            case NEW_RELEASE: {
                this_amount += each->get_days_rented() * 3;
            } break;
            case CHILDREN: {
                this_amount += 1.5;
                if (each->get_days_rented() > 3) {
                    this_amount += (each->get_days_rented() - 3) * 1.5;
                }
            } break;
        }
        frequent_renter_points++;
        if ((each->get_movie()->get_price_code() == NEW_RELEASE) && each->get_days_rented() > 1) {
            frequent_renter_points++;
        }

        result += "\t" + each->get_movie()->get_title() + "\t" + std::to_string(this_amount) + "\n";
        total_amount += this_amount;
    }

    result += "Amount owed is " + std::to_string(total_amount) + "\n";
    result += "You earned " + std::to_string(frequent_renter_points) + " frequent renter points";
    return result;
}

