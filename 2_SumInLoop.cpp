#include <iostream>

int main() {
    int sum = 0, input, iMax;
    std::cin >> iMax;
    
    for(int i = 0; i < iMax; ++i){
        std::cin >> input;
        sum = sum + input;
    }
    std::cout << sum;
}