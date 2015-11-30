#include "manager.h"
#include <fstream>
#include <iostream>
#include <algorithm>

using namespace std;

Manager::Manager()
{

}

void Manager::init()
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

void Manager::add(Scientist s)
{    
    vec.push_back(s);
    writeAllToFile();
}

void Manager::writeAllToFile()
{
    ofstream write;
    write.open("data.txt");
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        write << vec[i].toFileFormat() << endl;
    }
    write.close();
}

void Manager::print()
{
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cout << i << "." << endl;
        cout << vec[i];
        cout << endl;
    }
}
string Scientist::getName(){
    return name;
}
void Manager::remove()
{
   /* unsigned int i;
    cout << "insert the number of the scientist you would like to remove: ";
    cin >> i;
    if(i < vec.size())
    {
    vec.erase(vec.begin() + i);
    writeAllToFile();
    }
    else{
        cout << "there is no scientist labeled with that number." << endl;
    }*/
   string name;
   bool flag = false;

   print();

   cout << "insert the name of the scientist you would like to remove: ";
   cin >> name;
    for(unsigned int i = 0; i < vec.size(); i++){
        if(vec[i].getName() == name){
            vec.erase(vec.begin() + i);
            flag = true;
            writeAllToFile();
            cout << name << " has been removed." << endl;
        }
    }
    if(flag == false){
        cout << "there is no scientist named " << name
             << " in this file." << endl;
    }
}


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


