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
    void getbyName(string name);
    void getbySex(string sex);
    void getbyBirthday(string birthday);
    void getbyDeath(string death);
    vector<Scientist> getVector();
    void search();
    void setVector(vector<Scientist> newVec);
private:
    vector<Scientist> vec;
    void writeAllToFile();
};

#endif // DATA_H

