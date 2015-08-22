#include <iostream>
using namespace std;

const char * qualify[4] = {
    "10,000k-meter race.",
    "mud tug-of-war",
    "master",
    "pe-kadf"
};
int main(int argc, char *argv[])
{
    int age;
    cin >> age;
    int index;
    if(age>17 && age<35)
    {
        index = 0;
    }
    else if(age >= 35 && age < 50)
    {
        index = 1;
    }
    else if(age >= 50 && age < 65)
    {
        index = 2;
    }
    else
    {
        index = 3;
    }

    std::cout << qualify[index] << std::endl;
    return 0;
}
