#include "Put.hpp"

#include <iostream>

#include <cmath>

//Default Constructor which also calls declares instance of base class Constructor

Put::Put(double stock_price, double strike_price, double interest_rate, double time, double volatility):
BlackScholes{stock_price, strike_price, interest_rate, time, volatility}
{

    //Sets private member variables of Put Class based on the Black-Scholes Model

    this->d1 = ( std::log(this->stock_price/this->strike_price)  + (this->interest_rate + (std::pow(this->volatility, 2)/2) )*this->time ) / ( this->volatility * std::sqrt(this->time));

    this->d2 = this->d1 - this->volatility*std::sqrt(this->time);


}


double Put::Put_Price(){

    //Uses Private member variable and Black-Scholes Put formula to calculate the price of an option put

    return  (N(-this->d2)*this->strike_price*std::exp(-this->interest_rate*this->time)) - (N(-this->d1)*this->stock_price);



}