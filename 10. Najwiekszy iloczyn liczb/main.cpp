#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void multiplication(int **tab, int m, int n){
    int i,j,a;
    srand( time( NULL ) );
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a = rand() % 100;
            tab[i][j] = a;
        }
    }
}
int find(int **tab, int m, int n){
    int i,j,max1=0,max2=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if ( tab[i][j]> max2)
            {
                if ( tab[i][j]> max1) {
                    max2 = max1;
                    max1=tab[i][j];
                }
                else
                    max2=tab[i][j];
            }
        }
    }
    return max1*max2;
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
    int size_m,size_n,i;
    cout << "Podaj wymiary";
    cin >> size_m >> size_n;
    int **tab = new int*[size_m];


    for(i=0;i<size_m;i++){
        tab[i] = new int[size_n];
    }
    multiplication(tab,size_m,size_n);
    print(tab,size_m,size_n);
    cout << find(tab,size_m,size_n);
    return 0;
}