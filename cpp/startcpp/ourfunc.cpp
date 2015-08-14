#include <iostream>
void simon(int);

int main()
{
    using namespace std;
    simon(32);

    int count;
    cin >> count;
    simon(count);
    std::cout << "Done!" << std::endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    std::cout << "Simon says touch your toes " << n << "times." << std::endl;
}
