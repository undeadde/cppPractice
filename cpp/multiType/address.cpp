#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int donuts = 6;
    double cups = 4.6;

    std::cout << "donuts value = " << donuts << " and donuts address = " << &donuts << std::endl;
    std::cout << "cups value = " << cups << "and cups address = " << &cups << std::endl;
    return 0;
}
