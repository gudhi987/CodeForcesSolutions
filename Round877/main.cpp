//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
////    int negative=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]<0)
//        {
//            cout << a[i] << endl;
//            return ;
//        }
//    }
//    int maximum=0;
//    for(int i=0;i<n;i++)
//    {
//        maximum=max(maximum,a[i]);
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
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int distanceoftwofromone;
//    int onepos;
//    int twopos;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==1)
//        {
//            onepos=i;
//        }
//        else if(a[i]==2)
//        {
//            twopos=i;
//        }
//        else{}
//    }
//    distanceoftwofromone=abs(twopos-onepos);
//    int maximumpossiblesaperation=max(max(twopos,n-twopos-1),max(onepos,(n-onepos-1)));
//    if(maximumpossiblesaperation==distanceoftwofromone)
//    {
//        cout << "1 1" << endl;
//    }
//    else
//    {
//        if(maximumpossiblesaperation==onepos)
//        {
//            cout << twopos+1 << " " << "1" << endl;
//        }
//        else if(maximumpossiblesaperation==(n-onepos-1))
//        {
//            cout << twopos+1 << " " << n << endl;
//        }
//        else if(maximumpossiblesaperation==twopos)
//        {
//            cout << onepos+1 << " " << "1" << endl;
//        }
//        else
//        {
//            cout << onepos+1 << " " << n << endl;
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
#include <unordered_set>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solution()
{
   int n,m;
   cin >> n >> m;
   int count=1;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout << count << " ";
           count++;
       }
       cout << endl;
   }
//   cout << endl;
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