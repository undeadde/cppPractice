#include <iostream>
using namespace std;
const int Fave = 27;
int main(int argc, char *argv[])
{
    int n;

    std::cout << "Enter a number in the range 1-100 to find " << std::endl;
    std::cout << "my favorite number: " << std::endl;
    do
    {
        cin >> n;
        if(n < Fave)
        {
            std::cout << "Too low -- guess again" << std::endl;
        }
        else if(n>Fave)
        {
            std::cout << "Too high -- guess again" << std::endl;
        }
        else
        {
            std::cout << Fave << "is right!";
        }
    }while( n != Fave);
    
    return 0;
}
