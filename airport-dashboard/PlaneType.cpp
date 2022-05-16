#include "PlaneType.h"

int PlaneType::hashFunction(string maker)
{
    int hashCode = 0;
    for (int i =0; i <maker.length(); i++)
    {
        hashCode += maker[i] * pow(PRIME_CONST, i);
    }
return hashCode % 23;
}


void insert(string values, string TableName)  //insert((maker,flyingspeed, groundspeed),PlaneType)
{
    int = 1;
    string temp, maker, model, FlyingSpeed, GroundSpeed;
    stringLine line(values);

    while(getline(line, temp, ","))
    {
        if (i = 1)
            strcpy(maker, temp);
        if (i = 2)
            strcpy(model, temp);
        if (i = 3)
            strcpy(FlyingSpeed, temp);
        if (i = 4)
            strcpy(GroundSpeed, temp);
        i++;
    }


struct PlaneTypeValues ptv;
ptv.maker = maker;
ptv.model = model;
ptv.FlyingSpeed = FlyingSpeed;
ptv.GroundSpeed= GroundSpeed;

int index = hashFunction(maker);
table[index].push_back(ptv);
}

void Plane::update(string values, string TableName)  //update((maker,model,flyingspeed, groundspeed),PlaneType)
{
    int i=1;
    string temp, maker, model, FlyingSpeed, GroundSpeed;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(maker,temp);
        if(i==2)
            strcpy(model,temp);
        if(i==3)
            strcpy(FlyingSpeed, temp);
        if(i==4)
            strcpy(GroundSpeed, temp);
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
        table[index].FlyingSpeed = FlyingSpeed;
        table[index].GroundSpeed = GroundSpeed;
        cout<< "Key was found and table was updated"<<endl;
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
    string temp, maker, model, FlyingSpeed, GroundSpeed;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(maker,temp);
        if(i==2)
            strcpy(model,temp);
        if(i==3)
            strcpy(FlyingSpeed,temp);
        if(i==4)
            strcpy(GroundSpeed, temp);
        i++;
    }

    int index = hashFunction(maker);

    std::vector<PlaneTypeValues> :: iterator a;
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

