#include "stringset.h"

stringset::stringset()
{
#include <stdio.h>
#include "stringset.h"
#include <fstream>
#include <vector>
#include <math.h>


StringSet::StringSet() //liður 2,constructor
{

}

ostream& operator<<(ostream& out, const StringSet& ss)
{
    for (unsigned int x = 0; x < ss.vektorinn.size(); x++)
    {
        out << ss.vektorinn[x] << " ";
    }
        return out;
}

bool StringSet::contains(string strengur) const
{
    for (unsigned int x = 0; x < vektorinn.size(); x++)
    {
        if (strengur == vektorinn[x])
        {
            return true;
        }
    }
    return false;
}

StringSet operator +(const StringSet& document1, const StringSet& document2)
{
    StringSet Union;

    for (unsigned int x = 0; x < document1.vektorinn.size(); x++)
    {
        if(!Union.contains (document1.vektorinn[x]))
        {
            Union.vektorinn.push_back(document1.vektorinn[x]);
        }
    }
    for (unsigned int x = 0; x < document2.vektorinn.size(); x++)
    {
        if(!Union.contains (document2.vektorinn[x]))
        {
            Union.vektorinn.push_back(document2.vektorinn[x]);
        }
    }
    return Union;

}
StringSet operator *(const StringSet& document1,const StringSet& document2)
{
    StringSet newSet;
    for (unsigned int x = 0; x < document1.vektorinn.size(); x++)
    {
        if (document2.contains(document1.vektorinn.at(x)))
        {
            newSet.vektorinn.push_back(document1.vektorinn[x]);
        }
    }
   return newSet;
}

void StringSet:: addDocument (string nameOfDocument)
{
    ifstream document;
    string temp;
    document.open(nameOfDocument.c_str());

    if(document.is_open())
    {
        while(document >> temp)
        {
            vektorinn.push_back(temp);
        }
        document.close();
    }
}

double similarity (const StringSet& document1, const StringSet& document2)
{
    double sim;
    StringSet sum = document1 * document2;
    sim = sum.size() / (sqrt(document1.size()) * sqrt(document2.size()));

    return sim;
}


int StringSet::size() const
{
    return vektorinn.size();
}





}

