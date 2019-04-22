#include <iostream>
#include "StudyYear.h"
#include "Student.h"
#include "StudentRepository.h"

int main() {
    StudyYear a(3),g(4);
    Student b("A","Ba","Ca","Da",a),e("Aa","Ba","Ca","Da",a);
    StudentRepository c,d;
    cout << a << endl;
    a++;
    cout << a << endl;
    c.add(b);
    c.add(e);
    d.add(b);
    d.add(e);
    int x;
    a++;
    x = (int)a;
    cout << x << endl;
    cout <<c << endl;
    cout <<c["Aa"]<< endl;
    if(a<g) cout << "A";
    else cout << "B";
    return 0;
}