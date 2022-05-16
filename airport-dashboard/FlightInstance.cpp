#include "FlightInstance.h"


int Flightinstance ::hashFunction(int FLNO)
{
    int hashCode = 0;
    for (int i = 0; i < FLNO.length(); i++) {
        hashCode += FLNO[i] * pow(PRIME_CONST, i);
    }
    return hashCode % 23;
}

void Flightinstance::insert(int values, int TableName)   //insert((FLNO,Fdate),Flightinstance)
{
    int i=1;
    int FLNO,Fdate;

    while(1)
    {
        if(i==1)
            holder[FLNO].key = new.key
        if(i==2)
            holder[Fdate].key = new.key
        
        i++;
    }

    struct Flightinstance_Value av;
    av.FLNO = FLNO;
    av.Fdate = Fdate;
    
    
    int index = hashFunction(FLNO)
    table[index].push_back(av);
}

void Flightinstance ::update(int values,int TableName)
{
    int i=1;
    int FLNO,Fdate;
    

    while(1)
    {
        if(i==1)
            holder[FLNO].key = new.key
        if(i==2)
            holder[Fdate].key = new.key
       
        i++;
    }

    int index = hashFunction(FLNO);

    std::vector<FlightInstance_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == FLNO)
            break;
    }

    if(a != table[index].end())
    {
        table[index].FLNO = FLNO;
        table[index].Fdate = Fdate;
        
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}

void Flightinstance ::select(int values_tblName, int datetoselect)
{
    // the description pdf it does not specify that if the table doesnt have a name what are we comparing the values to and what specific column we need to search through
}
