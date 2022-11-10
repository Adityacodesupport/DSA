#include<bits/stdc++.h>

using namespace std;

int fact1(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fact1(n);
    return 0;
}