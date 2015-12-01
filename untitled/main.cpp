#include <iostream>
#include "stringset.h"

using namespace std;


int main()
{

    StringSet s1;
    s1.addFromFile("doc1.txt");
    cout << "Doc1: " << s1 << endl;

    StringSet s2;
    s2.addFromFile("doc2.txt");
    cout << "Doc2: "<< s2 << endl;

    StringSet Union = s1 + s2;
    cout << "Union: " << Union << endl;

     StringSet query;
     query.addFromFile("query.txt");
     cout << "Query: " << query << endl;


     cout << "Query size: " << query.numberOfStrings() << endl;

     StringSet snidmengiQueryOgUnion = query * Union;
     cout << "Found in Union: " << snidmengiQueryOgUnion.numberOfStrings() << endl;

     cout << "Similarity to doc1: " << query.similarity(s1) << endl;
     cout << "Similarity to doc2: " << query.similarity(s2);


    return 0;
}
