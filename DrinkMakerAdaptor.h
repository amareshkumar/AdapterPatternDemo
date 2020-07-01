#pragma once

#include <string>

#include "IDrinkMaker.h"
#include "Adaptee.h"


//Adaptor
class DrinkMakerAdaptor :
    public IDrinkMaker
{

public:
    DrinkMakerAdaptor(Drinks *pDrinks=nullptr) : p_drinks(new Drinks()) {
    }

    virtual void get_coffee() override ;
    virtual int tender_price_coffee() override ;
    virtual void set_feedback(std::string ) override ;

private:
    Drinks* p_drinks;
    std::string feedback;
};

