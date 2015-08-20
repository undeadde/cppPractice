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
    inflatable guests[2] =
        {
            {"Bambi", 0.5, 21.99},
            {"Godzilla", 200, 523.22}
        };

    std::cout << "The guests " << guests[0].name << " and " << guests[1].name
              << endl << "have a combined volume of"
              << guests[0].volume + guests[1].volume << " cubic feet."<< std::endl;
    return 0;
}
