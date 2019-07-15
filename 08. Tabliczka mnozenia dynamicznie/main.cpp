#include <iostream>
using namespace std;
void multiplication(int **tab, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            tab[i][j] = (i+1)*(j+1);
        }
    }
}

void print(int **tab, int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() {
    int i,m=9,n=7;
    int **tab = new int*[m];

    for(i=0;i<m;i++){
        tab[i] = new int[n];
    }
    multiplication(tab,m,n);
    print(tab,m,n);
    for(i=0;i<m;i++){
        delete [] tab[i];
    }
    delete [] tab;
    return 0;
}