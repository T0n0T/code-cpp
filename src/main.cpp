#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, const char **argv)
{
    string first_name, last_name;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "here's the information in a single string: " << first_name << ", " << last_name << endl;
    return 0;
}