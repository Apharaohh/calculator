#include <iostream>
using namespace std;

//Main function
int main (){
    
    //Naming of variables and data types
    char operation;
    float num1, num2;
    
    //Asks user for two integers of datatype float
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    
    //Asks the user for the type of operator to be used
    cout << "What kind of operator would you like to use? (+, -, /, *)" << endl;
    cin >> operation;
    
    //Switch statement that checks for the operator and then follows the according steps to output the correct number
    switch (operation) {
        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;
        
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;
            
        case '/':
            
            // Uses if else statement that checks to see if the divisor isnt 0. Other wise it would follow the correct parameters
            if (num2 !=0) {
                cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
            }else
                cout << "Error! Division by zero." << endl;
                break;
            
        //Default line statement that if the user inputs something other that the options listed will throw an error and break off from the switch operation
        default:
            cout << "Invalid operator please try again." << endl;
            break;
    }
    
    return 0;
};

