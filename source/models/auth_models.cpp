#include "auth_models.h"

/* Triple DES key for Encryption and Decryption */
DES_cblock Key1 = { 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11 };
DES_cblock Key2 = { 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22 };
DES_cblock Key3 = { 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33 };
DES_key_schedule SchKey1,SchKey2,SchKey3;


/* Encryption Sequence */
std::string encrypt_data(std::string packet)
{
    DES_cblock input_data = {0x01, 0x02, 0x03, 0x04, 0x05, 0x6, 0x7, 0x8};

    DES_cblock cipher;
    DES_cblock text;

    DES_ecb3_encrypt(&input_data, &cipher, &SchKey1, &SchKey2, &SchKey3, DES_ENCRYPT);

    return "";
}

/* Decryption Sequence */
std::string decrypt_data(std::string packet)
{
    DES_cblock cipher;
    DES_cblock text;
    DES_ecb3_encrypt(&cipher, &text, &SchKey1, &SchKey2, &SchKey3, DES_DECRYPT);
    return "";
}



/*




*/
/* Print Encrypted and Decrypted data packets */
void print_data(const char *tittle, const void* data, int len)
{
    printf("%s : ",tittle);
    const unsigned char * p = (const unsigned char*)data;
    int i = 0;

    for (; i<len;++i)
        printf("%02X ", *p++);

    printf("\n");
}

void encryptData()
{
    /* Input data to encrypt */
    DES_cblock input_data = {0x01, 0x02, 0x03, 0x04, 0x05, 0x6, 0x7, 0x8};

    /* Buffers for Encryption and Decryption */
    DES_cblock cipher;
    DES_cblock text;

    /* Triple-DES ECB Encryption */
    DES_ecb3_encrypt(&input_data, &cipher, &SchKey1, &SchKey2, &SchKey3, DES_ENCRYPT);

    /* Triple-DES ECB Decryption */
    DES_ecb3_encrypt(&cipher, &text, &SchKey1, &SchKey2, &SchKey3, DES_DECRYPT);

    /* Printing and Verifying */
    print_data("\n Original ", (const void*) input_data, sizeof(input_data));
    print_data("\n Encrypted", (const void*) cipher, sizeof(input_data));
    print_data("\n Decrypted", (const void*) text, sizeof(input_data));
}

