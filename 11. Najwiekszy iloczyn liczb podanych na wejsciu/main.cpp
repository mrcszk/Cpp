#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int ile,i=0,n=0,max1=0,max2=0;
    cout << "Ile liczb chcesz podac?: ";
    cin >> ile;
    cout << "Podaj liczby: ";
    while(i++<ile){
            cin >> n;
            if ( n> max2)
            {
                if ( n> max1) {
                    max2 = max1;
                    max1=n;
                }
                else
                    max2=n;
            }

    }


    cout << "Najwiekszy iloczyn tych liczb(k=2) wynosi: " << max1*max2;
    return 0;
}