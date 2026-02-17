#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Try to access an element that does not exist (will throw an exception)
  //cout << cars.at(6);
  cout << cars[6];
  return 0;
}
