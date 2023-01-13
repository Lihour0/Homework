#include "iostream"
//define ExchangeRate 
#define Dollar2RielRate 0.00025

//Calculate Dollar to Riel with predefine Dollar to Riel Exchange Rate
float Dollar2Riel(int Riel){
    float Conversion;
    Conversion = Riel * Dollar2RielRate;
    std::cout << "This is your Riel to Dollar Conversion: " <<Conversion << "$";
    return Conversion;
}

int main(){

    int Riel;

    std::cout << "Enter Amount of Riel you want to exchange: ";
    std::cin >> Riel;

    Dollar2Riel(Riel);
}