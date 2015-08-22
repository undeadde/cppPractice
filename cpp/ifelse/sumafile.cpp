#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 70;
int main(int argc, char *argv[])
{
    char filename[SIZE];
    ifstream inFile;
    std::cout << "enter name of data file" << std::endl;
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        std::cout << "Could not open the file "  << filename << std::endl;
        std::cout << "Program terminating." << std::endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while(inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }

    if(inFile.eof())
    {
        std::cout << "End of file reached." << std::endl;
    }
    else if(inFile.fail())
    {
        std::cout << "Input terminated by data mismatch." << std::endl;
    }
    else
    {
        std::cout << "Input terminalted for unkown reason." << std::endl;
    }

    if(count == 0)
    {
        std::cout << "No data processed." << std::endl;
    }
    else
    {
        std::cout << "Item read:" << count << std::endl;
        std::cout << "Sum: "<< sum << std::endl;
        std::cout << "Average: " << sum/count << std::endl;
    }

    inFile.close();
    
    return 0;
}


