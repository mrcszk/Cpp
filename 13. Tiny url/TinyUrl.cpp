//
// Created by marci on 24.03.2019.
//
#include "TinyUrl.h"
namespace TinyUrl{
    pair<string,string> product[157];

    using ::std::string;
    using ::std::make_pair;
    using ::std::cout;
    using ::std::endl;
    int i=0;
    string Encode(string url){

    if (i == 0) {
        product[0] = make_pair(url, "aaaaaa");
        i++;
    }
    else{
        string a;
        a=product[i-1].second;
        if (a[0] < 122)
            a[0] +=1;
        else if  (a[1] < 122){
            a[1] += 1;
        }
        else if  (a[2] < 122){
            a[2] += 1;
        }
        else if  (a[3] < 122){
            a[3] += 1;
        }
        else if  (a[4] < 122){
            a[4] += 1;
        }
        else if  (a[5] < 122){
            a[5] += 1;
        }
        else if  (a[6] < 122){
            a[6] += 1;
        }
        else{
            cout << "Za duzo!";
        }

        product[i] = make_pair(url,a);
        i++;
    }
    return product[i-1].second;
}
string Decode(string hash) {
    int j;
    for (j = 0; j < i; j++) {
        if (product[j].second == hash)
            return product[j].first;
    }
    return "Nie ma takiego url!";
}
void print(){
    int j;
    for(j = 0;j<i;j++){
        cout << product[j].first << ", " << product[j].second << endl;
    }
}
}