#include <iostream>
const int ArSize = 80;
int main(int argc, char *argv[])
{
    using namespace std;

    char line[ArSize];
    int spaces = 0;

    std::cout << "Enter a line of text:" << std::endl;
    cin.get(line, ArSize);
    std::cout << "Complete line:" << line << std::endl;
    std::cout << "Line through first period:" << std::endl;
    for(int i = 0; line[i] !='\0'; i++)
    {
        std::cout << line[i];
        if(line[i] == '.')
        break;
        if(line[i] != ' ')
        continue;
        spaces++;
    }
    std::cout << "\n" << spaces << " spaces" << std::endl;
    return 0;
}
