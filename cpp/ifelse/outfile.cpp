#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    std::cout << "Enter the make and model of automobile: " << std::endl;
    cin.getline(automobile, 50);
    std::cout << "Enter the model year:" << std::endl;
    cin >> year;
    std::cout << "Enter the original asking price: " << std::endl;
    cin >> a_price;
    d_price = 0.913 * a_price;
    std::cout << fixed << std::endl;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model:" << automobile << endl;
    cout << "Year: " << year << endl;
    std::cout << "Was asking $" << a_price << std::endl;
    std::cout << "Now asking $" << d_price << std::endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model:" << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << std::endl;
    outFile << "Now asking $" << d_price << std::endl;

    outFile.close();
    return 0;
}

