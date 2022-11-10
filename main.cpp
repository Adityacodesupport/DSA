#include<bits/stdc++.h>
using namespace std;

void generateNums(){
    int d,n;
    cin>>d>>n;
    int digits[d];
    for(int i=0;i<d;i++)
    {
        cin>>digits[i];
    }
    if(n<=d)
    {
        for(int i=0;i<n;i++)
        {
            cout<<digits[i];
        }
    }
    else{
        queue<int> q;
        for(int i=0;i<d;i++)
        {
            q.push(digits[i]);
        }
        int inserted=d, printed=0;
        while(printed<n)
        {
            int t=q.front();
            q.pop();
            cout<<t<<" ";
            printed++;
            for(int i=0;inserted<n && i<n;i++)
            {
                q.push(t*10+digits[i]);
                inserted++;
            }
        }
    }
}
int main()
{
    generateNums();
    return 0;
}