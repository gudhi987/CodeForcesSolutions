//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//long long int steps(long long int num)
//{
//    if(num==0)
//    {
//        return 0;
//    }
//    return 2*num-1;
//}
//void solution()
//{
//    int a,b;
//    cin >> a >> b;
//    long long int maximum=max(abs(a),abs(b));
//    long long int minimum=min(abs(a),abs(b));
//    long long int ans1;
//    long long int ans2;
//    if(a>0 && b>0)
//    {
//        ans1=abs(maximum*2) + steps(abs(maximum-a)+abs(maximum-b));
//        ans2=abs(minimum*2) + steps(abs(minimum-a)+abs(minimum-b));
//        cout << min(ans1,ans2) << endl;
//    }
//    else if(a>0 && b<0)
//    {
//        ans1=maximum*2 + steps(abs(maximum-a)+abs(maximum+b));
//        ans2=minimum*2 + steps(abs(minimum-a)+abs(minimum+b));
//        cout << min(ans1,ans2) << endl;
//    }
//    else if(a<0 && b>0)
//    {
//        ans1=maximum*2 + steps(abs(maximum+a)+abs(minimum-b));
//        ans2=minimum*2 + steps(abs(minimum+a)+abs(minimum-b));
//        cout << min(ans1,ans2) << endl;
//    }
//    else if(a<0 && b<0)
//    {
//        ans1=maximum*2 + steps(abs(maximum+a)+abs(minimum+b));
//        ans2=minimum*2 + steps(abs(minimum+a)+abs(minimum+b));
//        cout << min(ans1,ans2) << endl;
//    }
//    else if(a==0)
//    {
//        long long int ans=steps(abs(b));
//        cout << ans << endl;
//    }
//    else
//    {
//        long long int ans;
//        ans=steps(abs(a));
//        cout << ans << endl;
//    }
//    
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
#include <string>
using namespace std;
int main()
{
    const string Month[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    cout << Month[1] << endl;  //Jan
    cout << Month[2] << endl;  //Feb
    cout << Month[3] << endl;  //Mar
    return 0;
}