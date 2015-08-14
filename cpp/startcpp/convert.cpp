#include <iostream>
int stone2lb(int);

int main(int argc, char *argv[])
{
    using namespace std;
    int stone;
    std::cout << "Enter the weight in stone:" << std::endl;
    cin >> stone;
    int pounds = stone2lb(stone);
    std::cout << stone << " stone = " << pounds << " pounds!" << std::endl;
    return 0;
}

int stone2lb(int stone)
{
    return stone*14;
}

