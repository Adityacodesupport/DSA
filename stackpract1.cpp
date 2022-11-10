/*
Author: Aditya Khatode.
Date: 12/02/2021
day:Thursday
Topic: Stack practice (Applications)-> 1)Balancing brackets.
                                       2)Reverse a string using stack.
                                       3)removeDuplicates1..
                                       4)removeDuplicates of consecutive k occurences..
                                       5)previous smaller number...(problem).
*/

#include <bits/stdc++.h>
using namespace std;

void balancingBrackets1();
void balancingBrackets2();
void reverseString();
void removeDuplicates1();
void removeDuplicates2();
void previousSmaller();

void balancingBrackets1()
{
    string s;
    cin >> s;
    int i = 0, count = 0;
    while (i < s.length())
    {
        if (s[i] == '(')
        {
            count++;
        }
        else if (s[i] == ')')
        {
            count--;
        }
        if (count < 0)
        {
            cout << "Invalid sequence" << endl;
            return;
        }
        i++;
    }
    if (count == 0)
    {
        cout << "Valid sequence" << endl;
    }
    else
    {
        cout << "Invalid sequence" << endl;
    }
}

void balancingBrackets2()
{
    string s;
    cin >> s;
    stack<char> st;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            { // ()}{ => in this type of sequence '}' it doesn't have opening brackets so our stack is empty that's why this edge case is important..
                cout << "Invalid sequence";
                return;
            }
            else if (
                st.top() == '(' && s[i] == ')' ||
                st.top() == '{' && s[i] == '}' ||
                st.top() == '[' && s[i] == ']' ||
                st.top() == '<' && s[i] == '>')
            {
                st.pop();
            }
            else
            {
                cout << "Invalid sequence" << endl;
                return;
            }
        }
        i++;
    }
    if (st.empty())
    {
        cout << "Valid sequence" << endl;
    }
    else
    {
        cout << "Invalid sequence" << endl;
    }
}
void reverseString()
{
    stack<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void removeDuplicates1()
{
    string s;
    cin >> s;
    stack<char> st;
    int i = 0;
    while (i < s.length())
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if (st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
        i++;
    }
    s = "";
    while (!st.empty())
    {
        s = st.top() + s;
        st.pop();
    }
    cout << s << endl;
}
void removeDuplicates2()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    stack<pair<char, int>> st;
    pair<char, int> p;
    int i = 0;
    while (i < s.length())
    {
        if (st.empty())
        {
            st.push({s[i], 1});
        }
        else
        {
            if (st.top().first == s[i])
            {
                if (st.top().second == (k - 1))
                {
                    for (int j = 0; j < k - 1; j++)
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push({s[i], st.top().second + 1});
                }
            }
            else
            {
                st.push({s[i], 1});
            }
        }
        i++;
    }
    s = "";
    while (!st.empty())
    {
        s = st.top().first + s;
        st.pop();
    }
    cout << s;
}
void previousSmaller(int *prev, int *nums, int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && nums[st.top()] >= nums[i])
        {
            st.pop();
        }
        prev[i] = (st.empty() ? -1 : st.top());
        st.push(i);
    }
}

void removeDuplicate3()
{
    string str;
    getline(cin, str);
    int n = str.length();
    stack<char> st;
    int i = 0;
    while (i < n)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else if (st.top() == str[i])
        {
            continue;
        }
        else
        {
            st.push(str[i]);
        }
        i++;
    }
    str = "";
    while (!st.empty())
    {
        str = str + st.top();
        st.pop();
    }
    cout<<str<<endl;
}
int main()
{
    // int n;
    // cin>>n;
    // int nums[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>nums[i];
    // }
    // int prev[n];
    // previousSmaller(prev,nums,n);

    // for(int i=0;i<n;i++)
    // {
    //     if(prev[i]==-1)
    //     {
    //         cout<<"-1 ";
    //     }
    //     else{
    //         cout<<nums[prev[i]]<<" ";
    //     }
    // }
    // cout<<endl;
    // balancingBrackets1();
    // balancingBrackets2();
    // reverseString();
    // removeDuplicates1();
    // removeDuplicates2();
    removeDuplicate3();
    return 0;
}