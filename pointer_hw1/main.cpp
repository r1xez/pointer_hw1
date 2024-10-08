#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter value of A:";
    cin >> a;
    cout << "Enter value of B:";
    cin >> b;


    int* pA = &a;
    int* pB = &b;

    if (*pA > *pB)
        cout << "A is bigger than B" << endl;
    else if (*pA < *pB)
        cout << "A is smaller than B" << endl;
    else
        cout << "A is equal to B" << endl;


    return 0;
}