#include <iostream>
#include <vector>
#include <array>

using namespace std;
int main(int argc, char *argv[])
{
    double a1[4]  = {1.2,2.3,3.4,4.5};

    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    array<double, 4> a3 = {3.14, 2.72, 1.61, 1.41};
    array<double, 4> a4;
    a4 = a3;

    std::cout << "a1[2]: " << a1[2] << " at " << &a1[2] << std::endl;
    std::cout << "a2[2]: " << a2[2] << " at " << &a2[2] << std::endl;
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << std::endl;
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << std::endl;

    a1[-2] = 20.2;
     std::cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << std::endl;
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << std::endl;
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << std::endl;

    return 0;
}



