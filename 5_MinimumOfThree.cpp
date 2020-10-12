#include <iostream>

int main() {
    int x, y, z, iMax;
    std::cin >> iMax;
    
    for(int i = 0; i < iMax; ++i) {
        std::cin >> x;
        std::cin >> y;
        std::cin >> z;
        std::cout << std::min(std::min(x, y), z) << " ";
    }
}