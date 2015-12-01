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

    // print out layout for scientist information.
    friend ostream& operator<< (ostream& out, const Scientist& s);

    // Converts Scientist info to correct format for the file.
    string toFileFormat();

    // returns "name" from a private class.
    string getName();

    // returns "sex" from a private class.
    string getSex();

    // returns "birthday" from a private class.
    string getBirthday();

    // returns "death" from a private class.
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
