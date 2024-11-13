#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Assuming the user enters at least one number
    int maxNum;
    cout << "Enter number 1: ";
    cin >> maxNum;

    for (int i = 2; i <= n; ++i) {
        int num;
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > maxNum) {
            maxNum = num;  // Update maxNum if num is greater
        }
    }

    cout << "The maximum of the numbers is: " << maxNum << endl;

    return 0;
}
