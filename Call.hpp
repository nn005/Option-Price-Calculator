#ifndef CALL_HPP_
#define CALL_HPP_

#include <iostream>
#include "BlackScholes.hpp"

class Call: public BlackScholes{


    public:

        Call(double stock_price, double strike_price, double interest_rate, double time, double volatility);
        double Call_Price();


    private:

        double d1;
        double d2;

};




#endif