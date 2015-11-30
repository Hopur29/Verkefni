#include "menu.h"
#include <fstream>
#include <iostream>
#include "manager.h"

using namespace std;

Menu::Menu()
{

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
    int v;
    cout << "would you like to remove by name or by number? " << endl;
    cout << "press 1 for name." << endl;
    cout << "press 2 for number." << endl;
    cout << "any other number returns to menu." << endl;
    cin >> v;

    print();
    if(v == 1){
       cout << "insert the name of the scientist you would like to remove: ";
       string name;
       cin >> name;
       manager.remove(name);
    }
    else if(v == 2)
    {
         cout << "insert the number of the scientist you would like to remove: ";
         unsigned int i;
         cin >> i;
         manager.remove_by_nr(i);
    }
    else {
        cout << "Returning to menu";
    }



}

void Menu::search()
{
    int v;
       cout << "would you like to search by name or by number? " << endl;
       cout << "press 1 for name." << endl;
       cout << "press 2 for sex." << endl;
       cout << "press 3 for birthday." << endl;
       cout << "press 4 for death." << endl;
       cout << "any other number returns to menu." << endl;
       cin >> v;

    manager.search(v);
}


