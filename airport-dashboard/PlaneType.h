#ifndef PLANETYPE_H
#define PLANETYPE_H


struct PlaneTypeValues
{
    string maker;
    string model;
    string FlyingSpeed;
    string GroundSpeed;
};


class PlaneType
{
    public:

        std::vector <PlaneTypeValues> *table;

        int hashFunction(string maker);      //calculate hash value  I CHOSE TO DO % HASH VALUE
        void insert(string values, string TableName);           //insert function
        int search(int key);                                   //search function
        void deletefunc(int key);                              //delete function
        void print();                                        // print hash
};

#endif