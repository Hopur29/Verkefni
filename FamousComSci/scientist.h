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
private:
    string name;
    string sex;
    string birthday;
    string death;

};




#endif // SCIENTIST_H
