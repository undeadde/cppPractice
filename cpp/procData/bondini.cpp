#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "\aOperation \"HyperHype\" is now activated!\n";
    std::cout << "Enter your agent code:_________\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    std::cout << "\aYou entered " <<code << "..." << std::endl;
    std::cout << "\aCode verified! Proceed with Plan Z3!" << std::endl;
    return 0;
}

