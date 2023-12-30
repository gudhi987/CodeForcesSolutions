//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    set<string>st;
//    for(int i=0;i<s.length()-1;i++)
//    {
//        string temp=s.substr(i,2);
//        st.insert(temp);
//    }
//    cout << st.size() << endl;
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
//#define big 998244353
//#define ll long long int
//using namespace std;
//bool canMakeOdd(int n,int b[],int minOdd)
//{
//    for(int i=0;i<n;i++)
//    {
//        if(b[i]%2==1 || (b[i]>minOdd)){}
//        else return false;
//    }
//    return true;
//}
//bool canMakeEven(int n,int b[],int minOdd)
//{
//    for(int i=0;i<n;i++)
//    {
//        if(b[i]%2==0 || (b[i]>minOdd)){}
//        else return false;
//    }
//    return true;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    int b[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int countEven=0;
//    int minEven=INT_MAX;
//    int minOdd=INT_MAX;
//    for(int i=0;i<n;i++)
//    {
//        if(b[i]%2==0)
//        {
//            countEven++;
//            minEven=min(minEven,b[i]);
//        }
//        else
//        {
//            minOdd=min(minOdd,b[i]);
//        }
//    }
//    if(countEven==n || countEven==n)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
////        cout << minOdd << " " << minEven << endl;
//        if(canMakeEven(n,b,minOdd) || canMakeOdd(n,b,minOdd))
//        {
//            cout << "YES" << endl;
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
void solution()
{
    
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