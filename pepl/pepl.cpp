#include<iostream>

using namespace std;

int main()
{
    /*
    int a;
    a = 10;

    int b = 20;
    int c = a +b;
    cout<<"Hello World!!\n ";
    cout<<"pepl\tprakash\n";
    cout<<a<<endl;
    cout<<c;
    */
    /*
    int a =10;
    int pepl =20;

    int c;
    c = a*pepl;

    cout<<c<<endl;




    //increamenting

    int k=5;
    cout<<"k= "<<k++<<endl;
    cout<<"k= "<<++k<<endl;
    cout<<"k= "<<k--<<endl;
    cout<<"k= "<<--k<<endl;

    // user se input lena hai

    int k1;

    cin>>k1;

    k1 = k1*10;


    cout<<k1<<endl;

    // swaping of 2 numbers

    int x,y,temp;

    cin>>x>>y;

    temp=x;
    x= y;
    y=temp;

    cout<<"x: "<<x<<"pepl"<<endl;
    cout<<"y: "<<y<<endl;

    cout<<"inc/dec"<<endl;

    int a1=7;


    a1++; // increament assign

    ++a1;

    int k2 = a++;


    cout<<a1++;
    cout<<++a1;
    */

    //Q: i/p no. of days o/p no. of hrs
    /*
    int days;
    cout<<"no. of days: ";
    cin>>days;
    cout<<"hrs: "<<days*24<<endl;
    */
    //-------------- if else

    // >, <, == , >=,<= , !=
    /*
    int a = 10;
    int b= 20;



    if(a!=b)
    {
        cout<<"hello! \n";


    }
    if(a==10)
    {
        cout<<"hi!";
    }
    else
    {
        "hello 111";
    }
    cout<<a;


    */

    int gen;
    int age;
    // 2 -male 3 - female
    cin>>gen;
    cin >>age;

    if(gen==2)
    {
        if(age>= 20)
        {
            cout<<"enter\n";
        }
        else{
            cout << "no!" << '\n';
        }
    }
    else if(gen==3)
    {
        if(age>=18)
        {
            cout << "enter" << '\n';
        }
        else
        {
            cout<<"no";
        }
    }

    else
    {
        cout<<"wrong gen!";
    }


    


}
