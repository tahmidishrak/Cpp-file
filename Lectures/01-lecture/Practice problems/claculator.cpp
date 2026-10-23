#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Enter a value: ";
    cin >> a;
    
    cout << "Enter b value: ";
    cin >> b;

    int choice;
    cout << "1 = Addition" << endl << "2 = Subtraction" << endl << "3 = Multiplication" << endl << "4 = Devide" << endl<< "Enter your choice: ";
    cin >> choice;    
    if (choice == 1)
    {
        cout << "Your sum is: " << (a+b) << endl;
    }else if (choice == 2)
    {
        cout << "Your subtract is: " << (a-b) << endl;
    }else if (choice == 3)
    {
        cout << "Your multiply is: " << (a*b) << endl;
    }else if (choice == 4){
        cout << "Your quotient is: " << (a/b) << endl;
    }else{
        cout << "Invalid input" << endl;
    }
    
    return 0;
}