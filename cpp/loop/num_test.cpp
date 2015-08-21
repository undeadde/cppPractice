#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "enter the starting countdown value: "<< std::endl;
    int limit;
    cin >> limit;
    int i;
    for(i = limit; i; i--)
    {
        std::cout << "i = " << i << std::endl;
    }
    std::cout << "Done now that i = " << i  << std::endl;
    return 0;
}
