#ifndef DATA_H
#define DATA_H
#include "scientist.h"
#include<vector>

class Data
{
public:
    Data();
    void init();
    void add(Scientist s);
    void print();
    bool remove(string name);
    bool remove_by_nr(unsigned int nr);
private:
    vector<Scientist> vec;
    void writeAllToFile();
};

#endif // DATA_H

