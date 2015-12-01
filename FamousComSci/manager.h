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
    // remove the specified scientist by number (position in vector)
    void remove_by_nr(unsigned int nr);
    // searches for a specified scientist
    void search(int v);
    // sorts computer scientists by the year of birth
    void sortBirthday();
    // sorts computer scientists by the year of death
    void sortDeath();
    // sorts computer scientists by sex, alphabetically
    void sortSex();
    // sorts computer scientists by name, alphabetically
    void sortName();
private:
    Data file;
};

#endif // MANAGER_H

