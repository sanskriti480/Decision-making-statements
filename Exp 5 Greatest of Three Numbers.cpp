//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 5

#include <iostream>
using namespace std;

int main() {
    
    int num1 , num2 , num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    if(num1 > num2){
        if(num1 > num3){
            cout << num1 << " is the greatest."<<endl;
        }
        else if(num3 > num1){
            cout << num3 << " is the greatest."<<endl;
        }
        else{
            cout << "Both " <<num1<< " and " <<num3<<" are greater.";
        }
    }
    
    else if(num2 > num1){
        if(num2 > num3){
            cout << num2 << " is the greatest."<<endl;
        }
        else if(num3 > num2){
            cout << num3 << " is the greatest."<<endl;
        }
        else{
            cout << "Both " <<num2<< " and " <<num3<<" are greater.";
        }
    }
    
    else{
        if(num3 > num2){
            cout << num3 << " is the greatest."<<endl;
        }
        else if(num2 > num3){
            cout << "Both " <<num1<< " and " <<num2<<" are greater.";
        }
        else{
            cout << "All are equal.";
        }
    }

    return 0;
}

//Output

//Enter first number: 2
//Enter second number: 4
//Enter third number: 1
//4 is the greatest.
