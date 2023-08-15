//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    int sum=0;
//    for(int i=0;i<n;i++)
//    {
//        sum+=arr[i];
//    }
//    if(sum%2==0)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
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
//



//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//string addstring(string s1)
//{
//    int carry=1;
////    int flag=0;
//    for(int i=s1.length()-1;i>=0;i--)
//    {
////        cout << carry << endl;
////        cout << (s1[i]-'0')+carry << endl;
//        if((s1[i]-'0')+carry>=5)
//        {
//            s1[i]='0';
//            carry=1;
//        }
//        else
//        {
//            s1[i]=char(carry+s1[i]);
////            cout << s1[i] << endl;
//            carry=0;
//        }
//    }
//    if(carry==1)
//    {
//        s1='1'+s1;
//    }
//    return s1;
//}
//void solution()
//{
//    string s;
//    cin >> s;
//    int n=s.length();
//    int index=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]-'0'>=5)
//        {
//            index=i;
//            break;
//        }
//    }
//    if(index==-1)
//    {
//        cout << s << endl;
//    }
//    else
//    {
//        string req=s.substr(0,index);
////        cout << req << endl;
//        string ans=addstring(req);
////        cout << ans << endl;
//        for(int i=index;i<n;i++)
//        {
//            ans.push_back('0');
//        }
//        cout << ans << endl;
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
//


#include <iostream>
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int m=((n)*(n-1))/2;
    vector<int>req(n,0);
    vector<bool>visited(n,false);
    vector<int>arr(m);
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    map<int,int>mp;
    for(auto num:arr)
    {
        mp[num]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int key=it->first;
        int count=it->second;
        if(n>count)
        {
            req[n-count-1]=key;
            visited[n-count-1]=true;
        }
        else
        {
            int idx;
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                {
                    idx=i;
                    break;
                }
            }
            while(count>0)
            {
                req[idx]=key;
                count-=(n-idx-1);
                visited[idx]=true;
                idx++;
            }
        }
    }
    req[n-1]=req[n-2];
    for(int i=0;i<n;i++)
    {
        cout << req[i] << " ";
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




//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    int q;
//    cin >> q;
//    vector<vector<int>>queries(q,vector<int>(2));
//    for(int i=0;i<q;i++)
//    {
//        cin >> queries[i][0] >> queries[i][1];
//    }
//    sort(arr.begin(),arr.end());
//    map<int,int>mp;
//    for(auto num:arr)
//    {
//        mp[num]++;
//    }
//    for(int i=0;i<q;i++)
//    {
//        int ans=0;
//        int x=queries[i][0];
//        int y=queries[i][1];
//        
//        cout << ans << endl;
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
//
