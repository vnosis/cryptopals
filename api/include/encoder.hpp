#ifndef ENCODER_H
#define ENCODER_H

class Encoder {

private:


public:
    virtual void Encrypt(std::string&) = 0;
    virtual void Decrypt(std::string&) = 0;
    virtual std::string getEncryption() = 0; 
    virtual std::string getDecryption() = 0;
};


#endif

