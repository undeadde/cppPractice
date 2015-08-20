#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "What year was your house built?" << std::endl;
    int year;
    (cin >> year).get();
    std::cout << "What is its street address?" << std::endl;
    char address[80];
    cin.getline(address, 80);
    std::cout << "Year built: " << year << std::endl;
    std::cout << "Address: " << address << std::endl;
    return 0;
}
