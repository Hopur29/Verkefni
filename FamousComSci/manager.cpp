#include "manager.h"

using namespace std;

Manager::Manager()
{

}

void Manager::add(Scientist s)
{
    vec.push_back(s);
}

void Manager::print()
{
    for(int i = 0; i < vec.size(); i++)
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
