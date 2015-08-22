#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int a,b;
    std::cout << "Enter two integers: " << std::endl;
    cin >> a >> b;
    cout << "the larger of " << a << " and " << b;
    int c = a > b ? a : b;
    std::cout << " is " << c << std::endl;
    return 0;
}
