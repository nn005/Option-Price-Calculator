#include "Call.cpp"
#include "Put.cpp"
#include "BlackScholes.cpp"
#include <iostream>
//including all the supporting files

int main(){

    //Contained in while loop to loop the calculator functionality

    while(true){

        //Declare Variables that we will ask the user to input

        double SP{0};
        double ST{0};
        double r{0};
        double t{0};
        double v{0};
        char type{'\0'};
        bool continue_loop{true};

        std::cout<< "Welcome to the European Options Price Calculator\n\n This Calculator follows the Black-Scholes Model to calculate the prices of European Call and put options\n\n More information can be found at this link: https://www.investopedia.com/terms/b/blackscholes.asp \n\n"<<std::endl;

        std::cout<<"To begin, Enter the Stock Price: ";
        std::cin>>SP;

        std::cout<<"Enter the Option Strike Price: ";
        std::cin>>ST;

        std::cout<<"Enter the Risk-Free Interest Rate (%): ";
        std::cin>>r;

        std::cout<<"Enter the Time to Maturity (Years): ";
        std::cin>>t;

        std::cout<<"Enter the Volatility (%): ";
        std::cin>>v;

        std::cout<<"Do You Want to Calculate a Call or a Put? (Enter c or p)";
        std::cin>>type;

        //Depending on if user wishes to calculate the price of a Call or a Put,
        //We declare the nessecary instance of the call or put class and use its
        //member function to calculate and return its price

        if (type == 'c' || type == 'C'){
            Call new_call{SP, ST, r, t, v};
            std::cout<<"The price for the Call is: "<< new_call.Call_Price()<<std::endl;
        }
        else if(type == 'p' || type == 'P'){
            Put new_put{SP, ST, r, t, v};
            std::cout<<"The price for the Put is: "<< new_put.Put_Price()<<std::endl;
        }
        else{
            return 0;
        }

        //Asks the user whether they wish to use another calculation or not
        std::cout<<"Do you want to do another calculation? (1 or 0): ";
        std::cin>>continue_loop;
        std::cout<<std::endl;

        if(continue_loop == false)
            return 0;
        

    }

   


    return 0;
}