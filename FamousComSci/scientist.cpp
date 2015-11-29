#include "scientist.h"
#include <string>
#include <iostream>

using namespace std;

Scientist::Scientist()
{

}

istream& operator>> (istream& in, Scientist& s) {
    getline(in, s.name, ';');
    getline(in, s.sex, ';');
    getline(in, s.birthday, ';');
    getline(in, s.death);
    return in;
}

ostream& operator<< (ostream& out, const Scientist& s) {
    out << "Name:  " << s.name << endl;
    out << "Sex: " << s.sex << endl;
    out << "Birthday: " << s.birthday << endl;
    out << "Day of death: " << s.death << endl;
    return out;
}

string Scientist::toFileFormat() {
    return name + ";" + sex + ";" + birthday + ";" + death;
}
