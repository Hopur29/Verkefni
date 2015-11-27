#ifndef STRINGSET_H
#define STRINGSET_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;


class StringSet
{
    public:
        StringSet();
        void addDocument (string nameOfDocument);
        bool contains(string strengur) const;
        int size() const;

        friend ostream& operator<<(ostream& out, const StringSet& ss);
        friend StringSet operator +(const StringSet& document1, const StringSet& document2);
        friend StringSet operator *(const StringSet& document1, const StringSet& document2);
        friend double similarity (const StringSet& document1, const StringSet& document2);

    private:
        vector<string> vektorinn;

};
#endif // STRINGSET_H
