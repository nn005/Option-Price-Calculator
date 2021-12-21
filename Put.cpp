#include "Put.hpp"

#include <iostream>

#include <cmath>

Put::Put(double stock_price, double strike_price, double interest_rate, double time, double volatility):
BlackScholes{stock_price, strike_price, interest_rate, time, volatility}
{
    this->d1 = ( 
        std::log(this->stock_price/this->strike_price)  + 

    (this->interest_rate + (std::pow(this->volatility, 2)/2) )*this->time ) 
    
    / ( this->volatility * std::sqrt(this->time));

    this->d2 = this->d1 - this->volatility*std::sqrt(this->time);


}

double Put::Put_Price(){

    return  (N(-this->d2)*this->strike_price*std::exp(-this->interest_rate*this->time)) - (N(-this->d1)*this->stock_price);



}