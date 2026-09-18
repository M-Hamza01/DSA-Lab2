#include <iostream>
using namespace std;

// Part 1: Function to print memory location and value
void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << "\n";
    cout << "Value pointed to: " << *ptr << "\n";
}

int main() {
    // Part 2a: Allocate an int on the stack
    int iValue = 10;
    cout << "Stack Allocation: \n";
    analyze_pointer(&iValue); 

    // Part 2b: Allocate an int on the heap
    int *heapValue = new int; 
    *heapValue = 25;
    cout << "\nHeap Allocation: \n";
    analyze_pointer(heapValue);

    // Free the dynamically allocated memory
    delete heapValue; 

    return 0;
}