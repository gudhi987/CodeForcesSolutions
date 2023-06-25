//#include <iostream>
//#include <unordered_set>
//#include <string>
//using namespace std;
//bool isPalindrome(string s)
//{
//    for(int i=0;i<s.length()/2;i++)
//    {
//        if(s[i]!=s[s.length()-i-1])
//        {
//            return false;
//        }
//    }
//    return true;
//}
//void solution()
//{
//    string s;
//    cin >> s;
//    unordered_set<char>st;
//    for(int i=0;i<s.length();i++)
//    {
//        st.insert(s[i]);
//    }
//    if(st.size()==1)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        if(isPalindrome(s))
//        {
//            cout << s.length()-1 << endl;
//        }
//        else
//        {
//            cout << s.length() << endl;
//        }
//    }
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
using namespace std;
void solution()
{
    long long int n,m;
    cin >> n >> m;
    vector<long long int>v(n*m);
    for(int i=0;i<n*m;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(n>=m)
    {
        long long int ans1=0;
        //Placing minimum value at (1,1)
        ans1+=(m*n-m)*(v[v.size()-1]-v[0]);
        for(int i=0;i<m-1;i++)
        {
            ans1+=(v[v.size()-i-2]-v[0]);
        }
        long long int ans2=0;
        //Placin maximum value at (1,1)
        ans2=(m*n-m)*(v[v.size()-1]-v[0]);
        for(int i=0;i<m-1;i++)
        {
            ans2+=(v[v.size()-1]-v[i+1]);
        }
        cout << max(ans1,ans2) << endl;
    }
    else
    {
        long long int ans1=0;
        //Placing minimum value at (1,1)
        ans1+=(m*n-n)*(v[v.size()-1]-v[0]);
        for(int i=0;i<n-1;i++)
        {
            ans1+=(v[v.size()-i-2]-v[0]);
        }
        long long int ans2=0;
        //Placin maximum value at (1,1)
        ans2=(m*n-n)*(v[v.size()-1]-v[0]);
        for(int i=0;i<n-1;i++)
        {
            ans2+=(v[v.size()-1]-v[i+1]);
        }
        cout << max(ans1,ans2) << endl;
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