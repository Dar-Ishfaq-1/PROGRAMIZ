#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    
    std::cout << "Vector elements: ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    
    return 0;
}