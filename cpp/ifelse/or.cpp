#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    cin >> ch;

    if(ch == 'y' || ch == 'Y')
    {
        std::cout << "You were warned!";
    }
    else if(ch == 'n' || ch == 'N')
    {
        std::cout << "A wise choice ... bye";
    }
    else
    {
        std::cout << "that wasn't a y or n!" << std::endl;
    }

    return 0;
}
