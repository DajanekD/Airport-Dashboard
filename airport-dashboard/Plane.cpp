#include "Plane.h"

int Plane::hashFunction(int id)
{
    return id % 23;
}


void Plane::insert(int key, string values) //insert((id,maker,lastmanintence, lastmaintenceA),Plane)
{
    int i = 1;
    string temp, maker, model, lastmaintence, lastmaintenceA;
    stringLine line(values);

    while(getline(line, temp, ","))
    {
        if (i = 1)
            strcpy(id, temp);
        if (i = 2)
            strcpy(maker, temp);
        if (i = 3)
            strcpy(model, temp);
        if (i = 4)
            strcpy(lastmaintence, temp);
        if (i = 5)
            strcpy(lastmaintenceA, temp);
        i++;
    }


struct PlaneValues plane_values;
plane_values.id = id;
plane_values.maker = maker;
plane_values.model = model;
plane_values.lastmaintence = lastmaintence;
plane_values.lastmaintenceA = lastmaintenceA;

int index = hashFunction(id);
table[index].push_back(plane_values);
}

void Plane::update(string values, string TableName)  //update((id,maker,lastmanintence, lastmaintenceA),Plane)
{
    int i=1;
    string temp,id, maker, model, lastmaintence, lastmaintenceA;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(id,temp);
        if(i==2)
            strcpy(maker,temp);
        if(i==3)
            strcpy(model,temp);
        if(i==4)
            strcpy(lastmaintence, temp);
        if(i==5)
            strcpy(lastmaintenceA, temp);
        i++;
    }

    int index = hashFunction(id);

    std::vector<PlaneValues> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == id)
            break;
    }

    if(a != table[index].end())
    {
        table[index].id = id;
        table[index].maker = maker;
        table[index].model = model;
        table[index].lastmaintence = lastmaintence;
        table[index].lastmaintenceA = lalstmaintenceA;
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
    string temp, id, maker, model, lastmaintence, lastmaintenceA;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(id,temp);
        if(i==2)
            strcpy(maker,temp);
        if(i==3)
            strcpy(model),temp);
        if(i==4)
            strcpy(lastmaintence, temp);
        if(i==5)
            strcpy(lastmaintenceA, temp);
        i++;
    }

    int index = hashFunction(id);

    std::vector<PlaneValues> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == id)
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
