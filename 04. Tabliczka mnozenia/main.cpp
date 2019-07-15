#include <iostream>
using namespace std;
void mnoz(int tab[][10]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            tab[i][j] = (i+1)*(j+1);
        }
    }
}

void print(int tab[][10]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int tab[10][10];
    mnoz(tab);
    print(tab);
    return 0;
}