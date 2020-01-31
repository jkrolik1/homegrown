#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

void calculator();  // using vectors

int main(){
    calculator();
    return 0;
}


void calculator(){
    double number1=0, number2=0;
    double equals=0;

    std::string enteredCalculation = "";
    std::vector<std::string> checkExpresion;

    std::cout << "Enter calculation: ";
    getline(std::cin, enteredCalculation);
    std::stringstream ss(enteredCalculation);
    std::string partOfCalculation;

    while(getline(ss,partOfCalculation,' '))
        checkExpresion.push_back(partOfCalculation);

    number1 = std::stoi(checkExpresion[0]);
    number2 = std::stoi(checkExpresion[2]);
    std::string operation = checkExpresion[1];

    if(operation=="+")
        printf("Score of %.1f + %.1f = %.1f\n",
               number1,number2,(number1+number2));
    else if(operation=="-")
        printf("Score of %.1f - %.1f = %.1f\n",
               number1,number2,(number1-number2));
    else if(operation=="*")
        printf("Score of %.1f * %.1f = %.1f\n",
               number1,number2,(number1*number2));
    else if(operation=="/")
        printf("Score of %.1f / %.1f = %.1f\n",
               number1,number2,(number1/number2));
    else
        std::cout << "Error\n";

}

