#ifndef BASE64_H
#define BASE64_H

#include <iostream>
#include "encoder.hpp"

typedef __uint8_t b64Letter;

class Base64 : public Encoder {

private:

    std::unordered_map<char, b64Letter> b64Table_map;
    std::string encrypted{};
    std::string decrypted{};
    void CreateTable();

public:

    Base64();
    virtual ~Base64();
    void Encrypt() override;
    void Decrypt() override;
    std::string getEncryption() override;
    std::string getDecryption() override;
};

#endif //BASE64_H