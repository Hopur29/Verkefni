#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "stringset.h"
using namespace std;



int main()
{
    StringSet setA, setB, setC;
    setA.addDocument("doc1.txt");
    setB.addDocument("doc2.txt");
    setC.addDocument("query.txt");

    StringSet Union = setA + setB;
    cout << "Doc1: " << setA << endl;
    cout << "Doc2: " << setB << endl;
    cout << "Union: " << Union << endl;
    cout << "Query: " << setC << endl;
    cout << "Query size: " << setC.size() << endl;
    cout << "Found in Union: " << (Union*setC).size() << endl;
    cout << "Similarity to doc1: " << similarity(setC,setA) << endl;
    cout << "Similarity to doc2: " << similarity(setC,setB) << endl;


    return 0;
}
