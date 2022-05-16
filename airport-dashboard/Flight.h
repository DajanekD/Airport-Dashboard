#ifndef FLIGHT_H
#define FLIGHT_H

struct Flight_Values
{
    int flno;
    string meal;
    string smoking;
};
class Flight
{
    public:

        std::vector <Airport_Values> *table;

        int hashFunction(string flno);      //calculate hash value  I CHOSE TO DO % HASH VALUE
        void insert(string values, string TableName);           //insert function
        void update(string values, string TableName);
        void select(string values_tblName, string nametoselect);           //search function
        void deleteKey();        //delete function
        void print();                   // print hash
};


#endif
