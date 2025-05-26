#include <iostream>
#include <string>

#include "../include/base64.hpp"
#include "../include/utils.hpp"

int main () {
    Base64 b64obj;
    std::string man = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    std::string asciiString = hexToAscii(man);
    b64obj.Encrypt(asciiString);

    std::cout << b64obj.getEncryption()<<"\n";
    
    return 0;
}