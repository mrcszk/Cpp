#include <iostream>

using namespace std;
int silnia_rekurencyjnie(int n){
    if (n>=2) return silnia_rekurencyjnie(n - 1) * n;
    else return 1;
}

int silnia_iteracyjnie(int n){
    int i, silnia = 1;
    for (i=2;i<n+1;i++)
        silnia = silnia*i;
    return silnia;
}

int main(int argv, char* arg[]){
    int n;
    for (n=0 ;n<=5;n++){
    cout << "Silnia rekurencyjnie(" << n<< "): " << silnia_rekurencyjnie(n) << endl;
    cout << "Silnia iteracyjnie(" << n << "): " << silnia_iteracyjnie(n)<< endl;
    }
    return 0;
}