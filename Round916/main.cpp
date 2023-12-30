//#include <bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    vector<int>alphabets(26);
//    for(int i=0;i<n;i++)
//    {
//        alphabets[s[i]-'A']++;
//    }
//    int count=0;
//    for(int i=0;i<26;i++)
//    {
//        if(alphabets[i]>=i+1)   count++;
//    }
//    cout << count << endl;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//    int n,k;
//    cin >> n >> k;
//    for(int i=1;i<=k;i++)
//    {
//        cout << i << " ";
//    }
//    for(int i=n;i>k;i--)
//    {
//        cout << i << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}
//

//#include <bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//    int n,k;
//    cin >> n >> k;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    vector<int>b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int ans=0;
//    int maxi=0;
//    int prefix_sum=0;
//    for(int i=0;i<n;i++)
//    {
//        prefix_sum+=a[i];
//        maxi=max(maxi,b[i]);
//        k--;
//        ans=max(ans,prefix_sum+(maxi*k));
//        if(k==0)
//        {
//            break;
//        }
//    }
//    cout << ans << endl;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}