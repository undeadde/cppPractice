#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char *argv[])
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    std::cout << "int is " << sizeof(n_int) << "bytes." << std::endl;
    std::cout << "short is " << sizeof(n_short) << "bytes." << std::endl;
    std::cout << "long is " << sizeof(n_long) << "bytes." << std::endl;
    std::cout << "long long is " << sizeof(n_llong) << "bytes." << std::endl;
    return 0;
}
