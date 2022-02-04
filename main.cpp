#include <iostream>
#include <string>

int main() {
    std::string apartment[10];

    for(int i=0; i<10; i++) {
        std::cout << "apartment #" << i+1 << ":";
        std::cin >> apartment[i];
    }

    for(int i=0; i<3; i++) {
        int ind;

        std::cout << i+1 << ": Enter number:";
        std::cin >> ind;

        if( (ind<1) || (ind>10) )
            std::cout << "Error." << std::endl;
        else
            std::cout << "-->" << apartment[ind-1] << std::endl;
    }

    return 0;
}
