//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        string s="codeforces";
//        char c;
//        cin >> c;
//        int flag=0;
//        for(int i=0;i<s.length();i++)
//        {
//            if(s[i]==c)
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int x=0;
//    int y=0;
//    int flag=0;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='U')
//        {
//            y++;
//        }
//        else if(s[i]=='D')
//        {
//            y--;
//        }
//        else if(s[i]=='R')
//        {
//            x++;
//        }
//        else
//        {
//            x--;
//        }
//        if(x==1 && y==1)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
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
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int index=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='1' && s[n-i-1]=='0')
//        {
//            
//        }
//        else if(s[i]=='0' && s[n-i-1]=='1')
//        {
//            
//        }
//        else
//        {
//            index=i;
//            break;
//        }
//    }
//    if(index==-1)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        cout << n-(2*index) << endl;
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
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    map<char,int>mp1;
//    map<char,int>mp2;
//    mp1.insert({s[0],1});
//    for(int i=1;i<n;i++)
//    {
//        mp2[s[i]]++;
//    }
//    int maximum=mp1.size()+mp2.size();
//    for(int i=1;i<n-1;i++)
//    {
//        mp1[s[i]]++;
//        mp2[s[i]]--;
//        if(mp2[s[i]]==0)
//        {
//            mp2.erase(s[i]);
//        }
//        int temp=mp1.size()+mp2.size();
//        maximum=max(maximum,temp);
//    }
//    cout << maximum << endl;
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
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    ll negative_count=0;
//    ll total_sum=0;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]<0)
//        {
//            negative_count++;
//        }
//    }
//    if(negative_count%2==0)
//    {
//        for(int i=0;i<n;i++)
//        {
//            total_sum+=abs(arr[i]);
//        }
//        cout << total_sum << endl;
//    }
//    else
//    {
//        int minimum=INT_MAX;
//        for(int i=0;i<n;i++)
//        {
//            minimum=min(minimum,abs(arr[i]));
//        }
//        for(int i=0;i<n;i++)
//        {
//            total_sum+=abs(arr[i]);
//        }
//        cout << total_sum-(2*minimum) << endl;
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
#define ll long long int
using namespace std;
int sumofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solution()
{
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>>queries;
    for(int i=0;i<q;i++)
    {
        int a;
        cin >> a;
        if(a==1)
        {
            int b,c;
            cin >> b >> c;
            vector<int>temp={a,b,c};
            queries.push_back(temp);
        }
        else
        {
            int d;
            cin >> d;
            vector<int>temp={a,d};
            queries.push_back(temp);
        }
    }
    for(int i=0;i<q;i++)
    {
        if(queries[i].size()==2)
        {
            cout << arr[queries[i][1]-1] << endl;
        }
        else
        {
            for(int j=queries[i][1]-1;j<queries[i][2];j++)
            {
                arr[j]=sumofdigits(arr[j]);
            }
        }
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