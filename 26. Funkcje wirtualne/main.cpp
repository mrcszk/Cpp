#include <iostream>
#include <list>
#include <string>
#include <memory>

using namespace std;

class Umowa{
public:
    Umowa(double pensja):wynagrodzenie_brutto_(pensja){};
    virtual double PobierzNetto() const = 0;
    double PobierzBrutto() const;
protected:
    double wynagrodzenie_brutto_;
};

class UmowaDzielo: public Umowa{
public:
    UmowaDzielo(double pensja):Umowa{pensja} {};
    virtual double PobierzNetto() const override{return 0;}
};

class UmowaPraca: public Umowa {
public:
    UmowaPraca(double pensja):Umowa{pensja} {};
    virtual double PobierzNetto() const override{return wynagrodzenie_brutto_*4 /5;}
};

class Pracownik{
public:
    Pracownik(string imie,string nazwisko,string pesel, Umowa *umowa)
            :imie_{imie},nazwisko_{nazwisko},pesel_{pesel},umowa_{move(umowa)}{};
    double PobierzPensje() const;
    friend std::ostream& operator<<(std::ostream&,Pracownik&);
private:
    std::string imie_,nazwisko_,pesel_;
    std::unique_ptr<Umowa> umowa_;
};
std::ostream& operator<<(std::ostream& out,Pracownik& tmp){
    out << tmp.imie_ << " " << tmp.nazwisko_<< endl<<
        tmp.pesel_ << endl << tmp.umowa_->PobierzNetto();
    return out;
}

int main(){
    Umowa* umowa = new UmowaPraca(10000);
    Pracownik p("A","B","123456789",umowa);
    cout << p;
    return 0;
}