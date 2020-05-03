#include "headers/auth_service.h"
#include <openssl/des.h>

int counter = 1; // TODO

//Triple Encryption Keys
DES_cblock Key1 = { 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11 };
DES_cblock Key2 = { 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22 };
DES_cblock Key3 = { 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33 };
DES_key_schedule SchKey1,SchKey2,SchKey3;

namespace AuthService
{
    std::string GenerateUniqueID()
    {
        auto newGuid = xg::newGuid();
        return newGuid;
    }

    std::string GeneratePasswordHash(std::string password)
    {
        return password;
    } 

    std::string EncryptData(std::string plainText)
    {
        DES_cblock input_data = {0x01, 0x02, 0x03, 0x04, 0x05, 0x6, 0x7, 0x8};
        DES_cblock cipher;
        DES_cblock text;
        DES_ecb3_encrypt(&input_data, &cipher, &SchKey1, &SchKey2, &SchKey3, DES_ENCRYPT);
        return plainText;
    }

    std::string DecryptData(std::string ciphered)
    {
        DES_cblock input_data = {0x01, 0x02, 0x03, 0x04, 0x05, 0x6, 0x7, 0x8};
        DES_cblock cipher;
        DES_cblock text;
        DES_ecb3_encrypt(&input_data, &text, &SchKey1, &SchKey2, &SchKey3, DES_DECRYPT);
        return ciphered;
    } 
}
