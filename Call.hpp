#ifndef CALL_HPP_
#define CALL_HPP_

#include <iostream>
#include "BlackScholes.hpp"

//Call class which inherits from the base BlackScholes class
class Call: public BlackScholes{


    public:

        //Default Constructor
        //Member function to calculate the Option Call price
        Call(double stock_price, double strike_price, double interest_rate, double time, double volatility);
        double Call_Price();


    private:

        //Private variables pertinent to calculation
        double d1;
        double d2;

};




#endif