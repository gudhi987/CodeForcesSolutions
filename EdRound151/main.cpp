//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,k,x;
//    cin >> n >> k >> x;
//    if(k==1 && x==1)
//    {
//        cout << "NO" << endl;
//    }
//    else if(x!=1)
//    {
//        cout << "YES" << endl;
//        cout << n << endl;
//        for(int i=1;i<=n;i++)
//        {
//            cout << "1 "; 
//        }
//        cout << endl;
//    }
//    else
//    {
//        //2 3 . .. k
//        if(n%2==0)
//        {
//            cout << "YES" << endl;
//            cout << n/2 << endl;
//            for(int i=1;i<=n/2;i++)
//            {
//                cout << "2 "; 
//            }
//            cout << endl;
//        }
//        else
//        {
//            if(k==2 && n%2==1)
//            {
//                cout << "NO" << endl;
//            }
//            else
//            {
//                cout << "YES" << endl;
//                cout << n/2 << endl;
//                for(int i=1;i<=n/2-1;i++)
//                {
//                    cout << "2 "; 
//                }
//                cout << "3";
//                cout << endl;
//            }
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
void solution()
{
    int x1,y1;
    cin >> x1 >> y1;
    int x2,y2;
    cin >> x2 >> y2;
    int x3,y3;
    cin >> x3 >> y3;
    if(x2>=x1 && x3>=x1)
    {
        if(y2>=y1 && y3>=y1)
        {
            cout << 1+min(x2,x3)-x1+min(y2,y3)-y1 << endl;
        }
        else if(y2<=y1 && y3<=y1)
        {
            cout << 1+min(x2,x3)-x1-max(y2,y3)+y1 << endl;
        }
        else
        {
            cout << 1+min(x2,x3)-x1 << endl;
        }
    }
    else if(x2<=x1 && x3<=x1)
    {
        if(y2>=y1 && y3>=y1)
        {
            cout << 1-max(x2,x3)+x1+min(y2,y3)-y1 << endl;
        }
        else if(y2<=y1 && y3<=y1)
        {
            cout << 1-max(x2,x3)+x1-max(y2,y3)+y1 << endl;
        }
        else
        {
            cout << 1-max(x2,x3)+x1 << endl;
        }
    }
    else if(y2>=y1 && y3>=y1)
    {
        cout << 1+min(y2,y3)-y1 << endl;
    }
    else if(y2<=y1 && y3<=y1)
    {
        cout << 1-max(y2,y3)+y1 << endl;
    }
    else
    {
        cout << "1" << endl;
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
