#ifndef BLACKSCHOLES_HPP_
#define BLACKSCHOLES_HPP_

#include <iostream>
#include <cmath>

class BlackScholes {

    public:

    BlackScholes();

    BlackScholes( double stock_price, double strike_price, double interest_rate, double time, double volatility );


    protected:

        double stock_price;

        double strike_price;

        double interest_rate;

        double time;

        double volatility;

};

//Cummulative Normal Distrivution Function: Used from StackOverflow: https://stackoverflow.com/questions/2328258/cumulative-normal-distribution-function-in-c-c
double N( double value);

double N( double value){

    return 0.5 * std::erfc(-value * std::sqrt(0.5));

}


#endif