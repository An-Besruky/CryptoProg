#include <iostream>
#include <vector>
#include <string>
#include <crypto++/cryptlib.h>
#include <crypto++/hex.h>
#include <crypto++/files.h>
#include <crypto++/sha.h>
int main(int argc, char **argv)
{
    using namespace CryptoPP;
    SHA1 hash;
    std::string msg = "Hello, world";
    std::vector<byte> digest(hash.DigestSize());
    hash.Update((const byte*)msg.data(),msg.size());
    hash.Final(digest.data());
    StringSource(digest.data(), digest.size(), true, new HexEncoder(new FileSink(std::cout)));
    std::cout<<std::endl;
    return 0;
}
