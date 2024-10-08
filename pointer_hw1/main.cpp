#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter value of A:";
    cin >> a;


    int* num = &a;

    if (*num > 0)
    {
        cout << "Value of A is positive" << endl;
    }
    else if (*num < 0)
    {
        cout << "Value of A is negative" << endl;
    }
    else
    {
        cout << "Value of A is zero" << endl;
    }


    return 0;
}