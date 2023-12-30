//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string s;
//    cin >> s;
//    int curr=1;
//    int ans=0;
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]=='0')
//        {
//            ans+=(11-curr);
//            curr=10;
//        }
//        else
//        {
//            ans+=(abs((s[i]-'0')-curr)+1);
//            curr=s[i]-'0';
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


//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    map<char,int>mp;
//    for(int i=0;i<s.length();i++)
//    {
//        mp[s[i]]++;
//    }
//    int odd_freq_ele=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        if(it->second%2==1)
//        {
//            odd_freq_ele++;
//        }
//    }
//    if(odd_freq_ele>k)
//    {
//        if(odd_freq_ele-k==1)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
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



//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    int arr[n];
//    int rem=-1;
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        int curr_rem=arr[i]%k;
//        if(curr_rem==0)
//        {
//            rem=0;
//            break;
//        }
//        else
//        {
//            rem=max(rem,curr_rem);
//        }
//    }
////    cout << "Rem: " << rem << endl;
//    int ans;
//    if(rem==0)
//    {
//        ans=0;
//    }
//    else
//    {
//        ans=k-rem;
//    }
//    if(k==4)
//    {
//        int even_count=0;
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]%2==0)
//            {
//                even_count++;
//            }
//        }
//        ans=min(ans,max(2-even_count,0));
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


#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
void solution()
{
    int n;
    cin >> n;
    long long int ans=0;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n==1)
    {
        cout << "0" << endl;
        return ;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {
                long long int count=ceil(log2(static_cast<double>(arr[i-1])/arr[i]));
//                cout << "Count: " << count << endl;
                ans+=count;
                arr[i]=arr[i]*(pow(2,count));
            }
        }
    }
    cout << ans << endl;
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