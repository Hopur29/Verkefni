#ifndef MANAGER_H
#define MANAGER_H
#include <vector>
#include "scientist.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include "data.h"

class Manager
{
public:
    Manager();

    // Adds the specified Scientist to the manager.
    void add(Scientist s);
    // Prints all computer scientists in the system
    void print();
    // removes the specified scientist by name
    void remove(string name);
    // remove the specified scientist by number
    void remove_by_nr(unsigned int nr);
    // searches for a specified scientist
    //void search();
private:
    Data file;
};

#endif // MANAGER_H

