#include <iostream>
#include <string>
using namespace std;

int main() {
    string string1, string2, result;

    for (int i = 1; i <= 3; i++) {
        cout << "\n--- Round " << i << " ---" << endl;
        cout << "Enter first string: ";
        getline(cin, string1);
        cout << "Enter second string: ";
        getline(cin, string2);

        result = string1 + string2;
        cout << "Concatenated result: " << result << endl;
    }

    return 0;
}
