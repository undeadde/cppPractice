#include <iostream>
#include <cctype>

using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "Enter text for analysis, and type @ to  terminate input." << std::endl;

    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while(ch != '@')
    {
        if(isalpha(ch))
        {
            chars++;
        }
        else if(isspace(ch))
        {
            whitespace++;
        }
        else if(isdigit(ch))
        {
            punct++;
        }
        else
        {
            others++;
        }
        cin.get(ch);
    }

    std::cout << chars << " letters, "
              << whitespace << " spaces,"
              << punct << " punct,"
              << others << " others"
              << std::endl;
    return 0;
}
