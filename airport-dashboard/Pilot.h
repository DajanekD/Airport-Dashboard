#ifndef PILOT_H
#define PILOT_H

struct Pilot_Values
{
    int id;
    string name;
    string datehired;
};
class Pilot
{
    public:

        std::vector <Pilot_Values> *table;

        int hashFunction(int id);      //calculate hash value  I CHOSE TO DO % HASH VALUE
        void insert(string values, string TableName);           //insert function
        void update(string values, string TableName);
        void select(string values_tblName, string nametoselect);           //search function
        void deleteKey();        //delete function
        void print();                   // print hash
};
#endif
