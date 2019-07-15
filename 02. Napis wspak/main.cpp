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
        //cout << a[len];
        *tmp += a[len];
    }
    cout  << *tmp << endl;
}

void rek(string a,int length)
{
    if(length>=0)
    {
        cout << a[length] << " ";
        rek(a,length-1);
    }
}

int main()
{
    string slowo,slowo2;
    cout << "Podaj slowo:";
    cin >> slowo;
    wspak(slowo,&slowo2);
    rek(slowo,slowo.length()-1);
    return 0;
}