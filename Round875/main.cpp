//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    map<int,int>mp;
//    for(int i=1;i<=n;i++)
//    {
//        mp[i]=n-i+1;
//    }
//    vector<int>b;
//    for(int i=0;i<n;i++)
//    {
//        b.push_back(mp[a[i]]);
//    }
//    for(int i=0;i<b.size();i++)
//    {
//        cout << b[i] << " ";
//    }
//    cout << endl;
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
//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void printmap(const map<int,int> &mp)
//{
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        cout << it->first << " : " << it->second << endl;
//    }
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    vector<int>b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    map<int,int>mp1;
//    int count=1;
//    for(int i=0;i<n-1;i++)
//    {
//        if(a[i]==a[i+1])
//        {
//            count++;
//        }
//        else
//        {
//            if(mp1.find(a[i])!=mp1.end())
//            {
//                auto it=mp1.find(a[i]);
//                mp1[a[i]]=max(it->second,count);
//            }
//            else
//            {
//                mp1[a[i]]=count;
//            }
//            count=1;
//        }
//    }
//    if(mp1.find(a[n-1])!=mp1.end())
//    {
//        auto it=mp1.find(a[n-1]);
//        mp1[a[n-1]]=max(it->second,count);
//    }
//    else
//    {
//        mp1[a[n-1]]=count;
//    }
//    map<int,int>mp2;
//    count=1;
//    for(int i=0;i<n-1;i++)
//    {
//        if(b[i]==b[i+1])
//        {
//            count++;
//        }
//        else
//        {
//            if(mp2.find(b[i])!=mp2.end())
//            {
//                auto it=mp2.find(b[i]);
//                mp2[b[i]]=max(it->second,count);
//            }
//            else
//            {
//                mp2[b[i]]=count;
//            }
//            count=1;
//        }
//    }
//    if(mp2.find(b[n-1])!=mp2.end())
//    {
//        auto it=mp2.find(b[n-1]);
//        mp2[b[n-1]]=max(it->second,count);
//    }
//    else
//    {
//        mp2[b[n-1]]=count;
//    }
////    printmap(mp1);
////    printmap(mp2);
//    int ans=INT_MIN;
//    for(auto it=mp1.begin();it!=mp1.end();it++)
//    {
//        if(mp2.find(it->first)!=mp2.end())
//        {
//            auto it2=mp2.find(it->first);
//            ans=max(ans,it->second+it2->second);
//        }
//        else
//        {
//            ans=max(ans,it->second);
//        }
//    }
//    for(auto it=mp2.begin();it!=mp2.end();it++)
//    {
//        if(mp1.find(it->first)!=mp1.end())
//        {
//            auto it2=mp1.find(it->first);
//            ans=max(ans,it->second+it2->second);
//        }
//        else
//        {
//            ans=max(ans,it->second);
//        }
//    }
//    cout << ans << endl;
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
#include <unordered_set>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<vector<int>>edges;
    vector<bool>visited(n-1,false);
    for(int i=0;i<n-1;i++)
    {
        int num1,num2;
        vector<int>temp;
        cin >> num1 >> num2;
        temp.push_back(num1);
        temp.push_back(num2);
        edges.push_back(temp);
    }
    int count=0;
    unordered_set<int>s;
    s.insert(1);
    vector<vector<int>>graph(n+1);
    while(true)
    {
        //step1
        for(int i=0;i<edges.size();i++)
        {
            if(!visited[i])
            {
                if(s.find(edges[i][0])!=s.end())
                {
                    visited[i]=true;
                    graph[edges[i][0]].push_back(edges[i][1]);
                    s.insert(edges[i][1]);
                }
                else if(s.find(edges[i][1])!=s.end())
                {
                    visited[i]=true;
                    graph[edges[i][1]].push_back(edges[i][0]);
                    s.insert(edges[i][0]);
                }
                else
                {
                    
                }
            }
        }
        count++;
        //step2
        if(s.size()==n)
        {
            break;
        }
    }
    cout << count << endl;
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