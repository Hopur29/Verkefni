#include "manager.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include "data.h"
#include <vector>

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
    file.print();
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


void Manager::search(int v)
{
    string name, sex, birthday, death;
    if(v == 1){
        cout << "type the name of the scientist you want to find: ";
        cin >> name;
        cout << endl;
        file.getbyName(name);
    }
    else if(v == 2){
        cout << "enter the sex of the scientist you want to find: ";
        cin >> sex;
        cout << endl;
        file.getbySex(sex);
    }
    else if(v == 3){
        cout << "enter the birthday of the scientist you want to find: ";
        cin >> birthday;
        cout << endl;
        file.getbyBirthday(birthday);
    }
    else if(v == 4){
        cout << "enter the day of death of the scientist you want to find: ";
        cin >> death;
        cout << endl;
        file.getbyDeath(death);
    }
}

void Manager::sortBirthday()
{
    vector<Scientist> vec = file.getVector();
    sort(vec.begin(), vec.end(), sortByBirthday);
    file.setVector(vec);
}

void Manager::sortDeath()
{
    vector<Scientist> vec = file.getVector();
    sort(vec.begin(), vec.end(), sortByDeath);
    file.setVector(vec);
}

void Manager::sortSex()
{
    vector<Scientist> vec = file.getVector();
    sort(vec.begin(), vec.end(), sortBySex);
    file.setVector(vec);
}

void Manager::sortName()
{
    vector<Scientist> vec = file.getVector();
    sort(vec.begin(), vec.end(), sortByName);
    file.setVector(vec);
}
