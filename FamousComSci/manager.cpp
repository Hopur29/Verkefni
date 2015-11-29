#include "manager.h"
#include <fstream>
#include <iostream>

using namespace std;

Manager::Manager()
{

}

void Manager::init()
{
    ifstream read;
    read.open("data.txt", fstream::in | fstream::out | fstream::app);

    if (read.is_open())
      {
        cout << "hello";
        Scientist s;

               add(s);

      }
      else
      {
        cout << "Error opening file";
      }
}

void Manager::add(Scientist s)
{    
    vec.push_back(s);
}

void Manager::print()
{
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
}

void Manager::remove(string name)
{
    cout << name;
}

void Manager::search(string name)
{
    cout << name;
}

