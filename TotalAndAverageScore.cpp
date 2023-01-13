#include "iostream"
#include "map"
#include "string"

//Constant Total Subject to 6 As Array start from 0
#define TOTAL_SUBJECT 6

//Calculate Average Score
float AverageScore(float TotalScore){
    float RES;
    //All Total Subject
    int totalSubject = 5;
    RES = TotalScore / totalSubject;
    std::cout<< "Average Score: "<<RES;
    return RES;
}

int main() {

    float TotalScore;
    float UserInput[TOTAL_SUBJECT];

   
    //We can Use Either Array Or Map to Store Subject
    //Use Array to store Subjects
    //std::string Subjects[TOTAL_SUBJECT] = { "CPP", "ACCESS", "PHP", "NETWORK", "WINDOWS" };
    //Use Map to store Subjects
    std::map<int, std::string> Subjects {{1, "CPP"}, {2, "ACCESS"}, {3, "PHP"}, {4, "NETWORK"}, {5, "WINDOWS"}};

    for(int i = 1; i < TOTAL_SUBJECT; i++){
        std::cout<<"Enter score Of ";
        std::cout<< Subjects[i] << ": ";
        std::cin>> UserInput[i];
        //Calculate Total Score of User Input
        TotalScore += UserInput[i];
    }
    std::cout<< "Total Score: " << TotalScore << "\n";
    AverageScore(TotalScore);
}