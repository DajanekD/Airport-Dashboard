#include"Airport.h"

int Airport::hashFunction(string code)
{
    int hashCode = 0;
    for (int i = 0; i < code.length(); i++) {
        hashCode += code[i] * pow(PRIME_CONST, i);
    }
    return hashCode % 23;
}

void Airport::insert(string values, string TableName)   //insert((code,city,state),Airport)
{
    int i=1;
    string temp,code,city,state;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(code,temp);
        if(i==2)
            strcpy(city,temp);
        if(i==3)
            strcpy(state,temp);

        i++;
    }

    struct Airport_Values av;
    av.code = code;
    av.city = city;
    av.state = state;
    
    int index = hashFunction(code)
    table[index].push_back(av);
}

void Airport::update(string values,string TableName)
{
    int i=1;
    string temp,code,city,state;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(code,temp);
        if(i==2)
            strcpy(city,temp);
        if(i==3)
            strcpy(state,temp);

        i++;
    }

    int index = hashFunction(code);

    std::vector<Airport_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == code)
            break;
    }

    if(a != table[index].end())
    {
        table[index].code = code;
        table[index].city = city;
        table[index].state = state;
        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}

void Airport::select(string values_tblName, string nametoselect)
{
    // the description pdf it doesnot specify that if the table doesnt have a name what are we comparing the values to and what specific column we need to search through
    int i=1;
    string temp,code,city,state;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(code,temp);
        if(i==2)
            strcpy(city,temp);
        if(i==3)
            strcpy(state,temp);

        i++;
    }

    int index = hashFunction(code);

    std::vector<Airport_Values> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == code)
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