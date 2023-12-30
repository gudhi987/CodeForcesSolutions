//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n<7)
//    {
//        cout << "NO" << endl;
//    }
//    else if(n==7 || n==8)
//    {
//        cout << "YES" << endl;
//        cout << "1 2 " << n-3 << endl;
//    }
//    else if(n==9)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        if(n%3==0)
//        {
//            cout << "YES" << endl;
//            cout << "1 4 " << n-5 << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
//            cout << "1 2 " << n-3 << endl;
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
    int Px,Py;
    cin >> Px >> Py;
    int Ax,Ay;
    cin >> Ax >> Ay;
    int Bx,By;
    cin >> Bx >> By;
    if(Px==0 && Py==0)
    {
        cout << "0" << endl;
        return ;
    }
    Bx=Bx+(0-Ax);
    By=By+(0-Ay);
    Px=Px+(0-Ax);
    Py=Py+(0-Ay);
    Ax=0;
    Ay=0;
    double min_w_intersection=static_cast<double>(sqrt(Bx*Bx+By*By)/2);
    double min_w_lying=min(static_cast<double>(sqrt((Px-Bx)*(Px-Bx)+(Py-By)*(Py-By))),static_cast<double>(sqrt(Px*Px+Py*Py)));
//    cout << min_w_intersection << " " << min_w_lying << endl;
    double w=max(min_w_intersection,min_w_lying);
    cout << w << endl;
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