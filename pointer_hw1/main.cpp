#include <iostream>

using namespace std;

int main() {

    const int SIZE = 6;
    int arr[SIZE] = { 1, 2, 3, 4, 5,10};
    int sum = 0;

    int* ptr = arr;

    for (int i = 0; i < SIZE; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum of the array elements: " << sum << endl;



    return 0;
}