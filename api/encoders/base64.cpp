#include "../include/base64.hpp"

Base64::Base64()
{
}

Base64::~Base64()
{
}

void Base64::Encrypt(std::string& stream)
{
    std::string output;
    size_t i = 0;
    while (i < stream.size())
    {
        uint8_t bytes[3] = {0, 0, 0};
        int padding = 0;

        for (int j = 0; j < 3; ++j) 
        {
            if (i < stream.size())
            {
                bytes[j] = static_cast<uint8_t>(stream[i++]);
            } 
            else
            {
                ++padding;
            }
        }

        uint8_t b1 = (bytes[0] & HFC) >> 2;
        uint8_t b2 = ((bytes[0] & 0x03) << 4) | ((bytes[1] & HF0) >> 4);
        uint8_t b3 = ((bytes[1] & H0F) << 2) | ((bytes[2] & 0xC0) >> 6);
        uint8_t b4 = bytes[2] & H3F;

        output += BASE64CHAR[b1];
        output += BASE64CHAR[b2];
        output += (padding >= 2) ? '=' : BASE64CHAR[b3];
        output += (padding >= 1) ? '=' : BASE64CHAR[b4];
    }
    this->encrypted = output;
}

void Base64::Decrypt(std::string& stream)
{
}

std::string Base64::getDecryption()
{
}

std::string Base64::getEncryption()
{
    return this->encrypted;
}




