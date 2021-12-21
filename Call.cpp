#include "Call.hpp"

#include <iostream>
#include <cmath>

Call::Call(double stock_price, double strike_price, double interest_rate, double time, double volatility):
BlackScholes{ stock_price,  strike_price,  interest_rate,  time,  volatility}
{
    // std::cout<<this->stock_price<<std::endl;
    // std::cout<<this->strike_price<<std::endl;
    // std::cout<<this->interest_rate<<std::endl;
    // std::cout<<this->time<<std::endl;
    // std::cout<<this->volatility<<std::endl;

    this->d1 = ( 
        std::log(this->stock_price/this->strike_price)  + 

    (this->interest_rate + (std::pow(this->volatility, 2)/2) )*this->time ) 
    
    / ( this->volatility * std::sqrt(this->time));

    this->d2 = this->d1 - this->volatility*std::sqrt(this->time);

    // std::cout<<this->d1<<std::endl;
    // std::cout<<this->d2<<std::endl;

}

double Call::Call_Price(){

    return (N(this->d1)*this->stock_price) - (N(this->d2)*this->strike_price*std::exp(-this->interest_rate*this->time));



}

