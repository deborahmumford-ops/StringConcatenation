#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    // Get input from user
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    // Create pointers to dynamic memory using 'new'
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Assign the variable values into the dynamic memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the variable contents
    cout << "\n--- Variable Values ---" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    // Display the pointer contents (dereferenced values)
    cout << "\n--- Pointer Contents (dereferenced) ---" << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    // Display the pointer addresses
    cout << "\n--- Pointer Addresses ---" << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;

    // Free the dynamic memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Avoid dangling pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
