#include "iostream"

//For storing Result
float RES = 0;

//Function to convert Fahrenheit to Celsius
float F2C(float F){
    RES = 5.0/9.0 * (F - 32);
    std::cout << RES << "\370F";
    return RES;
}

//Function to convert Celsius to Fahrenheit
float C2F(float C){
    RES = (9.0/5.0 * C )+ 32;
    std::cout << RES << "\370C";
    return RES;
}


int main(){

    float C = 0;
    float F = 0;
    int option = 0;
    

    std::cout << "Options:\n 1.Fahrenheit To Celsius\n 2.Celsius To Fahrenheit\n ";
    std::cout << "Choose 1 or 2: ";
    std::cin >> option;

//Switch Case Between Celsius to Fahrenheit or Fahrenheit to Celsius
    switch (option){
        case 1:
            std::cout<<"Fahrenheit To Celsius: ";
            std::cin >> C;
            F2C(C); 
            break;
        case 2:
            std::cout <<"Celsius To Fahrenheit: ";
            std::cin >> F;
            C2F(F);
            break;
        default:
            std::cout<< "Invalid Input";
    }
}