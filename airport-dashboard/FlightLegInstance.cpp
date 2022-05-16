#include "FlightLegInstance.h"


int Flightleginstance ::hashFunction(int Seq)
{
    int hashCode = 0;
    for (int i = 0; i < FLNO.length(); i++) {
        hashCode += FLNO[i] * pow(PRIME_CONST, i);
    }
    return hashCode % 23;
}

void Flightinstance::insert(int values, int TableName)   //insert((Seq,FLNO,Fdate,ActDept,ActArr,Pilot),Flightleginstance)
{
    int i=1;
    int Seq,FLNO,Fdate,ActDept,ActArr,Pilot;

    while(1)
    {
        if(i==1)
            holder[Seq].key = new.key
        if(i==2)
            holder[FLNO].key = new.key
        if(i==3)
            holder[Fdate].key = new.key
        if(i==4)
            holder[ActDept].key = new.key
        if(i==5)
            holder[ActArr].key = new.key
        if(i==6)
            holder[Pilot].key = new.key
        
        i++;
    }

    struct Flightleginstance_Value av;
    av.Seq = Seq;
    av.FLNO = FLNO;
    av.Fdate = Fdate;
    av.ActDept = ActDept;
    av.ActArr = ActArr;
    av.Pilot = Pilot;
    
    int index = hashFunction(Seq)
    table[index].push_back(av);
}

void Flightleginstance ::update(int values,int TableName)
{
    int i=1;
    int Seq,FLNO,Fdate,ActDept,ActArr,Pilot;
    

    while(1)
    {
        if(i==1)
            holder[Seq].key = new.key
        if(i==2)
            holder[FLNO].key = new.key
        if(i==3)
            holder[Fdate].key = new.key
        if(i==4)
            holder[ActDept].key = new.key
        if(i==5)
            holder[ActArr].key = new.key
        if(i==6)
            holder[Pilot].key = new.key
       
        i++;
    }

    int index = hashFunction(Seq);

    std::vector<FlightInstance_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == Seq)
            break;
    }

    if(a != table[index].end())
    {
        table[index].Seq = Seq;
        table[index].FLNO = FLNO;
        table[index].Fdate = Fdate;
        table[index].ActDept = ActDept;
        table[index].ActArr = ActArr;
        table[index].Pilot = Pilot;
        
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}

void Flightleginstance ::select(int values_tblName, int datetoselect)
{
    //i the description pdf it doesnot specify that if the table doesnt have a name what are we comparing the values to and what specific column we need to search through
}
