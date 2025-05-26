#ifndef BASE64_H
#define BASE64_H

#include <iostream>
#include <array>

#include "../include/encoder.hpp"

class Base64 : public Encoder {

private:

    uint8_t HFC = 252;
	uint8_t H30 = 48;
	uint8_t H0F = 15;
	uint8_t HFF = 255;
	uint8_t H0C = 12;
	uint8_t HF0 = 240;
	uint8_t H3F = 63;

	inline static const std::string BASE64CHAR = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    std::string encrypted{};
    std::string decrypted{};

public:

    Base64();
    virtual ~Base64();
    void Encrypt(std::string&) override;
    void Decrypt(std::string&) override;
    std::string getEncryption() override;
    std::string getDecryption() override;
    
};

#endif //BASE64_H