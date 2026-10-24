#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter your chararcter: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Character is lower case: " << ch << endl;
    }else if (ch >= 'A' && ch <= 'Z'){
        cout << "Character is Upper case: " << ch << endl;
    }else{
        cout << "Invalid Input: " << ch << endl;
    }
    
    return 0;
}