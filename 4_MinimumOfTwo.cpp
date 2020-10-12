#include <iostream>

int main() {
    int x, y, iMax;
    std::cin >> iMax;
    
    for(int i = 0; i < iMax; ++i) {
        std::cin >> x;
        std::cin >> y;
        std::cout << std::min(x, y) << " ";
    }
}