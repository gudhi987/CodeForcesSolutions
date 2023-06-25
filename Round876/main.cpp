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
//    vector<vector<int>> parameters;
//    map<int,priority_queue<int>>mp;
//    for(int i=0;i<n;i++)
//    {
//        int a,b;
//        cin >> a >> b;
//        parameters.push_back({a,b});
//        mp[a].push(b);
//    }
//    int turnedon=0;
//    int broken=0;
//    long long int ans=0;
//    while(broken!=n && !mp.empty())
//    {
////        cout << broken << " " << ans << endl;
//        if(mp.find(turnedon+1)!=mp.end())
//        {
//            int largest=mp[turnedon+1].top();
//            ans+=largest;
//            broken+=mp[turnedon+1].size();
//            mp.erase(turnedon+1);
//        }
//        else
//        {
//            auto it=mp.rbegin();
//            int key=it->first;
//            int largest=mp[key].top();
//            ans+=largest;
//            mp[key].pop();
//            turnedon++;
//            if(mp[key].empty())
//            {
//                mp.erase(key);
//            }
//        }
////        cout << ans << endl;
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
    int n,k;
    cin >> n >> k;
    if(k==1)
    {
//        for(int i=1;i<=n;i++)
//        {
//            cout << "1" << " ";
//        }
//        cout << endl;
        cout << n << endl;
        return ;
    }
//    vector<int>a(n,0);
    if(n==3)
    {
        cout << "2" << endl;
        return ;
    }
    int count=0;
    for(int i=1;i<=n/2;i++)
    {
        if((i)%k==1)
        {
            count++;
        }
    }
    count+=count;
        if((n/2)<k)
        {
            count++;
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