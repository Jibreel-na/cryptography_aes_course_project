#include <iostream>
#include "./cryptopp-master/aes.h"
// #include <cryptopp/rijndael.h>

using namespace std;

int main(){
    cout << "key length: " << AES::DEFAULT_KEYLENGTH << endl;
    cout << "key length (min): " << AES::MIN_KEYLENGTH << endl;
    cout << "key length (max): " << AES::MAX_KEYLENGTH << endl;
    cout << "block size: " << AES::BLOCKSIZE << endl;
    return 0;
}
