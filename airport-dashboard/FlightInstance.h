#ifndef FLIGHTINSTANCE_H
#define FLIGHTINSTANCE_H
struct FlightInstance_Values
{
    int FLNO;
    int Fdate;
};
class FLightInstance
{
    public:

        std::vector <FlightInstance_Values> *table;

        int hashFunction(int FLNO);      //calculate hash value  
        void insert(int values, int TableName);           //insert function
        int search(int key);           //search function
        void deleteKey(int key);        //delete function
        void print();                   // print hash
};

