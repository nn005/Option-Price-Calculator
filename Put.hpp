#ifndef PUT_HPP_
#define PUT_HPP_

#include <iostream>
#include "BlackScholes.hpp"

class Put: public BlackScholes{


    public:

        Put(double stock_price, double strike_price, double interest_rate, double time, double volatility);
        double Put_Price();


    private:

        double d1;
        double d2;

};

#endif

