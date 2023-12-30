//#include <bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//    int arr[3];
//    cin >> arr[0] >> arr[1] >> arr[2];
//    sort(arr,arr+3);
//    if(arr[0]==arr[1])
//    {
//        cout << arr[2] << endl;
//    }
//    else if(arr[1]==arr[2])
//    {
//        cout << arr[0] << endl;
//    }
//    else
//    {
//        cout << "-1" << endl;
//    }
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
//    vector<string>arr(3);
//    int row=-1;
//    int col=-1;
//    for(int i=0;i<3;i++)
//    {
//        cin >> arr[i];
//    }
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
////            cin >> arr[i][j];
//            if(arr[i][j]=='?')
//            {
//                row=i;
//                col=j;
//                break;
//            }
//        }
//    }
//    
//    bool visited[3];
//    visited[0]=false;
//    visited[1]=false;
//    visited[2]=false;
//    for(int i=0;i<3;i++)
//    {
//        if(col!=i)
//        {
//            visited[arr[row][i]-'A']=true;
//        }
//    }
//    if(!visited[0])
//    {
//        cout << "A" << endl;
//    }
//    else if(!visited[1])
//    {
//        cout << "B" << endl;
//    }
//    else
//    {
//        cout << "C" << endl;
//    }
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
//    int n;
//    cin >> n;
//    
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    
//    long long int total_sum=0;
//    
//    for(int i=0;i<n;i++)
//    {
//        total_sum+=a[i];
//    }
//    
//    if(ceil(sqrt(total_sum))==floor(sqrt(total_sum)))
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
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
//bool isVowel(char &c)
//{
//    if(c=='a' || c=='e')
//    {
//        return true;
//    }
//    return false;
//}
//void solve()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    
//    bool isVowelFound=false;
//    
//    for(int i=0;i<n;i++)
//    {
//        if(!isVowelFound)
//        {
//            if(isVowel(s[i]))
//            {
//                isVowelFound=true;
//                if(i==n-1)
//                {
//                    string ans="";
//                    ans.push_back(s[i-1]);
//                    ans.push_back(s[i]);
//                    cout << ans << endl;
//                }
//            }
//        }
//        else
//        {
//            if(i+1<n)
//            {
//                if(!isVowel(s[i+1]))
//                {
//                    string ans="";
//                    ans.push_back(s[i-2]);
//                    ans.push_back(s[i-1]);
//                    ans.push_back(s[i]);
//                    ans.push_back('.');
//                    cout << ans;
//                    isVowelFound=false;
//                    
//                }
//                else
//                {
//                    string ans="";
//                    ans.push_back(s[i-2]);
//                    ans.push_back(s[i-1]);
//                    ans.push_back('.');
//                    cout << ans;
//                    isVowelFound=false;
//                }
//            }
//            else
//            {
//                string ans="";
//                ans.push_back(s[i-2]);
//                ans.push_back(s[i-1]);
//                ans.push_back(s[i]);
//                cout << ans << endl;
//            }
//        }
//    }
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
//    int n;
//    cin >> n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        
//        if(i%2==0)
//        {
//            arr[i]=-arr[i];
//        }
//    }
//    
//    // Now find a subarray with sum equal to zero
//    long long int prefix_sum=0;
//    set<long long int> st={0};
//    for(int i=0;i<n;i++)
//    {
//        prefix_sum+=arr[i];
//        if(st.find(prefix_sum)!=st.end())
//        {
//            cout << "YES" << endl;
//            return ;
//        }
//        st.insert(prefix_sum);
//    }
//    cout << "NO" << endl;
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
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ordered_set tree<long long int, null_type,less<long long int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds; 
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>>points(n,vector<int>(2));
    ordered_set end_points;
    for(int i=0;i<n;i++)
    {
        cin >> points[i][0] >> points[i][1];
    }
    
    sort(points.begin(),points.end());
    
    for(int i=0;i<n;i++)
    {
        end_points.insert(points[i][1]);
    }
    
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        int end_point=points[i][1];
        
        ans+=end_points.order_of_key(end_point);
        
        end_points.erase(end_point);
    }
    
    cout << ans << endl;
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