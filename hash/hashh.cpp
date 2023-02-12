#include <iostream>
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <crypto++/cryptlib.h>
#include <crypto++/hex.h>
#include <crypto++/files.h>
#include <crypto++/md5.h>
#include <string>
using namespace std;
using namespace CryptoPP;
int main(int argc, char **argv)
{
    string Hash;
    Weak::MD5 hash;
    FileSource("text.txt", true, new HashFilter(hash, new HexEncoder(new StringSink (Hash))));
    cout<<Hash<<endl;
    return 0;
}