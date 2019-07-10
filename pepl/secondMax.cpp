#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int max=a[0],smax=a[1];

    if(max>smax)
    {
        for(int i=2;i<n;i++)
        {
            if(max<a[i])
            {
                smax = max;
                max = a[i];
            }

            if(smax<a[i] && max != a[i])
                smax = a[i];
        }
    }
    else if(max<=smax)
    {
        int t=smax;
        smax = max;
        max = t;

        for(int i=2;i<n;i++)
        {
            if(max<a[i])
            {
                smax = max;
                max = a[i];
            }
            if(smax<a[i] && max != a[i])
                smax = a[i];
        }


    }


    cout<<"max:"<<max<<"\t"<<"2nd max: "<<smax<<endl;

}
