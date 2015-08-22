#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};
using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "Enter 0-6 for color:" << std::endl;
    int code;
    cin >> code;
    while(code >= red && code <= indigo)
    {
        switch (code)
        {
        case red: std::cout << "Red" << std::endl;break;
        case orange:std::cout << "Orange" << std::endl;break;
        case yellow:std::cout << "Yellow" << std::endl;break;
        case green:std::cout << "Green" << std::endl;break;
        case blue:std::cout << "Blue" << std::endl;break;
        case violet:std::cout << "Violet" << std::endl;break;
        case indigo:std::cout << "Indigo" << std::endl;break;
        }
        std::cout << "Enter 0-6 for color:" << std::endl;
        cin >> code;
    }
    std::cout << "Bye." << std::endl;
    return 0;
}
