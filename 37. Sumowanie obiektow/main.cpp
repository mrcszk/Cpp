#include <iostream>
using namespace std;
template < class type,class type2>
class table{
public:
    type one;
    type2 two;
    table(type t1, type2 t2){
        one = t1;
        two = t2;
    }
    type sum(){
        return one+two;
    }
    type valueGetOne(){return one;}
    type valueGetTwo(){return two;}

};
int main()
{    table < double , int> tab(3.9,5);
    cout << tab.sum() << endl;
    cout << tab.valueGetOne() << endl;
    cout << tab.valueGetTwo() << endl;
}