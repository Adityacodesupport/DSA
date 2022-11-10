#include <iostream>
using namespace std;

int main()
{
    int a[1000], b[1000], c[1000];
    int n, i, N1, N2, N3;
    int sum1, sum2, sum3;
    cin >> n;
    // cout << "enter first";
    cin >> N1;
    for (i = 0; i < N1; i++)
    {
        cin >> a[i];
    }
    // cout << "enter second";
    cin >> N2;
    for (i = 0; i < N2; i++)
    {
        cin >> a[i];
    }
    // cout << "enter third";
    cin >> N3;
    for (i = 0; i < N3; i++)
    {
        cin >> a[i];
    }
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    while (i < N1)
    {
        sum1 = sum1 + a[i];
    }
    while (i < N2)
    {
        sum2= sum2 + b[i];
    }
    while (i < N3)
    {
        sum3 = sum3 + c[i];
    }
    cout << sum1 << "\n";
    cout<< sum2 << "\n";
    cout<< sum3;
}