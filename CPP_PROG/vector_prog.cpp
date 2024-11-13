#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> numbers;
    int size, i, element;

    cout << "Enter the number of elements: " << endl;
    cin >> size;

    cout << "Enter the elements: " << endl;
    for(i = 0; i < size; i++) {
        cin >> element;
        numbers.push_back(element);
    }

    cout << "The elements of the vector are:\n";

    for(i=0;i<size;i++)
    {

        cout<< numbers[i]<<endl;
    }
    // // Check if the vector has enough elements before accessing them
    // if (size > 3) {
    //     cout << numbers[3] << endl;
    // } else {
    //     cout << "Not enough elements for numbers[3]" << endl;
    // }

    // if (size > 2) {
    //     cout << numbers[2] << endl;
    // } else {
    //     cout << "Not enough elements for numbers[2]" << endl;
    // }

    // if (size > 1) {
    //     cout << numbers[1] << endl;
    // } else {
    //     cout << "Not enough elements for numbers[1]" << endl;
    // }

    return 0;
}
