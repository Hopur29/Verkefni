#ifndef MANAGER_H
#define MANAGER_H
#include <vector>
#include "scientist.h"
#include <fstream>
#include <iostream>
#include <algorithm>

class Manager
{
public:
    Manager();

    // Adds the specified Scientist to the manager.
    void add(Scientist s);
    // Prints all computer scientists in the system
    void print();
    // removes the specified scientist from the manager
    void remove();
    // searches for a specified scientist
    void search();
private:
    Data data;


};

#endif // MANAGER_H
