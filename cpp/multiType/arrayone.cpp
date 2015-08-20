#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};

    std::cout << "Total yams = "  << yams[0] + yams[1] + yams[2] << std::endl;

    std::cout << "th total yam expense is "  << yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2] << std::endl;

    return 0;
}
