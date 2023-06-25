//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector <int> a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    cout << "1" << " " << n << endl;
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
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector <int> a (n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int overallgcd=a[0];
    int maximum=INT_MIN;
    for(auto i=0;i<n;i++)
    {
        maximum=max(maximum,a[i]);
        overallgcd=__gcd(overallgcd,a[i]);
    }
    if(overallgcd==1)
    {
        cout << maximum << endl;
    }
    else
    {
        cout << maximum/(overallgcd) << endl;
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