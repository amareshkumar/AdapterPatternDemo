#include <iostream>

#include "DrinkMakerAdaptor.h"

using namespace std; 

int main() {
    DrinkMakerAdaptor drink_adaptor; //drink drink maker adaptor

    drink_adaptor.get_coffee();
    cout << "price is: "<< drink_adaptor.tender_price_coffee() << endl;
}