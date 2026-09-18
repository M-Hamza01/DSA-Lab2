#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int capacity;
    cout << "Enter the maximum string length: ";
    cin >> capacity;
    cin.ignore(); // cear the newline character from the input buffer

    // Dynamically allocate memory for string
    char *str = new char[capacity + 1];

    cout << "Enter the string: ";
    cin.getline(str, capacity + 1);

    int length = strlen(str);

    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << "\n";

    // freee the dynamically allocated memory
    delete[] str;

    return 0;
}