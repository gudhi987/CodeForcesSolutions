//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int a[n];
//        for(int i=0;i<n;i++)
//        {
//            cin >> a[i];
//        }
//        ll product=1;
//        for(int i=0;i<n;i++)
//        {
//            product*=a[i];
//        }
//        cout << (product+n-1)*2022 << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//bool isPrime(int num)
//{
//    for(int i=2;i<=sqrt(num);i++)
//    {
//        if(num%i==0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//bool evenfac(int num)
//{
//    if(num==0)
//    {
//        return false;
//    }
//    double temp=sqrt(num);
//    int temp2=temp/1;
//    if(temp2==temp)
//    {
//        if(isPrime(temp2))
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    else
//    {
//        return true;
//    }
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector <int> a(n);
//        for(int i=0;i<n;i++)
//        {
//            cin >> a[i];
//        }
//        int count=0;
//        for(int i=0;i<n;i++)
//        {
//            int temp=a[i];
//            if(evenfac(temp))
//            {
//                count+=(n-i);
//            }
////            for(int j=i+1;j<n;j++)
////            {
////                temp^=a[j];
////                if(evenfac(temp))
////                {
////                    count++;
////                }
////            }
//        }
//        cout << count << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<ll,ll> mp;
    while(t--)
    {
        int temp;
        cin >> temp;
        if(temp==1)
        {
            cout << "1" << endl;
        }
        else
        {
            int m=1,n=1;
            ll ans=0;
            ll step=0;
//            cout << m << " " << n << endl;
            while(m!=temp || n!=temp)
            {
                ans+=(m*n);
                if(step%2==0)
                {
                    m+=1;
                }
                else
                {
                    n+=1;
                }
//                cout << m << " " << n << endl;
                step++;
            }
            ans+=(temp*temp);
//            cout << ans << endl;
//            cout << m << " " << n << endl;
            cout << (ans*2022)%(1000000007) << endl;
        }
    }
    return 0;
}