#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    const int Lbs_per_stn = 14;
    int lbs;

    std::cout << "Enter your weight in pounds :" << std::endl;
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pound = lbs % Lbs_per_stn;
    std::cout << lbs << "pounds are " << stone << " stone, " << pound << " pound(s)." << std::endl;
    
    return 0;
}
