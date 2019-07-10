#include<iostream>
using namespace std;

int change(int* k)
{
    cout<<"k:"<<k<<endl;

    *k = 10;


}

int sum(int k,int m)
{
    int c = k+m;
    cout<<c<<endl;
}

int main()
{
    /*
    int a = 5;

    int * p= &a;

    change(p);

    cout<<a<<endl;
    */
    /*
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;*/
    int a,b;
    a = 5;
    b=4;
    sum(9,b);















}
