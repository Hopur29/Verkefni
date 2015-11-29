#ifndef MANAGER_H
#define MANAGER_H
#include <vector>
#include "scientist.h"

class Manager
{
public:
    Manager();

    // Adds the specified Scientist to the manager.
    void add(Scientist s);
    // Prints all computer scientists in the system
    void print();
    // removes the specified scientist from the manager
    void remove(string name);
    // searches for a specified scientist
    void search(string name);
private:
    vector<Scientist> vec;
};

#endif // MANAGER_H
