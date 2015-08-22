#include <iostream>
const int ArSize = 6;
int main(int argc, char *argv[])
{
    using namespace std;
    float naaq[ArSize];
    std::cout << "enter the NAAQs:" << std::endl;

    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while( i < ArSize && temp >= 0)
    {
        naaq[i]  = temp;
        ++i;
        if(i < ArSize)
        {
            std::cout << "next value";
            cin >> temp;
        }
    }

    if(i == 0)
    {
        cout << "No data"<<endl;
    }
    else
    {
        cout << "Enter your NAAQ:";
        float you;
        cin>>you;
        int count = 0;
        for(int j = 0; j<i; j++)
        {
            if(naaq[i] > you)
            {
                ++ count;
            }
            cout << count;
        }
    }
    return 0;
}
