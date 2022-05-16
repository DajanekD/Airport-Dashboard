#include"Pilot.h"

int Pilot::hashFunction(int id)
{
    return id % 23;
}

void Pilot::insert(string values, string TableName)   //insert((code,city,state),Airport)
{
    int i=1,id;
    string temp,name,datehired;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            id=temp; 
        if(i==2)
            strcpy(name,temp);
        if(i==3)
            strcpy(datehired,temp);

        i++;
    }

    struct Pilot_Values av;
    av.id = id;
    av.name = name;
    av.datehired = datehired;
    
    int index = hashFunction(id)
    table[index].push_back(av);
}

void Flight::update(string values,string TableName)
{
    int i=1,id;
    string temp,name,datehired;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            id=temp; 
        if(i==2)
            strcpy(name,temp);
        if(i==3)
            strcpy(datehired,temp);

        i++;
    }

    int index = hashFunction(id);

    std::vector<Pilot_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == id)
            break;
    }

    if(a != table[index].end())
    {
        table[index].id = id;
        table[index].name = name;
        table[index].datehired = datehired;
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}

void Flight::select(string values_tblName, string nametoselect)
{
    // the description pdf it doesnot specify that if the table doesnt have a name what are we comparing the values to and what specific column we need to search through
    int i=1,id;
    string temp,name,datehired;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            id=temp; 
        if(i==2)
            strcpy(name,temp);
        if(i==3)
            strcpy(datehired,temp);

        i++;
    }

    int index = hashFunction(id);

    std::vector<Airport_Values> :: iterator a;
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
