#ifndef PLANESEAT_H
#define PLANESEAT_H


struct PlaneSeatValues
{
    string maker;
    string model;
    string SeatType;
    string NoOfSeats;
};

class PlaneType
{
    public:

        std::vector <PlaneSeatValues> *table;

        int hashFunction(string maker);      //calculate hash value  I CHOSE TO DO % HASH VALUE
        void insert(string values, string TableName);           //insert function
        int search(int key);                                   //search function
        void update(string values, string TableName);
        void select(string values_tblName, string nametoselect);           
        void deletefunc(int key);                              //delete function
        void print();                                        // print hash
};


#endif
