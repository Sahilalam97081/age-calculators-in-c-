#include<iostream>
using namespace std;
int main(){

    int birthmonth,birthyear;

    int currentmonth,currentyear;

    int agey,agem;

    cout<<"Enter your birth year:";
    cin>>birthyear;

    cout<<"Enter you birth month:";
    cin>>birthmonth;

    cout<<"Enter your current year:";
    cin>>currentyear;

    cout<<"Enter your current month:";
    cin>>currentmonth;

    agey=currentyear-birthyear;

    agem=12-birthmonth;

    cout<<"Your age is "<< agey <<" "<< "Years and " << agem <<" "<< "months old";

    return 0;



}