//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string s;
//    cin >> s;
//    int a=-1,b=-1;
//    for(int i=0;i<s.length()-1;i++)
//    {
//        if(s[i+1]=='0') continue;
//        string temp1=s.substr(0,i+1);
//        string temp2=s.substr(i+1,s.length()-i-1);
//        if(!temp1.empty() && !temp2.empty())
//        {
//            if(stoi(temp1)<stoi(temp2))
//            {
//                a=stoi(temp1);
//                b=stoi(temp2);
//                break;
//            }
//        }
//    }
//    if(a!=-1 && b!=-1)
//    {
//        cout << a << " " << b << endl;
//    }
//    else
//    {
//        cout << "-1" << endl;
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


//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string s;
//    cin >> s;
//    int ones_count=0;
//    int zeros_count=0;
//    for(char c:s)
//    {
//        if(c=='0')  zeros_count++;
//        else    ones_count++;
//    }
//    string copy_s=s;
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]=='0' && ones_count>0)
//        {
//            ones_count--;
//            copy_s[i]='1';
//        }
//        if(s[i]=='1' && zeros_count>0)
//        {
//            zeros_count--;
//            copy_s[i]='0';
//        }
//    }
//    
//    int ans=0;
//    int ptr=0;
//    for(int i=0;i<s.length() && ptr<copy_s.length();i++)
//    {
//        if(copy_s[ptr]==s[i])
//        {
//            ans++;
//            i--;
//        }
//        ptr++;
//    }
////    cout << "Copy_s: " << copy_s << endl;
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
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
map<pair<vector<int>,vector<int>>,bool> mp;
bool helper(int idx,int target,vector<int> &elements)
{
    if(idx>=elements.size() || target<0)
    {
        return false;
    }
    else if(target==0)
    {
        return true;
    }
    else if(mp.find({{idx,target},elements})!=mp.end())
    {
        return mp[{{idx,target},elements}];
    }
    else
    {
        bool ans=false;
        for(int i=0;i<=elements[idx];i++)
        {
            elements[idx]-=i;
            ans|=helper(idx+1,target-(i*int(pow(2,idx))),elements);
            elements[idx]+=i;
        }
        mp[{{idx,target},elements}]=ans;
        return ans;
    }
}
void solution()
{
    int m;
    cin >> m;
    vector<vector<int>>operations;
    vector<int>elements(30);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a==1)
        {
            elements[b]++;
        }
        else
        {
            if(helper(0,b,elements)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
int main()
{
    solution();
    return 0;
}