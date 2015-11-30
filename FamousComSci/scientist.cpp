#include "scientist.h"
#include <string>
#include <iostream>
#include <algorithm>

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
string Scientist::getName()
{
    return name;
}
string Scientist::getSex()
{
    return sex;
}
string Scientist::getBirthday()
{
    return birthday;
}
string Scientist::getDeath()
{
    return death;
}

// Sort Container by name
bool sortByName(const Scientist &lhs, const Scientist &rhs)
{
    return lhs.name < rhs.name;
}

// Sort Container by sex
bool sortBySex(const Scientist &lhs, const Scientist &rhs)
{
    return lhs.sex < rhs.sex;
}

// Sort Container by birthday
bool sortByBirthday(const Scientist &lhs, const Scientist &rhs)
{
    return lhs.birthday < rhs.birthday;
}

// Sort Container by day of death
bool sortByDeath(const Scientist &lhs, const Scientist &rhs)
{
    return lhs.death < rhs.death;
}
