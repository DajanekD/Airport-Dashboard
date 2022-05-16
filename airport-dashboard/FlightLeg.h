#ifndef FLIGHTLEG_H
#define FLIGHTLEG_H

class Flightleg 
{
    
    private:
        int bucket;
        std::list <int> *table;
        
    public:
        Flightleg(int b);
        int hashFunction(int key);
};

#endif 
