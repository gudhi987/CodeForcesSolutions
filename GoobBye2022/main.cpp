//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    vector<int> a(n);
//    vector<int> b(m);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<m;i++)
//    {
//        cin >> b[i];
//    }
//    sort(a.begin(),a.end());
////    sort(b.begin(),b.end(),greater<int>());
//    for(int i=0;i<m;i++)
//    {
//        if(a[0]<b[i])
//        {
//            a[0]=b[i];
//            sort(a.begin(),a.end());
//        }
//        else
//        {
//            a[0]=b[i];
//        }
//    }
//    long long int sum=0;
//    for(int i=0;i<n;i++)
//    {
//        sum+=a[i];
//    }
//    cout << sum << endl;
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
//    int n,k;
//    cin >> n >> k;
//    vector <int> p (n);
//    int temp=n;
//    for(int i=0;i<n;i++)
//    {
//        if(i%2==0)
//        {
//            p[i]=temp;
//            temp--;
//        }
//        else
//        {
//            p[i]=n-p[i-1]+1;
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        cout << p[i] << " ";
//    }
//    cout << endl;
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
void solution()
{
    int n;
    cin >> n;
    vector <int> a (n);
    set <int> s;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if(s.size()==n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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