#include <iostream>
using namespace std;
template < int quantity, class type >
class table{
public:
    type * tab;
    type max=0;
    table(){tab = new type[ quantity ];}
    ~table(){delete tab;}
    type Max(){
        for(int i=0;i<quantity;i++){
            if (max<tab[i]) max = tab[i];
        }
        return max;
    }
    void fullfill(){
            for (int i=0;i<21;i++){
                tab[i] = i;
            }
    }

};
int main()
{
    table < 21, int > tab;
    tab.fullfill();
    cout << tab.Max();

}