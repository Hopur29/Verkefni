#ifndef STRINGSET_H
#define STRINGSET_H


#include <vector>
#include <iostream>
using namespace std;

//klasi fyrir mengi af strengjum
class StringSet{
public:
    // StringSet() er sjálgefinn smiður.
    StringSet();

    // skilar streng í sæti númer i í menginu.
    string at(int i) const;

    // opnar skjalið sem er rétt inn í fallið og fyllir mengið af strengjunum.
    void addFromFile(const char* fileName);

    // bætir við einum streng í einu í mengið.
    void add(string addString);

    // finnur út hversu margir strengir eru í menginu.
    int numberOfStrings() const;

    // reiknar út líkindi við annað mengi.
    double similarity(const StringSet& s);

    // býr til sammegni tveggja mengja
    friend StringSet operator+(const StringSet& s1, const StringSet& s2);

    // býr til sniðmengi tveggja mengja.
    friend StringSet operator*(const StringSet& s1, const StringSet& s2);

    // gerir útskotsvirkjanum kleift að skrifa út heilt mengi.
    friend ostream& operator<<(ostream& out, const StringSet& s);


private:
    vector<string> items;
};


#endif // STRINGSET_H
