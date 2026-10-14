#include <iostream>

using namespace std;

void countdown(int n) {
    if (n < 0) { // every recursive function needs a base case and a recursive case
        return;
    }
    std::cout << n << '\n';
    countdown(n - 1);
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    cout << "Currently calculating the factorial of: " << n << endl;
    return factorial(n - 1) * n;

}

int addElements(int* arr, int count) {
    // base case
    if (count <= 0) {
        return 0;
    }
    
    // recursive case

    cout << "The memory address of this addElements function call arr is: " << arr << endl;
    return addElements(arr + 1, count - 1) + arr[0]; // passing in array but advanced 1 memory address and how many more to go; each subsequent call will chop off the front part of the array; the memory address we send is the same address as before but 1 int address/size later

}

int main() {
    countdown(2);
    // cout << factorial(7);
    int n = 10;
    cout << "\n\nThe factorial of " << n << " is " << factorial(n) << endl;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "The sum of each element in the array is: " << addElements(arr, 10) << endl;

    // for (int i = 0; i < 10; i++) {

    // }
    return 0;
}