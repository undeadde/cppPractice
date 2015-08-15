#include <iostream>
int main(int argc, char *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;

    std::cout << "tub = " << tub << ", a million tubs = "  << million * tub;
    std::cout << ", \nand tem million tubs = ";
    std::cout << 10*million*tub << std::endl;

    std::cout << "mint = " << mint << " and a million mints = ";
    std::cout << million * mint  << std::endl;
    return 0;
}
