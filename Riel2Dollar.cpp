#include "iostream"
#define Dollar2RielRate 0.00025
//define ExchangeRate 

//Fuction for Calculating Dollar to Riel with predefine Dollar to Riel Exchange Rate
float Dollar2Riel(int Riel){
    float Conversion = 0;
    Conversion = Riel * Dollar2RielRate;
    std::cout << "This is your Riel to Dollar Conversion: " <<Conversion << "$";
    return Conversion;
}

int main(){

    int Riel = 0;

    std::cout << "Enter Amount of Riel you want to exchange: ";
    std::cin >> Riel;

    Dollar2Riel(Riel);
}