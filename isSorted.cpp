#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int *arr, const int size) {
    return false; 
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true); 
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false); 
}

int main() {
    testSortedArray();
    testUnsortedArray();
    cout << "All TDD tests passed successfully!\n";
    return 0;
}