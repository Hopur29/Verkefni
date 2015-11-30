#include "manager.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include "data.h"

using namespace std;

Manager::Manager()
{
    file.init();
}

void Manager::add(Scientist s)
{    
    file.add(s);
}

void Manager::print()
{
    cout << "you should print here" << endl;
}

void Manager::remove(string name)
{
    if(file.remove(name))
    {
        cout << name << " has been removed." << endl;
    }
    else
    {
        cout << "there is no scientist named " << name
             << " in this file." << endl;
    }
}

void Manager::remove_by_nr(unsigned int nr)
{
    if(file.remove_by_nr(nr))
    {
        cout << "Scientist nr " << nr << " has been removed." << endl;
    }
    else
    {
        cout << "there is no scientist nr " << nr
             << " in this file." << endl;
    }
}

/*
void Manager::search()
{
    string name;
    bool flag = false;

    cout << "Enter the name of the scientist you want to find: ";
    cin >> name;
    cout << endl;

    for(unsigned int i = 0; i < vec.size(); i++){
        if(vec[i].getName() == name){
            flag = true;
            cout << i << ". " << endl;
            cout << vec[i] << endl;
        }
    }
    if(flag == false){
        cout << "there is no scientist named " << name
             << " in this file." << endl;
    }
}
*/

