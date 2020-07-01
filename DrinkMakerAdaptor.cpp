#include "DrinkMakerAdaptor.h"


void DrinkMakerAdaptor::get_coffee() {
    p_drinks->make_black_coffee();
}

int DrinkMakerAdaptor::tender_price_coffee() {
    return p_drinks->black_coffe_price();
}

void DrinkMakerAdaptor::set_feedback(std::string feedback) {
    this->feedback =  feedback;
}