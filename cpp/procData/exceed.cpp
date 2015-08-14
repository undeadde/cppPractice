#include <iostream>
#define ZERO 0
#include <climits>

int main(int argc, char *argv[])
{
    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << std::endl;
    std::cout << "Add $1 to each account." << std::endl;
    std::cout << "Now ";
    sam += 1;
    sue += 1;
    std::cout << "Sam has " << sam << "dollars and Sue has " << sue << "dollars deposited."<< std::endl;
    std::cout << "Poor Sam!" << std::endl;

    sam = ZERO;
    sue = ZERO;
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << std::endl;
    std::cout << "Take $1 from each account." << std::endl;
     std::cout << "Now ";
    sam -= 1;
    sue -= 1;
    std::cout << "Sam has " << sam << "dollars and Sue has " << sue << "dollars deposited."<< std::endl;
    std::cout << "Rich Sue!" << std::endl;

    return 0;
}

