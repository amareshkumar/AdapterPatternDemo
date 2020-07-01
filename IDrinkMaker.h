#pragma once
#include <string>

//TargetInterface
class IDrinkMaker
{
public:
	virtual void get_coffee()=0;
	virtual int tender_price_coffee()=0;
	virtual void set_feedback(std::string feedback)=0;
};

