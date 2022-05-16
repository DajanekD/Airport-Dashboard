#ifndef FLIGHTLEGINSTANCE_H
#define FLIGHTLEGINSTANCE_H
struct FlightInstance_Values
{
    int Seq;
    int FLNO;
    int Fdate;
    int ActDept;
    int ActArr;
    int Pilot;
};
class FLightLegInstance
{
    public:

        std::vector <FlightLegInstance_Values> *table;

        int hashFunction(int Seq);      //calculate hash value  
        void insert(int values, int TableName);           //insert function
        int search(int key);           //search function
        void deleteKey(int key);        //delete function
        void print();                   // print hash
};

