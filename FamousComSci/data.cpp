#include "data.h"
#include <fstream>
#include <iostream>
#include "scientist.h"
#include <vector>

using namespace std;

Data::Data()
{

}

void Data::init()
{
    ifstream read;
    read.open("data.txt");
    vector<Scientist> vec;
    if (read.is_open())
    {
        Scientist s;
        while(read >> s){
            add(s);
        }
    }
    else
    {
        cout << "There is no scientist on file." << endl;
    }
    read.close();
}
/*
void Data::print()
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}
*/
void Data::writeAllToFile()
{
    ofstream write;
    write.open("data.txt");
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        write << vec[i].toFileFormat() << endl;
    }
    write.close();
}
void Data::add(Scientist s)
{
    vec.push_back(s);
    writeAllToFile();
}

bool Data::remove(string name)
{
    for(unsigned int i = 0; i < vec.size(); i++){
         if(vec[i].getName() == name){
             vec.erase(vec.begin() + i);
             writeAllToFile();
             return true;
         }
    return false;
}

bool Data::remove_by_nr(unsigned int nr)
{
    if(nr < vec.size())
    {
        vec.erase(vec.begin() + nr);
        writeAllToFile();
        return true;
    }
    return false;

}


