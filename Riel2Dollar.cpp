#include "iostream"
#define Dollar2RielRate 0.00025
//define ExchangeRate 

//Fuction for Calculating Dollar to Riel with predefine Dollar to Riel Exchange Rate
float Dollar2Riel(int Riel){
    float Conversion = 0;
    Conversion = Riel * Dollar2RielRate;
    return Conversion;
}

int main(){

    int Riel = 0;

    std::cout << "Enter Amount of Riel you want to exchange: ";
    std::cin >> Riel;

    float Dolla2Riel = Dollar2Riel(Riel);

    std::cout << "This is your Riel to Dollar Conversion: " << Dolla2Riel << "$";
}