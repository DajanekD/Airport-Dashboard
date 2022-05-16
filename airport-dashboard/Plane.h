#ifndef PLANE_H
#define PLANE_H

struct PlaneValues
{
    int id;
    string maker;
    string model;
    string lastmaintenence;
    string lastmaintenenceA;
};

class Plane
{
    public:
        std::vector <PlaneValues> *table;    

        int hashFunction(int id);
        void insert(int key, string values);       // insert function for Plane
        void update(string values, string TableName);
        void select(string values_tblName, string nametoselect);           //select function
        void deletefunc(int key);                     // delete function (key)
        void print();                                 // display hash
       
};

#endif
