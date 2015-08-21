#include <iostream>
#include <ctime>
int main(int argc, char *argv[])
{
    using namespace std;

    std::cout << "enter the dalay time, in second:" << std::endl;
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while(clock() - start < delay)
    {
        ; 
    }
    std::cout << "done!" << std::endl;

    return 0;
}

