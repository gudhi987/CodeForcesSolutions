//96-A FOOTBALL

//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    string s;
//    cin >> s;
//    int count1=0;
//    int count2=0;
//    for(int i=0;i<s.length();i++)
//    {
//        if(s[i]=='1')
//        {
//            count2=0;
//            count1++;
//            if(count1>=7)
//            {
//                cout << "YES" << endl;
//                return ;
//            }
//        }
//        else
//        {
//            count1=0;
//            count2++;
//            if(count2>=7)
//            {
//                cout << "YES" << endl;
//                return ;
//            }
//        }
//    }
//    cout << "NO" << endl;
//}
//int main()
//{
////    int t;
////    cin >> t;
////    while(t--)
////    {
////        solution();
////    }
//    solution();
//    return 0;
//}

//160A - TWINS

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
//    vector<int>arr(n);
//    int total_sum=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        total_sum+=arr[i];
//    }
//    int curr_sum=0;
//    int coins_count=0;
//    sort(arr.begin(),arr.end(),greater<int>());
//    for(int i=0;i<n;i++)
//    {
//        curr_sum+=arr[i];
//        coins_count++;
//        if(curr_sum>total_sum-curr_sum)
//        {
//            break;
//        }
//    }
//    cout << coins_count << endl;
//}
//int main()
//{
////    int t;
////    cin >> t;
////    while(t--)
////    {
////        solution();
////    }
//    solution();
//    return 0;
//}

//318A - Even Odds

//#include <iostream>
//#include <unordered_set>
//#include <string>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    ll n,k;
//    cin >> n >> k;
//    ll middle=ceil(static_cast<double>(n)/2);
//    if(k>middle)
//    {
//        cout << 2*(k-middle) << endl;
//    }
//    else
//    {
//        cout << 1+2*(k-1) << endl;
//    }
//}
//int main()
//{
////    int t;
////    cin >> t;
////    while(t--)
////    {
//        solution();
////    }
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