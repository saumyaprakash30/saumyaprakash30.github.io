#include<bits/stdc++.h>
using namespace std;

struct Car
{
    string name;
    int cost;
    int unit;

};

class Bus
{
private:
    string name;
    int cost;
public:
    void read();
    void print();
};

void Bus::read()
{
    cin>>name>>cost;
}
void Bus::print()
{
    cout<<name<<" "<<cost<<endl;
}


int sum(int b[])
{
    int sum = 0;
    for(int i=0;i<10;i++)
    {
        sum = sum  + b[i];
    }

    return sum;
}

void read(Car car[])
{
    for(int i=0;i<3;i++)
    {
        cin>>car[i].name>>car[i].cost>>car[i].unit;

    }
}

int main()
{
    /*
    int a[10];

    for(int i=0;i<10;i++)
        cin>>a[i];
    int k = sum(a);

    cout<<k<<endl;
    */
    /*
    char a[10];
    cin>>a;

    for(int i=0;i<10;i++)
    {
        cout<<a[i];
        cout<<i<<endl;

    }
    */
    /*
    Car c1,c2;
    c1.name = "omni";
    c1.cost = 1200000;
    c1.scap = 8;

    cout<<c1.name<<endl;
    cout<<c1.cost<<endl;
    cout<<c1.scap<<endl;

    c2.cost = 5000;
    c2.scap = 2;
    c2.name = "skoda";

    cout<<c2.cost<<endl;
    cout<<c2.scap<<endl;
    cout<<c2.name<<endl;
*/
    /*
    Car c[3];
    read(c);
    for(int i=0;i<3;i++)
    {
        cout<<c[i].name<<" "<<c[i].cost<<" "<<c[i].unit<<endl;
    }

    */

    Bus b1;
    b1.read();
    b1.print();














}
