#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;
    std::cout << "tree = " << tree << std::endl;
    std::cout << "guess = " << guess << std::endl;
    std::cout << "debt = " << debt << std::endl;
    return 0;
}
