#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ote(int num)
{
    if(num%2==0)
    {
        int count=0;
        while(num>0 && num%2==0)
        {
            num/=2;
            count++;
        }
        return count;
    }
    else
    {
        int count=0;
        while(num>0 && num%2!=0)
        {
            num/=2;
            count++;
        }
        return count;
    }
}
void solution()
{
    int n;
    cin >> n;
    vector <int> a (n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int odd_count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            odd_count++;
        }
    }
    if(odd_count%2==0)
    {
        cout << "0" << endl;
    }
    else
    {
        int minimum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            minimum=min(minimum,ote(a[i]));
        }
        cout << minimum << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}