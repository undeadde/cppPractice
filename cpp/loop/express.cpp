#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int x;

    std::cout << "The expression x = 100 has the value " << std::endl;
    std::cout << (x = 100) << std::endl;
    std::cout << "now x = "  << x<< std::endl;
    std::cout << "the expresion x < 3 has the value" << std::endl;
    std::cout << (x < 3) << std::endl;
    std::cout << "the expresion x > 3 has the value" << std::endl;
    std::cout << (x > 3) << std::endl;

    cout.setf(ios_base::boolalpha);
    std::cout << "the expression x < 3 has the value " << std::endl;
    std::cout << (x < 3) << std::endl;
    std::cout << "the expresion x > 3 has the value" << std::endl;
    std::cout << (x > 3) << std::endl;
    return 0;
}
