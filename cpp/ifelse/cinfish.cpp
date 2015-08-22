#include <iostream>
const int Max = 5;
int main(int argc, char *argv[])
{
    using namespace std;

    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>." << endl;
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]){
        if(++i < Max)
        {
            std::cout << "fish #" << i+1 << ": " ;
        }
    }

    double total = 0.0;
    for(int j = 0; j < i; j++)
    {
        total += fish[j];
    }

    if(i == 0)
    {
        std::cout << "No fish" << std::endl;
    }
    else
    {
        std::cout << total/i << "  = average weight of " << i << " fish" << std::endl;
    }

    std::cout << "done." << std::endl;
    return 0;
}
