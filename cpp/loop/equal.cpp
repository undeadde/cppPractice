#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int quizscores[10] = {20, 20, 20, 20, 20, 18, 20, 16, 20,20};

    cout << "doing it right:";
    int i;
    for(i = 0; quizscores[i] == 20; i++)
    {
        std::cout << "quiz " << i << " is a 20" << std::endl;
    }
    for(i = 0; quizscores[i] = 20, i<10; i++)
    {
        std::cout << "quiz " << i << " is a 20" << std::endl;
    }
    return 0;
}
