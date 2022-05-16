#ifndef AIRPORT_H
#define AIRPORT_H
struct Airport_Values
{
    string code;
    string city;
    string state;
};
class Airport
{
    public:

        std::vector <Airport_Values> *table;

        int hashFunction(string code);      //calculate hash value  I CHOSE TO DO % HASH VALUE
        void insert(string values, string TableName);           //insert function
        void update(string values, string TableName);
        void select(string values_tblName, string nametoselect);           //search function
        void deleteKey(int key);        //delete function
        void print();                   // print hash
};

#endif
