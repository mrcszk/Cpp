#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void wspak(string a,string *tmp)
{
    int len=a.length();
    while(len--)
    {
        *tmp += a[len];
    }
}

bool palindrom(string a, string b){
    if (a==b) return true;
    else return false;
}
int main()
{
    string slowo,slowo2;
    int wybor;
    cout << "Menu" << endl;
    cout << "1.Sprawdz palindrom" << endl;
    cout << "2.Wyjscie" << endl;
    cout << "Wybor:" ;
    cin >> wybor;
    switch(wybor) {
        case 1:
            cout << "Podaj slowo:";
            cin >> slowo;
            wspak(slowo, &slowo2);
            if (palindrom(slowo, slowo2))
                cout << "To jest palindrom.";
            else
                cout << "To nie jest palindrom.";
            break;
        case 2:
            exit(1);
        default:
            cout << "Nie ma takiej opcji!";
    }
    return 0;
}