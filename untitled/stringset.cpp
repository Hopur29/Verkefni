#include "stringset.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>


using namespace std;

StringSet::StringSet()
{

}

string StringSet::at(int i) const
{
    string str;
    str = items[i];
    return str;
}

void StringSet::add(string addString) // þetta fall bætir við streng í mengið ef hann er ekki fyrir í menginu annars gerir fallið ekkert.
{
    for(unsigned int i = 0; i < items.size(); i++)
    {
        if(at(i) == addString)
            return;
    }
    items.push_back(addString);


}

void StringSet::addFromFile(const char* fileName) // addfromfile tekur inn nafn á skjali. fallið opnar skjalið og les inn einn streng í einu og með hjálp add() passar að sama orð komi ekki tvisvar fyrir í menginu.
{
    ifstream is;
    string next;
    is.open(fileName);

    while(is >> next)
    {
        add(next);
    }
    is.close();
}

int StringSet::numberOfStrings() const
{
    return items.size();
}

double StringSet::similarity(const StringSet& s)
{
    double sim,nefnari,teljari;
    StringSet snidmengi = (*this) * (s);
    teljari = snidmengi.numberOfStrings();
    nefnari = sqrt(numberOfStrings()) * sqrt(s.numberOfStrings());
    sim = teljari / nefnari;

    return sim;
}

StringSet operator+(const StringSet& s1, const StringSet& s2)
{
        StringSet sammengi;
        for(int i = 0; i < s1.numberOfStrings(); i++)
        {
            sammengi.add(s1.at(i));
        }
        for(int i = 0; i < s2.numberOfStrings(); i++)
        {
            sammengi.add(s2.at(i));
        }
        return sammengi;
}

StringSet operator*(const StringSet& s1, const StringSet& s2)
{
    StringSet snidmengi;
    for(int i = 0; i < s1.numberOfStrings(); i++)
    {
        for(int j = 0; j < s2.numberOfStrings(); j++)
        {
            if(s1.at(i) == s2.at(j))
            {
                snidmengi.add(s1.at(i));
            }
        }
    }
    return snidmengi;

}

ostream& operator<<(ostream& out, const StringSet& s)
{
    for(unsigned int i = 0; i < s.items.size(); i++)
    {
        out << s.items[i] << " ";
    }
    return out;

}



