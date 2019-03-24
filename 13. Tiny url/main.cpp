#include "TinyUrl.h"
using namespace TinyUrl;
int main(){
    cout << Encode("www.google.com") << endl;
    cout <<   Encode("www.fb.com") << endl;
    cout <<   Encode("www.aaa.com") << endl;
    cout <<     Encode("www.bbb.com")<< endl;
    cout <<   Encode("www.ccc.com")<< endl;
    cout <<     Encode("www.bbcba.com")<< endl;
    cout <<    Encode("www.googlee.com")<< endl;
    cout <<    Decode("aaaxaa")<< endl;
    cout <<    Decode("baaaaa")<< endl;
    cout <<    Decode("caaaaa")<< endl;

    print();
    return 0;
}