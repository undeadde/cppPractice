#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main(int argc, char *argv[])
{
    inflatable bouquet = { "sunflowers", 0.20, 12.49};
    inflatable choice;
    std::cout << "bouquet: " << bouquet.name << " for $" << std::endl;
    std::cout << bouquet.price << std::endl;

    choice = bouquet;
    std::cout << "choice: " << choice.name << " for $"<< std::endl;
    std::cout << choice.price << std::endl;
    return 0;
}
