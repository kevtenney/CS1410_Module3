#include <iostream>
using namespace std;

// Task: define a function Arithmetic() that takes two
//  floats as input parameters and it displays
//  their sum, difference, and product
//Function Prototype
void Arithmetic(float f1, float f2);

//Main program
int main()
{
    float num1, num2;
    char answer;
    while(1) // run forever
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        Arithmetic(num1, num2);
        cout << "Do you want to do it again [y/n]?";
        cin >> answer;
        if(answer == 'n')
        {
            break;
        }

    }
    return 0;
}
// Function definition
void Arithmetic(float f1, float f2)
{

    cout<<"The sum of f1 + f2 = " << f1 + f2 <<endl;
    //return; // optional
}