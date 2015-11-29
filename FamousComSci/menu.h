#ifndef MENU_H
#define MENU_H
#include "manager.h"
#include <fstream>
#include <iostream>

class Menu
{
public:
    Menu();
    void start();
    void print();
    void remove();
    void search();
private:
    void addScientist(istream& in);
    Manager manager;
};

#endif // MENU_H
