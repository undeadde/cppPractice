#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "enter an integer: " << std::endl;
    int by;
    cin >> by;
    std::cout << "Counting by " << by << "s:" << std::endl;
    for(int i = 0; i < 100; i = i+by)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
