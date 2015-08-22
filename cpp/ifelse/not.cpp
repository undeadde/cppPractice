#include <iostream>
#include <climits>
using namespace std;
bool is_int(double);
int main(int argc, char *argv[])
{
    double num;

    cout << " Yo, dude! Enter an integer value:";
    cin >> num;
    while(!is_int(num))
    {
        cin >> num;
    }
    int val = int(num);
    std::cout << val << std::endl;

    return 0;
}
bool is_int(double x)
{
    if(x <= INT_MAX && x >= INT_MIN)
    {
        return true;
    }
    else
    {
        return false;
    }
}


