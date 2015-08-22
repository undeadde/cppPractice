#include <iostream>
int main(int argc, char *argv[])
{
    char ch;
    
    std::cout << "Type, and I shall repeat." << std::endl;
    std::cin.get(ch);
    while(ch != '.')
    {
        if (ch == '\n')
        {
            std::cout << ch;
        }
        else
        {
            std::cout << ++ch;
        }
        std::cin.get(ch);
    }
    return 0;
}
