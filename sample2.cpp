#include <iostream>
using namespace std;
int f(int);
int main()
{
    int n, Ans;
    Ans = f(5);
    cout << Ans;
    return 0;
}
int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + f(n - 1);
    }
}