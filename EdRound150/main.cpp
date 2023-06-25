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
//    if(n==2 || n==3 || n==4)
//    {
//        cout << "Bob" << endl;
//    }
//    else
//    {
//        cout << "Alice" << endl;
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
    int N;
    cin >> N;
    string ans;
    vector<int>a;
    bool ok = true;
 
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
 
        if (a.size() == 0 || (ok && a.back() <= x))
        {
            ans += '1';
            a.push_back(x);
        }
 
        else if (ok && a[0] >= x)
        {
            ans += '1';
            a.push_back(x);
            ok = false; 
        }
        else if (!ok && a.back() <= x && a[0] >= x)
        {
            ans += '1';
            a.push_back(x);
        }
        else
        {
            ans += '0';
        }
    }
    cout << ans << "\n";
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