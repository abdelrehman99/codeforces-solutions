#include<iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
class flight
{
private :
    string name;
    int number;
    float price;
    string date;
    string cla;
public :
    void setflight(string n,int num,float p, string d,string c)
    {
        name=n;
        number=num;
        price=p;
        date=d;
        cla=c;
    }
    void showflight()
    {
        cout<<"Name of country : "<<name<<endl<<
        "number of plane : "<<number<<endl<<
        "Price of ticket : $"<<price<<endl<<
        "Date of depature : "<<date<<endl<<
        "Class of ticket : "<<cla<<endl;
    }
    int condition(string x)
    {
        return (name.compare(x));
    }

    int cl(string g)
    {
        return (cla.compare(g));
    }
};
class client
{
private :
    string name;
    string email;
    int age;
    string passid;
public :
    void getinfio(string n, string e, int a, string pass)
    {
        cout<<"Fill the following form : "<<endl<<"Name : ";cin>>n;
        cout<<"Email : ";cin>>e;
        cout<<"Age : ";cin>>a;
        cout<<"Passport Id : ";cin>>pass;
        name=n;
        email=e;
        age=a;
        passid=pass;
    }
};
int main()
{
    client x[7];
    flight f[6];
    string name;
    string email;
    int age;
    string passid;
    string c;
    int n;
    string t,b;
    f[0].setflight("Uae",867,1230,"1/12/2020","First");
    f[1].setflight("Usa",975,1700,"6/8/2020","Economy");
    f[2].setflight("Qatar",498,988,"8/7/2020","Economy");
    f[3].setflight("Qatar",768,1200,"25/7/2020","First");
    f[4].setflight("Uae",889,900,"5/12/2020","Economy");
    f[5].setflight("Usa",267,2500,"19/8/2020","First");
    for(int i = 0 ; i < 7 ; i++)
    {
        x[i].getinfio(name,email,age,passid);
        do
        {
            cout<<" The flights available are to Usa,Uae, and Qatar, where do you want to travel ? \n";
            cin>>c;
            cout<<" Do you want an Economy or First ticket ? \n";
            cin>>t;
            n=0;
            for(int j = 0 ; j < 6 ; j++)
            {
                if(f[j].condition(c)==0 && (f[j].cl(t)==0))
                {
                    cout<<t;
                    cout<<j<<endl;
                    f[j].showflight();
                    break;
                }
                 else
                {
                    n++;
                }
            }
            if(n%6==0 && n!=0)
            {
                cout<<"Sorry these flights are not available at the moment.\n";
            }
        }while(n%6==0 && n!=0);
        cout<<"This is the available flight if you want to book it enter yes otherwise enter no ? \n";
        cin>>b;
        if(b=="Yes"||b=="yes")
        {
            cout<<"We have sent you an email with the bill, and thank you for trusting our airlines \nMoving to the next customer ";
        }else
        {
            cout<<"Sorry this is the only available flight for your demand \nMoving to the next customer ";
        }
    }
}