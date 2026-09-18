#include <iostream>
using namespace std;

int main() {
    int size = 20; 
    
    // 1. Dynamic memory allocation using 'new'
    int *salArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        // 2. Using pointer arithmetic for input
        cin >> *(salArray + i); 
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        // 3. Using pointer arithmetic for modification
        *(salArray + i) = *(salArray + i) + *(salArray + i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        // 4. Using pointer arithmetic for output
        cout << *(salArray + i) << " ";
    }

    cout << endl;
    
    // 5. Deallocate memory using 'delete[]'
    delete[] salArray;

    return 0;
}