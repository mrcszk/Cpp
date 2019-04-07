#include <iostream>
# include "Parent.h"
# include "Child.h"
int main() {
    Parent rodzic("Arkadiusz","Sawczuk",25,"Marcin","Sawczuk",18,"Bodaczow");
    Child dziecko("Marcin","Sawczuk",19,"Krakow");
    rodzic.print_parent();
    rodzic.przepiszDoInnejSzkoly("Zamosc");
    rodzic.print_parent();
    dziecko.print_child();
    dziecko = rodzic.przepiszDoInnejSzkoly2("Zamosc", dziecko);
    dziecko.print_child();
    return 0;
}