//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 5

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

//Output

//Enter a number from 1-7: 3
//It is Wednesday. You are half way up!
