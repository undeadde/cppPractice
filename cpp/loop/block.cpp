#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "The amazing accout will sum and average " << std::endl;
    std::cout << "five numbers for you." << std::endl;
    std::cout << "Please enter five values:" << std::endl;
    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "value = " << i << std::endl;
        cin >> number;
        sum += number;
    }

    std::cout << sum/5 << std::endl;
    return 0;
}
