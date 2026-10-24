#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int choice;
        cout << "\n1 : Prime check\n" "2 : Exit\n" "Enter your Choice: ";
        cin >> choice;
        
        if (choice == 1)
        {
            int n;
            cout << "Enter your number: ";
            cin >> n;
    
            if (n <= 1 ){
                cout << "number is not prime: " << n <<  endl;
            }else{
                bool isprime = true;
                for (int i = 2; i * i <= n; i++) {
                    if (n % i == 0)
                    {
                        isprime = false;
                        break;
                    }
                    
                }
                if (isprime == true){
                    cout << "Number is Prime: " << n << endl;
                }else{
                    cout << "Number is not prime: " << n << endl;
                }
            }
        }else if (choice == 2){
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }else{
            cout << "Invalid input" << endl;
        }
    }

    return 0;
}