#include"reservation.h"
int Reservation::  stringhashing(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum+=s[i];

    }
    return sum%23;
}
int Reservation :: inthashing(int s){
    return s%23;
}
void Reservation:: select(string values, string TableName){
    int i=1;
    string PassID,FLNO,FDate,FromA,ToA,SeatClass,DateBooked,DateCancelled, temp;
    stringstream myStream(values);

    while(getline(myStream,temp,','))
    {
        if(i==1)
            PassID=temp[i];
        if(i==2)
            FLNO,temp[i];
        if(i==3)
            FDate=temp[i];
        if(i==4)
            FromA=temp[i];
        if(i==5)
            ToA=temp[i];
        if(i==6)
            SeatClass=temp[i];
        if(i==7)
            DateBooked=temp[i];
        if(i==8)
            DateCancelled=temp[i];

        i++;
    }

    string tohash;
    tohash=PassID + FLNO + FDate;
    int index = stringhashing(tohash);

    std::vector<reserve_data> :: iterator a;
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
void Reservation::insert(string values, string TableName)   //insert data into table
{
    int i=1;
    string temp, PassID,FLNO,FDate,FromA,ToA,SeatClass,DateBooked,DateCancelled;  //data to be inserted
    stringstream myStream(values);

    while(getline(myStream,temp,','))       //parse through the entire line to seperate each data
    {
        if(i==1)
            PassID=temp[i];
        if(i==2)
            FLNO,temp[i];
        if(i==3)
            FDate=temp[i];
        if(i==4)
            FromA=temp[i];
        if(i==5)
            ToA=temp[i];
        if(i==6)
            SeatClass=temp[i];
        if(i==7)
            DateBooked=temp[i];
        if(i==8)
            DateCancelled=temp[i];

        i++;
    }                   

    struct reserve_data av;
    av.PassID = PassID;
    av.FLNO = FLNO;
    av.FDate = FDate;
    av.FromA = FromA;
    av.ToA = ToA;
    av.SeatClass = SeatClass;
    av.DateBooked = DateBooked;
    av.DateCancelled = DateCancelled;
    string tohash;
    tohash=PassID + FLNO + FDate;
    int index = stringhashing(tohash);
    table[index].push_back(av);
}
