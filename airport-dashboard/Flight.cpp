#include"Flight.h"

int Flight::hashFunction(int flno)
{
    return flno % 23;
}

void Flight::insert(string values, string TableName)   //insert((code,city,state),Airport)
{
    int i=1,flno;
    string temp,meal,smoking;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            flno=temp; 
        if(i==2)
            strcpy(meal,temp);
        if(i==3)
            strcpy(smoking,temp);

        i++;
    }

    struct Flight_Values av;
    av.flno = flno;
    av.meal = city;
    av.smoking = state;
    
    int index = hashFunction(flno)
    table[index].push_back(av);
}

void Flight::update(string values,string TableName)
{
    int i=1,flno;
    string temp,meal,smoking;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            flno=temp; 
        if(i==2)
            strcpy(meal,temp);
        if(i==3)
            strcpy(smoking,temp);

        i++;
    }

    int index = hashFunction(flno);

    std::vector<Flight_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == flno)
            break;
    }

    if(a != table[index].end())
    {
        table[index].flno = flno;
        table[index].meal = meal;
        table[index].smoking = smoking;
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
    int i=1,flno;
    string temp,meal,smoking;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            flno=temp; 
        if(i==2)
            strcpy(meal,temp);
        if(i==3)
            strcpy(smoking,temp);

        i++;
    }

    int index = hashFunction(flno);

    std::vector<Airport_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == flno)
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
