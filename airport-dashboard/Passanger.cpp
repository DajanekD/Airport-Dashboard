#include "Passanger.h"
#include "Reservation.h"
using namespace std;
int Reservation ::  stringhashing(string s){    //hash function
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i];

    }
    return sum%23;
}

void Reservation:: select(string values, string TableName){
    int i=1;
    string temp, ID, Name, PhNo;    
    stringstream myStream(values);
    while(getline(myStream,temp,','))   
    {
        if(i==1)    
            strcpy(ID,temp);
        if(i==2)
            strcpy(Name,temp);
        if(i==3)
            strcpy(PhNo,temp);  
        i++;
    }

    string tohash;
    tohash= ID;
    int index = stringhashing(tohash);  //index of the bucket

    std::vector<reserve_data> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {   
        if(*a == ID)
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
void Reservation::insert(string values, string TableName)   //insert data into table
{
    int i=1;
    string temp, ID, Name, PhNo;
    stringstream myStream(values);
    while(getline(myStream,temp,','))   
    {
        if(i==1)
            strcpy(ID,temp);
        if(i==2)
            strcpy(Name,temp);
        if(i==3)
            strcpy(PhNo,temp);
        i++;
    }         

    struct passanger_data av;
    av.ID = ID;
    av.Name = Name;
    av.PhNo = PhNo;

    string tohash;
    tohash=ID;
    int index = stringhashing(tohash);
    table[index].push_back(av);
}
void Reservation:: update(string values, string TableName){ //update data in table
    int i=1;
    string temp;
    string temp, ID, Name, PhNo;
    stringstream myStream(values);
    while(getline(myStream,temp,','))
    {
        if(i==1)
            strcpy(ID,temp);
        if(i==2)
            strcpy(Name,temp);
        if(i==3)
            strcpy(PhNo,temp);
        i++;
    }

    string tohash;
    tohash=ID;
    int index = stringhashing(tohash);
    std::vector<passanger_data> :: iterator a;
    for(a = table[index].begin(); a != table[index].end(); a++)
    {
        if(*a == ID)
            break;
    }

    if(a != table[index].end())
    {
        table[index].ID = ID;
        table[index].Name = Name;
        table[index].PhNo= PhNo;
        

        cout<<"Key was found and table was updated"<<endl;
    }
    else 
    {
        cout<<"Given key is not available."<<endl;
    }
}
