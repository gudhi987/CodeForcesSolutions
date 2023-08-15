//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int b,c,h;
//    cin >> b >> c >> h;
//    cout << 2*min(b-1,c+h)+1 << endl;
//    
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//    return 0;
//}

#include <iostream>
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
int count(int n,int k)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=k;
    }
    return count;
}
void solution()
{
    int n,k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    map<int,set<int>>mp;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            mp[arr[i]].insert(i);
            pq.push(arr[i]);
        }
        else
        {
            mp[arr[i]%k].insert(i);
            pq.push(arr[i]%k);
        }
    }
    
    while(!pq.empty())
    {
        int top=pq.top();
        for(auto it=mp[top].begin();it!=mp[top].end();it++)
        {
            cout << *it + 1 << " ";
            pq.pop();
        }
        mp.erase(top);
    }
    cout << endl;
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