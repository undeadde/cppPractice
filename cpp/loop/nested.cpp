#include <iostream>
using namespace std;
const int Cities = 5;
const int Years = 4;
int main(int argc, char *argv[])
{
    const char * cities[Cities] = {
        "Beijing",
        "ShangHai",
        "Hangzhou",
        "xi'an",
        "Shenzhen"
    };

    int maxtemps[Years][Cities] = {
        {96, 100, 78, 101, 106},
        {92, 100, 78, 101, 106},
        {93, 100, 78, 101, 106},
        {99, 100, 78, 101, 106}
    };

    std::cout << "maximum temperatures for 2008 - 2011" << std::endl;
    for(int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for(int year = 0; year < Years; year++)
        {
            std::cout << maxtemps[year][city] << "\t";
        }
        std::cout  << std::endl;
    }
    return 0;
}
