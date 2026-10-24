// First way using if condition

/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Your number: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    
    return 0;
}
*/

// Second way without if condition

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter Your number: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i += 2 ) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
