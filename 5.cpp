// . Write a C++ program to raise an exception if any attempt is made to refer an element whose index is
//beyond the array size.

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arraySize = 5;
    int arr[arraySize];

    try {
        int index;
        cout << "Enter the index to access: ";
        cin >> index;

        if (index < 0 || index >= arraySize) {
            throw out_of_range("Index out of range: Attempted to access an element beyond the array size.");
        }

        int value = arr[index];
        cout << "Value at index " << index << ": " << value << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}