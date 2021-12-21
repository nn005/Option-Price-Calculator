#ifndef PUT_HPP_
#define PUT_HPP_

#include <iostream>
#include "BlackScholes.hpp"

//Put class which inherits from the base BlackScholes class
class Put: public BlackScholes{


    public:

        //Default Constructor
        //Member function to calculate the Option Put price
        
        Put(double stock_price, double strike_price, double interest_rate, double time, double volatility);
        double Put_Price();


    private:

        //Private variables pertinent to calculation

        double d1;
        double d2;

};

#endif

