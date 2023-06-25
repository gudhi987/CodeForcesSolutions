//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int x=-1;
//    int y=0;
//    vector <int> a (n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        x=x&a[i];
//        y=y|a[i];
//    }
//    cout << y-x << endl;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printvec(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " "; 
    }
    cout << endl;
}
void solution()
{
    int n,k;
    cin >> n >> k;
    vector <int> h (n);
    for(int i=0;i<n;i++)
    {
        cin >> h[i];
    }
    vector <int> p (n);
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
    }
    while(k>0)
    {
        int min_power=INT_MAX;
//        int count=0;
        for(int i=0;i<n;i++)
        {
            if(h[i]>0)
            {
                h[i]-=k;
                if(h[i]>0)
                {
                    min_power=min(min_power,p[i]);
                }
                else
                {
                    h[i]=0;
                }
            }
        }
        if(min_power==INT_MAX)
        {
            break;
        }
        else
        {
            k=k-min_power;
        }
//        printvec(h);
    }
//    printvec(h);
    if(count(h.begin(),h.end(),0)==n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
}