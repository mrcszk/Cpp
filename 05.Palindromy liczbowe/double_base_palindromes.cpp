#include <iostream>
using namespace std;
int change_system(int dec){
    int bin=0;
    while (dec != 0)
    {   bin *=10;
        bin += (dec % 2);
        dec = dec / 2;
    }
    return bin;
}
int palindrome(int num){
    int reversed=0,tmp=num;
    while (num != 0)
    {   reversed *= 10;
        reversed += (num % 10);
        num = num / 10;
    }
    if (reversed == tmp)
        return 1;
    else
        return 0;
}
int sum(int n){
    int dec,bin,sum=0;
    for (dec=1;dec<=n;dec++){
        if(palindrome(dec)){
            bin = change_system(dec);
            if(palindrome(bin)){
                sum +=dec;
                cout << dec << " " << bin << endl;
            }
        }
    }
    return sum;
}
int main() {
    cout << "Suma palindromow liczbowych liczby w systemach 2 i 10: " << sum(1000000);
    return 0;
}