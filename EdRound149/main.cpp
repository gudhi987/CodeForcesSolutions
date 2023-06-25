//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x,k;
//    cin >> x >> k;
//    int temp;
//    for(int i=x;i>=1;i--)
//    {
//        if(i%k!=0)
//        {
//            temp=i;
//            break;
//        }
//    }
//    if(temp==x)
//    {
//        cout << "1" << endl;
//        cout << x << endl;
//    }
//    else
//    {
//        cout << "2" << endl;
//        cout << temp << " " << x-temp << endl;
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
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int count1=1;
//    int count2=1;
//    int max_count1=1;
//    int max_count2=1;
//    for(int i=0;i<n-1;i++)
//    {
//        if(s[i]==s[i+1])
//        {
//            if(s[i]=='<')
//            {
//                count1++;
//                max_count1=max(max_count1,count1);
//            }
//            else
//            {
//                count2++;
//                max_count2=max(max_count2,count2);
//            }
//        }
//        else
//        {
//            if(s[i]=='<')
//            {
//                count1=1;
//            }
//            else
//            {
//                count2=1;
//            }
//        }
//    }
//    cout << max(max_count1,max_count2)+1 << endl;
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
//using namespace std;
//void solution()
//{
//    string s;
//    cin >> s;
//    int blank_count=0;
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]=='?')
//        {
//            blank_count++;
//        }
//    }
//    if(blank_count==0)
//    {
//        cout << s << endl;
//        return ;
//    }
//    if(blank_count==s.length())
//    {
//        string ans;
//        for(int i=0;i<s.length();i++)
//        {
//            ans.push_back('0');
//        }
//        cout << ans << endl;
//        return ;
//    }
//    string ans=s;
//    bool isonebefore=false;
//    bool iszerobefore=false;
//    int idx;
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]=='0' || s[i]=='1')
//        {
//            if(s[i]=='0')
//            {
//                iszerobefore=true;
//            }
//            else
//            {
//                isonebefore=true;
//            }
//            idx=i;
//            break;
//        }
//    }
//    if(isonebefore)
//    {
//        for(int i=0;i<idx;i++)
//        {
//            ans[i]='1';
//        }
//    }
//    else if(iszerobefore)
//    {
//        for(int i=0;i<idx;i++)
//        {
//            ans[i]='0';
//        }
//    }
//    else{}
//    for(int i=idx+1;i<s.length();i++)
//    {
//        if(s[i]=='1')
//        {
//            isonebefore=true;
//            iszerobefore=false;
//        }
//        else if(s[i]=='0')
//        {
//            isonebefore=false;
//            iszerobefore=true;
//        }
//        else
//        {
//            if(isonebefore)
//            {
//                ans[i]='1';
//            }
//            else if(iszerobefore)
//            {
//                ans[i]='0';
//            }
//            else{}
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
    ll n,k;
    cin >> n >> k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<ll>a_cpy=a;
    sort(a_cpy.begin(),a_cpy.end(),greater<int>());
    unordered_map<ll,int>mp;
    for(int i=0;i<(n-k);i++)
    {
        mp[a_cpy[i]]++;
    }
//    cout << "Map size: "<< mp.size() << endl;
    vector<ll>ans;
    int start=0;
    for(int i=0;i<n;i++)
    {
        if(start>=k)
        {
            break;
        }
        if(mp.find(a[i])!=mp.end())
        {
            mp[a[i]]--;
            auto it=mp.find(a[i]);
            if(it->second==0)
            {
                mp.erase(a[i]);
            }
        }
        else
        {
            start++;
            ans.push_back(a[i]);
        }
    }
//    cout << "Ans array: " << endl;
//    for(int i=0;i<ans.size();i++)
//    {
//        cout << ans[i] << " ";
//    }
//    cout << endl;
    ll minimum_possible=INT_MAX;
    ll total_sum=0;
    for(int i=0;i<ans.size();i++)
    {
        total_sum+=ans[i];
    }
    ll prefix_sum=0;
    ll suffix_sum=total_sum;
    ll max_possible2=max(prefix_sum,suffix_sum);
    minimum_possible=min(minimum_possible,max_possible2);
    for(int i=0;i<ans.size();i++)
    {
        prefix_sum+=ans[i];
        suffix_sum=total_sum-prefix_sum;
        ll max_possible=max(prefix_sum,suffix_sum);
        minimum_possible=min(minimum_possible,max_possible);
    }
    prefix_sum=total_sum;
    suffix_sum=0;
    ll max_possible3=max(prefix_sum,suffix_sum);
    minimum_possible=min(minimum_possible,max_possible3);
    cout << minimum_possible << endl;
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