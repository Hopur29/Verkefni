#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <string>
#include <iostream>

using namespace std;

class Scientist
{
public:
    Scientist();
    // Reads in scientist information in CSV-format (using ';' as delimiter).
    friend istream& operator>> (istream& out, Scientist& s);
    friend ostream& operator<< (ostream& out, const Scientist& s);
    string toFileFormat();
    string getName();
    string getSex();
    string getBirthday();
    string getDeath();
    // Sort Container by name
    friend bool sortByName(const Scientist &lhs, const Scientist &rhs);
    // Sort Container by sex
    friend bool sortBySex(const Scientist &lhs, const Scientist &rhs);
    // Sort Container by birthday
    friend bool sortByBirthday(const Scientist &lhs, const Scientist &rhs);
    // Sort Container by day of death
    friend bool sortByDeath(const Scientist &lhs, const Scientist &rhs);
private:
    string name;
    string sex;
    string birthday;
    string death;
};




#endif // SCIENTIST_H
