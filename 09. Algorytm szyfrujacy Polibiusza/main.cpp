#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream myfile("file.txt");
    ifstream myfile2("file2.txt");
    ofstream myfilez ("file_zapis.txt", ios_base::in | ios_base::app);
    string m;

    map<char, int> v = {{'a', 11},
                        {'b', 12},
                        {'c', 13},
                        {'d', 14},
                        {'e', 15},
                        {'f', 21},
                        {'g', 22},
                        {'h', 23},
                        {'i', 24},
                        {'j', 24},
                        {'k', 25},
                        {'l', 31},
                        {'m', 32},
                        {'n', 33},
                        {'o', 34},
                        {'p', 35},
                        {'q', 41},
                        {'w', 42},
                        {'s', 43},
                        {'t', 44},
                        {'u', 45},
                        {'v', 51},
                        {'w', 52},
                        {'x', 53},
                        {'y', 102},
                        {'z', 55}};
    if(!myfile)
        cout << "Nie można otworzyć pliku!" << endl;

    if(!myfile2)
        cout << "Nie można otworzyć pliku!" << endl;

    if(!myfilez)
        cout << "Nie można otworzyć pliku!" << endl;

    if(myfile.is_open())
    {
            myfile << klasa.karoseria << endl
            klasa.silnik<< endl;
        }
    }
    else
        cout << "Nie udało się otworzyć pliku";

    if(myfile2.is_open())
    {
        char c,b;
        int a;

        while(myfile2 >> b >> c)
        {
            m += b;
            m += c;
            a = stoi(m);

            for (const auto &n : v) {
                if(n.second == a)
                    myfilez << n.first << " ";
        }
        m="";
        }
        myfilez << endl;
    }
    else
        cout<<"Nie udało się otworzyć pliku";

    myfile.close();
    myfile2.close();
    myfilez.close();
    return 0;
}