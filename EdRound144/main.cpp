//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string ans="FBFFBFFBFBFFBFFBFBFFB";
//    int k;
//    cin >> k;
//    string s;
//    cin >> s;
//    if(ans.find(s)!=string::npos)
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
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string a;
//    cin >> a;
//    string b;
//    cin >> b;
////    map<char,int>mp1;
////    map<char,int>mp2;
////    for(int i=0;i<a.length();i++)
////    {
////        mp1[a[i]]++;
////    }
////    for(int i=0;i<b.length();i++)
////    {
////        mp2[b[i]]++;
////    }
//    if(a==b)
//    {
//        cout << "YES" << endl;
//        cout << a << endl;
//        return ;
//    }
//    if(a[0]==b[0] )
//    {
//        cout << "YES" << endl;
//        cout << a[0] << "*" << endl;
//    }
//    else if(a[a.length()-1]==b[b.length()-1])
//    {
//        cout << "YES" << endl;
//        cout << "*" << a[a.length()-1] <<  endl;
//    }
//    else
//    {
//        int flag=0;
//        string temp;
//        for(int i=0;i<a.length()-1;i++)
//        {
//            string one=a.substr(i,2);
//            if(b.find(one)!=string::npos)
//            {
//                flag=1;
//                temp=one;
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cout << "YES" << endl;
//            cout << "*" << temp << "*" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
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
#include <bits/stdc++.h>
#define big 998244353
#define ll long long int
using namespace std;
long long int power(int n,int r)
{
    long long product=1;
    for(int i=1;i<=r;i++)
    {
        product*=n;
    }
    return product;
}
void solution()
{
    int l,r;
    cin >> l >> r;
    int size=0;
    int temp1=l;
    int temp2=r;
    while(temp1<=temp2)
    {
        size++;
        temp1*=2;
    }
    long long int ans=0;
    int i=2;
    while(true)
    {
        int temp_size=0;
        temp1=l;
        temp2=r;
        while(temp1<=temp2)
        {
            temp_size++;
            temp1*=i;
        }
        long long int imp=r/power(i,size-1) - l +1;
        if(imp>0 && temp_size==size)
        {
            ans=(ans+imp)%big;
        }
        else
        {
            break;
        }
        i++;
    }
    cout << size << " " << ans << endl;
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