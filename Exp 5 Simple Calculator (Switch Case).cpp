//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 5

#include <iostream>
using namespace std;

int main() {
    
    float a,b,f;
    int choice;
    cout << "Welcome to the calculator!!" << endl;
    cout << "1.Addition "<<endl<<"2.Subtraction "<<endl<<"3.Multiplication "<<endl<<"4.Division "<<endl;
    
    cout << "Enter 1/2/3/4: ";
    cin >> choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    switch (choice)
    {
        case 1:
        f = a+b;
        cout << "The addition is: "<<f<<endl;
        break;
        
        case 2:
        f = a-b;
        cout << "The subtraction is: "<<f<<endl;
        break;
        
        case 3:
        f = a*b;
        cout << "The multiplication is: "<<f<<endl;
        break;
        
        case 4:
        if (b == 0)
        {
        cout << "Invalid denominator. Division by zero not allowed.";
        }
        
    else {
        f = a / b;
        cout << "The division is: " << f << endl;
    }
    break;
        
        default:
        cout << "Enter a valid choice!!";
        break;
    }

    return 0;
}

//Output

//Welcome to the calculator!!
//1.Addition 
//2.Subtraction 
//3.Multiplication 
//4.Division 
//Enter 1/2/3/4: 3
//Enter first number: 4
//Enter second number: 8
//The multiplication is: 32
