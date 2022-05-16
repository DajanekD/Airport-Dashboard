#include "PlaneSeat.h"


int PlaneType::hashFunction(string maker)
{
    int hashCode = 0;
    for (int i =0; i <maker.length(); i++)
    {
        hashCode += maker[i] * pow(PRIME_CONST, i);
    }
return hashCode % 23;
}


void insert(string values, string TableName) //insert((maker,model,seattype,no0fseats),PlaneSeat)
{
    int i= 1;
    string temp, maker, model, SeatType, NoOfSeats;
    stringLine line(values);

    while(getline(line, temp, ","))
    {
        if (i = 1)
            strcpy(maker, temp);
        if (i = 2)
            strcpy(model, temp);
        if (i = 3)
            strcpy(SeatType, temp);
        if (i = 4)
            strcpy(NoOfSeats, temp);
        i++;
    }


struct PlaneSeatValues psv;
psv.maker = maker;
psv.model = model;
psv.SeatType = SeatType;
psv.NoOfSeats = NoOfSeats;

int index = hashFunction(maker);
table[index].push_back(psv);
}

void Plane::update(string values, string TableName) //update((maker,lastmanintence, lastmaintenceA),PlaneSeat)
{
    int i=1;
    string temp, maker, model, SeatType, NoOfSeats;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(maker,temp);
        if(i==2)
            strcpy(model,temp);
        if(i==3)
            strcpy(SeatType,temp);
        if(i==4)
            strcpy(NoOfSeats, temp);
        i++;
    }

    int index = hashFunction(maker);

    std::vector<PlaneSeatValues> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == maker)
            break;
    }

    if(a != table[index].end())
    {
        table[index].maker = maker;
        table[index].model = model;
        table[index].SeatType = SeatType;
        table[index].NoOfSeats = NoOfSeats;
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}

void Plane::select(string values_tblName, string nametoselect)
{
    // the description pdf it doesnot specify that if the table doesnt have a name what are we comparing the values to and what specific column we need to search through
    int i=1;
    string temp, maker, model, SeatType, NoOfSeats;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(maker,temp);
        if(i==2)
            strcpy(model,temp);
        if(i==3)
            strcpy(SeatType,temp);
        if(i==4)
            strcpy(NoOfSeats, temp);
        i++;
    }

    int index = hashFunction(maker);

    std::vector<PlaneSeatValues> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == maker)
            break;
    }

    if(a != table[index].end())
    {
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}
