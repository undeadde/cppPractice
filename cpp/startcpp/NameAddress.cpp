#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string name, address;

    std::cout << "Enter your name:" << std::endl;
    cin >> name;
    std::cout << "Enter your address:" << std::endl;
    cin>> address;
    std::cout << "Dear " << name << ", your addess is " << address << "." << std::endl;
    return 0;
}
