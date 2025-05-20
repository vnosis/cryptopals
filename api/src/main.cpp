#include <iostream>
#include <string>

#include "../include/base64.hpp"



int main () {
    Base64 b64obj;
    std::cout << b64obj.getDecryption() << std::endl;

    return 0;
}