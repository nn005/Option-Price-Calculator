#ifndef BLACKSCHOLES_HPP_
#define BLACKSCHOLES_HPP_

#include <iostream>
#include <cmath>


//Declaring and Defining the BlackScholes base class
class BlackScholes {

    public:

    //Default and Main Constructors

    //No destructor used because no dynamically allocated memory used

    BlackScholes();

    BlackScholes( double stock_price, double strike_price, double interest_rate, double time, double volatility );


    protected:

        //Protected Variables that will be inputted by user and declared 
        //as protected so that clases that inherit them can access them

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