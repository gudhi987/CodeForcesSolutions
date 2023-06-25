//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    ll sum1=0,sum2=0;
//    vector<int>a(n);
//    vector<int>b(m);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        sum1+=a[i];
//    }
//    for(int i=0;i<m;i++)
//    {
//        cin >> b[i];
//        sum2+=b[i];
//    }
//    if(sum1>sum2)
//    {
//        cout << "Tsondu" << endl;
//    }
//    else if(sum1<sum2)
//    {
//        cout << "Tenzing" << endl;
//    }
//    else
//    {
//        cout << "Draw" << endl;
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
//bool canFind(int curr,stack<int>&st1,stack<int>&st2,stack<int>&st3,int x,int n)
//{
//    if(x==curr)
//    {
//        return true;
//    }
//    else if(curr>x)
//    {
//        return false;
//    }
//    else if(st1.empty() && st2.empty() && st3.empty())
//    {
//        return false;
//    }
//    else if(st1.size()==n && st2.size()==n && st3.size()==n)
//    {
//        return false;
//    }
//    else
//    {
//        int top1=0;
//        int top2=0;
//        int top3=0;
//        bool ans1=false;
//        bool ans2=false;
//        bool ans3=false;
//        if(!st1.empty())
//        {
//            top1=st1.top();
//            st1.pop();
//            ans1=canFind(curr|top1,st1,st2,st3,x);
//            if(ans1)
//            {
//                return true;
//            }
//            st1.push(top1);
//        }
//        if(!st2.empty())
//        {
//            top2=st2.top();
//            ans2=canFind(curr|top2,st1,st2,st3,x);
//            if(ans2)
//            {
//                return true;
//            }
//            st2.pop();
//            st2.push(top2);
//        }
//        if(!st3.empty())
//        {
//            top3=st3.top();
//            st3.pop();
//            ans3=canFind(curr|top3,st1,st2,st3,x);
//            if(ans3)
//            {
//                return true;
//            }
//            st3.push(top3);
//        }
//        return ans1 | ans2 | ans3;
//    }
//}
//void solution()
//{
//    int n,x;
//    cin >> n >> x;
//    vector<int>a(n);
//    vector<int>b(n);
//    vector<int>c(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> c[i];
//    }
//    stack<int>st1;
//    stack<int>st2;
//    stack<int>st3;
//    for(int i=n-1;i>=0;i--)
//    {
//        st1.push(a[i]);
//        st2.push(b[i]);
//        st3.push(c[i]);
//    }
//    if(!canFind(0,st1,st2,st3,x))
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
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
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int>a(n);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int>ans;
    bool isRepeated=false;
    int prev_repeated=-1;
    for(int i=0;i<n;i++)
    {
        if(st.empty())
        {
            st.push(a[i]);
        }
        else if(st.top()==a[i])
        {
            prev_repeated=st.top();
            isRepeated=true;
            st.pop();
        }
        else if(prev_repeated==a[i])
        {
            
        }
        else
        {
            if(isRepeated)
            {
                isRepeated=false;
                prev_repeated=-1;
                st.push(a[i]);
            }
            else
            {
                st.push(a[i]);
            }
        }
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
//    for(int i=0;i<ans.size();i++)
//    {
//        cout << ans[i] << " ";
//    }
//    cout << endl;
    int curr_ans=n-ans.size();
    unordered_map<int,int>mp;
    for(int i=ans.size()-1;i>=0;i--)
    {
        if(mp.find(ans[i])==mp.end())
        {
            mp[ans[i]]=i;
        }
    }
    int maxDeletableSize=0;
    for(int i=0;i<ans.size();i++)
    {
        if(mp[ans[i]]-i+1!=1)
        {
            maxDeletableSize=max(maxDeletableSize,mp[ans[i]]-i+1);
        }
    }
    cout << curr_ans+maxDeletableSize << endl;
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
