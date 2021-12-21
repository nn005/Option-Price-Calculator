#include "BlackScholes.hpp"

#include <iostream>

//Main Constructor sets protected variables to user input
BlackScholes::BlackScholes( double stock_price, double strike_price, double interest_rate, double time, double volatility ){

    this->stock_price = stock_price;
    this->strike_price = strike_price;
    this->interest_rate = interest_rate/100;
    this->time = time;
    this->volatility = volatility/100;



}

//Default Constructor
BlackScholes::BlackScholes(){

    this->stock_price = 0;
    this->strike_price = 0;
    this->interest_rate = 0;
    this->time = 0;
    this->volatility = 0;
}