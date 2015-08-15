#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    std::cout << "Monsieur cuts striking figure!" << std::endl;
    std::cout << "chest = " << chest << "(decimal for 42)"<< std::endl;
    std::cout << hex;
    std::cout << "waist = " << chest << "(hexdecimal for 42)"<< std::endl;
    std::cout << oct;
    std::cout << "inseam = " << chest << "(octdecimal for 42)"<< std::endl;
    return 0;
}
