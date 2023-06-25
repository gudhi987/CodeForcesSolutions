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
//    int ans=0;
//    sort(arr.begin(),arr.end());
//    for(int i=0;i<n/2;i++)
//    {
//        ans+=(max(arr[i],arr[n-i-1])-min(arr[i],arr[n-i-1]));
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
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
void solution()
{
    ll n;
    cin >> n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
//    int count=0;
    bool isNegativePresent=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            isNegativePresent=true;
            break;
        }
    }
    if(!isNegativePresent)
    {
//        cout << accumulate(arr.begin(),arr.end(),0) << " 0" << endl;
        ll total_sum=0;
        for(int i=0;i<n;i++)
        {
            total_sum+=arr[i];
        }
        cout << total_sum << " " << "0" << endl;
        return ;
    }
    ll count=0;
    bool isPrevNeg=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0 && isPrevNeg)
        {
            count++;
            isPrevNeg=false;
        }
        else if(arr[i]>0)
        {
            isPrevNeg=true;
        }
        else
        {
            
        }
    }
    ll total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=abs(arr[i]);
    }
    cout << total_sum << " " << count << endl;
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
//    ll n;
//    cin >> n;
//    ll ans=0;
//    while(n>0)
//    {
//        ans+=n;
//        n/=2;
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
