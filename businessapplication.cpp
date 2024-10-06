#include<iostream>
using namespace std;

void printtitle();
void printmenu();

void bookflight();
void cancelflight();

int option=0;

int main()
{
    printtitle();
    printmenu();

    if(option==1)
    {
        bookflight();
    }
    else if(option==2)
    {
        cancelflight();
    }

    return 0;
}

void printtitle()
{
    cout<<"**********************************************************************************************************************************************"<<endl;
    cout<<"*  #######  ##      ######   #####    ##  ##  ######     ##    ##   #####   ##    ##   #####    #####    ##    ##  ######  ##    ##  ######  *"<<endl;
    cout<<"*  ##       ##        ##    ##   ##   ##  ##    ##       ###  ###  ##   ##  ####  ##  ##   ##  ##   ##   ###  ###  ##      ####  ##    ##    *"<<endl;
    cout<<"*  ##       ##        ##    ##        ##  ##    ##       ########  ##   ##  ########  ##   ##  ##        ########  ##      ########    ##    *"<<endl;
    cout<<"*  #####    ##        ##    ##  ####  ######    ##       ## ## ##  #######  ##  ####  #######  ##  ####  ## ## ##  ######  ##  ####    ##    *"<<endl;
    cout<<"*  ##       ##        ##    ##  ## #  ##  ##    ##       ##    ##  ##   ##  ##    ##  ##   ##  ##  ## #  ##    ##  ##      ##    ##    ##    *"<<endl;
    cout<<"*  ##       ######  ######   ##### #  ##  ##    ##       ##    ##  ##   ##  ##    ##  ##   ##   ##### #  ##    ##  ######  ##    ##    ##    *"<<endl;
    cout<<"*                                                                                                                                            *"<<endl;
    cout<<"*                                                #####   ##    ##   #####   ######  ######  ##    ##                                         *"<<endl;
    cout<<"*                                               ##   ##  ##    ##  ##   ##    ##    ##      ###  ###                                         *"<<endl;
    cout<<"*                                                 ##      ##  ##     ##       ##    ##      ########                                         *"<<endl;
    cout<<"*                                                   ##      ##         ##     ##    ######  ## ## ##                                         *"<<endl;
    cout<<"*                                               ##   ##     ##     ##   ##    ##    ##      ##    ##                                         *"<<endl;
    cout<<"*                                                #####      ##      #####     ##    ######  ##    ##                                         *"<<endl;
    cout<<"*                                                                                                                                            *"<<endl;
    cout<<"**********************************************************************************************************************************************"<<endl;

}
void printmenu()
{
    cout<<"Select the following options:"<<endl;
    cout<<"1.Booking of flight!"<<endl;
    cout<<"2.Cancelation of flight"<<endl;
    cin>>option;
}
void bookflight()
{
    int people,country;
    double tax=0,total,price;
    string name1,name2,name3;        //in future will add array for it
    string country_name;

    cout<<"Enter number of people to book flight for:";
    cin>>people;
    cout<<"Select destination:"<<endl;
    cout<<"1.Pakistan! ($200)"<<endl;
    cout<<"2.India!    ($300)"<<endl;
    cout<<"3.England!  ($400)"<<endl;
    cin>>country;
    if(country==1)
    {
        tax=5.0;
        price=200.0;
        country_name="Pakistan";
    }
    else if(country==2)
    {
        tax=10.0;
        price=300.0;
        country_name="India";
    }
    else if(country==1)
    {
        tax=15.0;
        price=400.0;
        country_name="England";
    }

    total=(price+(price*(tax/100)));

    //for(int i=1;1<=people;i++)                          as array is needed for proper functioning but not studied to 
    //{                                                   fullfill requirement of pd it is like this but will improve later
        cout<<"Enter name of first person:";            //as it is only first version 
        cin>>name1;
        cout<<"Enter name of second person:";
        cin>>name2;
        cout<<"Enter name of third person:";
        cin>>name3;
    //}

    cout<<"Flight has been booked for:"<<endl;
    cout<<name1<<endl;
    cout<<name2<<endl;
    cout<<name3<<endl;
    cout<<"To country:"<<country_name<<endl;
    cout<<"Price per person: $"<<total<<endl;
    cout<<"Price for "<<people<<" person: $"<<total*3<<endl;



}
void cancelflight()             //will continue till furthure pd
{

}