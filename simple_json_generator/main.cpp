#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string name, famous_for, history;

int main()
{
    fstream plik;
        plik.open("json.json" , ios::out);

        for(;;)
        {
        cout << "JSON Generator " << endl;
        cout << "-----------------" << endl;

        cout << "Name: ";
        getline(cin, name);
        plik << name << endl;

        cout << "Famous for: ";
        getline(cin,famous_for);
        plik << famous_for << endl;

        cout << "History: ";
        getline(cin,history);
        plik << history << endl;

        system("CLS");
        }
        plik.close();

    return 0;
}
