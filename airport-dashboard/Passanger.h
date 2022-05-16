#ifndef PASSANGER_H
#define PASSANGER_H
#include<iostream>
#include<sstream>
#include<vector>
#include<string>    
using namespace std;
struct passanger_data
{
    string ID,Name,PhNo;
};
class Passanger
{
    public:
        int bucket;
        std::vector <int> *table;   //vector of pointers to vector of structs
        
    
    
        Passanger(int b);             
        int hashFunction(int key);     
        void insert(string data,int key);
        string output(int key);
        void deletes(int key);
        
};

#endif
