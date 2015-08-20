#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(int argc, char *argv[])
{
    char charr[20];
    string str;

    std::cout << "Length of string in charr before input: " << strlen(charr) << std::endl;
    std::cout << "Length of string in str before input:" << str.size() << std::endl;
    std::cout << "Enter a line of text:" << std::endl;
    cin.getline(charr, 20);
    std::cout << "You entered: " << charr << std::endl;
    std::cout << "Enter anther line of text:" << std::endl;
    getline(cin, str);
    std::cout << "You entered: " << str << std::endl;
    std::cout << "Length of string in charr after input: " << strlen(charr) << std::endl;
    std::cout << "Length of string in str after input: " << str.size()  << std::endl;

    return 0;
}


