#include "menu.h"
#include <fstream>
#include <iostream>
#include "manager.h"

Menu::Menu()
{
    manager.init();
}

void Menu::start()
{
    int choice(0);
    const int MAX = 5;
    do
    {

        cout << "***************************" << endl;
        cout << "* 1. add new legend.      *" << endl;
        cout << "* 2. known legends        *" << endl;
        cout << "* 3. remove legend        *" << endl;
        cout << "* 4. search               *" << endl;
        cout << "* 5. Exit                 *" << endl;
        cout << "***************************" << endl;

        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Write in name, sex, day of birth and day of death seperated by ;" << endl;
                ws(cin);
                addScientist(cin);
                break;
            case 2:
                print();
                break;
            case 3:
                remove();
                break;
            case 4:
                search();
                break;
            case 5:
                choice = MAX;
                break;
            default:
                cout << "plz choose a valid number from 1 to 3" << endl;
        }
    }while(choice != 5);

}

void Menu::addScientist(istream& in)
{
    Scientist s;
    in >> s;

    manager.add(s);
}

void Menu::print()
{
    manager.print();
}

void Menu::remove()
{
    string name;
    getline(cin, name);
    manager.remove(name);
}

void Menu::search()
{
    string name;
    getline(cin, name);
    manager.search(name);
}
