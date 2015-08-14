#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    std::cout << "chest is " << chest << std::endl;
    std::cout << "waist is "<< waist << std::endl;
    std::cout << "inseam is " << inseam << std::endl;
    return 0;
}
