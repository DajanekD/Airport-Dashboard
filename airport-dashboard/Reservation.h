#ifndef RESERVATION_H
#define RESERVATION_H
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#include<vector>
struct reserve_data
{
    string PassID,FLNO,FDate,FromA,ToA,SeatClass,DateBooked,DateCancelled;
};
class Reservation
{   public:
    
        int bucket;
        vector <reserve_data> *table;    
        Reservation(int b);             //constructor for class Reservation
        int stringhashing(string);     //calculate hash value  
        int inthashing (int);
        string output(int key);
        void insert(string data, int key);
        void update(string, string);  // row vbalues in string and tablename
        void insert(string, string);
        void select(string ,string);
        void deletes (int key);
};

#endif
