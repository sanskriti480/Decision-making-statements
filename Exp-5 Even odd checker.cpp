//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 5

#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "It is a even number.";
    }
    else{
        cout << "It is a odd number.";
    }

    return 0;
}

//Program 2

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

//Program 3

#include <iostream>
using namespace std;

int main() {
    
    char alphabet;
    
    cout << "Enter a alphabet: ";
    cin >> alphabet;
    
    if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U' || alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        cout << "It is a vowel!!";
    }
    else{
        cout << "It is a consonant!!";
    }

    return 0;
}

//Program 4

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

//Program 5

#include <iostream>
using namespace std;

int main() {
    
    int choice;
    
    cout << "Enter a number from 1-7: ";
    cin >> choice;
    
    switch (choice)
    {
        case 1:
        cout << "It is Monday. Enjoy the week with fresh energy!"<<endl;
        break;
        
        case 2:
        cout << "It is Tuesday. Keep going , don't give up!"<<endl;
        break;
        
        case 3:
        cout << "It is Wednesday. You are half way up!"<<endl;
        break;
        
       case 4:
        cout << "It is Thursday. You are almost there!"<<endl;
        break;
        
        case 5:
        cout << "It is Friday. Yay , last day at work!"<<endl;
        break;
        
        case 6:
        cout << "It is Saturday. Finally chill time , plan something fun!"<<endl;
        break;
        
        case 7:
        cout << "It is Sunday. Today is officially a lazy day ,so enjoy and regret nothing!"<<endl;
        break;
        
        default:
        cout << "Enter a valid choice!!";
        break;
    }

    return 0;
}

//Outputs

//Program 1
//Enter a number: 4
//It is a even number.

//Program 2
//Enter first number: 2
//Enter second number: 4
//Enter third number: 1
//4 is the greatest.

//Program 3
//Enter a alphabet: A
//It is a vowel!!

//Program 4 
//Welcome to the calculator!!
//1.Addition 
//2.Subtraction 
//3.Multiplication 
//4.Division 
//Enter 1/2/3/4: 3
//Enter first number: 4
//Enter second number: 8
//The multiplication is: 32

//Program 5
//Enter a number from 1-7: 3
//It is Wednesday. You are half way up!
