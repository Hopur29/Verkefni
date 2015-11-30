#ifndef DATA_H
#define DATA_H


class Data
{
public:
    Data();
    void init();
    void add(Scientist s);
private:
    vector<Scientist> vec;
    void writeAllToFile();
};

#endif // DATA_H
