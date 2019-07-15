#include <iostream>
using namespace std;
int potega_rekurencyjnie(int n, int m){
    if(m==0) return 1;
    else if(m==1) return n;
    else return n*potega_rekurencyjnie(n,m-1);
}

int potega_iteracyjnie(int n, int m){
    int i, potega=1;
    for(i=1;i<=m;i++){
        potega = potega*n;
    }
    return potega;
}
int main() {
    cout << "Potega rekurencyjnie " << potega_rekurencyjnie(5,5) << endl;
    cout << "Potega iteracyjnie " << potega_iteracyjnie(5,5) << endl;
    return 0;
}