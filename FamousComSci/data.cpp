#include "data.h"
#include <fstream>
#include <iostream>

Data::Data()
{

}

void Data::init()
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
        cout << "There is no scientist on file." << endl;
    }
    read.close();
}

void Data::writeAllToFile()
{
    ofstream write;
    write.open("data.txt");
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        write << vec[i].toFileFormat() << endl;
    }
    write.close();
}
void Data::add(Scientist s)
{
    vec.push_back(s);
    writeAllToFile();
}

void Data::print()
{
    cout << "How would you like your list to be sorted? " << endl;
    cout << "1. By name." << endl;
    cout << "2. By sex." << endl;
    cout << "3. By day of birth." << endl;
    cout << "4. By day of death." << endl;

    int choice(0);
    cin >> choice;

    switch(choice)
    {
        case 1:

    }

    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cout << i << "." << endl;
        cout << vec[i];
        cout << endl;
    }
}
