#include "manager.h"
#include <fstream>
#include <iostream>

using namespace std;

Manager::Manager()
{

}

void Manager::init()
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
        cout << "Error opening file";
    }
    read.close();
}

void Manager::add(Scientist s)
{    
    vec.push_back(s);
    writeAllToFile();
}

void Manager::writeAllToFile()
{
    ofstream write;
    write.open("data.txt");
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        write << vec[i].toFileFormat() << endl;
    }
    write.close();
}

void Manager::print()
{
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cout << i << ". " << vec[i];
    }
}

void Manager::remove(string name)
{
    cout << name;
    vec.erase()
}

void Manager::search(string name)
{
    cout << name;
}

