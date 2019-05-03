#include <iostream>
#include <string>
#include "Pesel.h"
using namespace std;


int main() {
    try{
        PESEL pesel("923376a2317");
        cout << "Pesel poprawny." << endl;

    }catch(wrongPeselLength) {
        cout << "Blad dlugosci peselu" << endl;
    }catch(wrongPeselNumbers){
        cout << "Blad numerkow peselu" << endl;
    }catch(wrongPeselSum){
    cout << "Blad sumy kontrolnej peselu" << endl;
    }catch(...){
        cout << "Inny blad" << endl;
    }

    try{
        PESEL pesel("9233762317");
        cout << "Pesel poprawny." << endl;
    }catch(wrongPeselLength) {
        cout << "Blad dlugosci peselu" << endl;
    }catch(wrongPeselNumbers){
        cout << "Blad numerkow peselu" << endl;
    }catch(wrongPeselSum){
        cout << "Blad sumy kontrolnej peselu" << endl;
    }catch(...){
        cout << "Inny blad" << endl;
    }
    try{
        PESEL pesel("92337623147");
        cout << "Pesel poprawny." << endl;
    }catch(wrongPeselLength) {
        cout << "Blad dlugosci peselu" << endl;
    }catch(wrongPeselNumbers){
        cout << "Blad numerkow peselu" << endl;
    }catch(wrongPeselSum){
        cout << "Blad sumy kontrolnej peselu" << endl;
    }catch(...){
        cout << "Inny blad" << endl;
    }
    try{
        PESEL pesel("92337623148");
        cout << "Pesel poprawny." << endl;
    }catch(wrongPeselLength) {
        cout << "Blad dlugosci peselu" << endl;
    }catch(wrongPeselNumbers){
        cout << "Blad numerkow peselu" << endl;
    }catch(wrongPeselSum){
        cout << "Blad sumy kontrolnej peselu" << endl;
    }catch(...){
        cout << "Inny blad" << endl;
    }
}