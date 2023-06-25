//#include <iostream>
//#include <string>
//using namespace std;
//void solution()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    if(a+b==c)
//    {
//        cout << "+" << endl;
//    }
//    else
//    {
//        cout << "-" << endl;
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
//#include <iostream>
//#include <bits/stdc++.h>
//#include <string>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    long long int even_sum=0;
//    long long int odd_sum=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]%2==0)
//        {
//            even_sum+=a[i];
//        }
//        else
//        {
//            odd_sum+=a[i];
//        }
//    }
//    if(even_sum>odd_sum)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
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
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//bool isbin(vector<int> arr)
//{
//    for(int i=1;i<arr.size();i++)
//    {
//        if(arr[i]==arr[i-1] && arr[i]!=-1)
//        {
//            return false;
//        }
//        if(arr[i-1]!=-1 && arr[i]==-1)
//        {
//            if(arr[i-1]==0)
//            {
//                arr[i]=1;
//            }
//            else
//            {
//                arr[i]=0;
//            }
//        }
//    }
//    return true;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    map<char,vector<int>>mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[s[i]].push_back(i);
//    }
//    vector<int>arr(n);
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        if(mp.find(s[i])!=mp.end())
//        {
//            auto it=mp.find(s[i]);
//            vector<int>temp=it->second;
//            if(temp.size()>1)
//            {
//                if(count%2==0)
//                {
//                    for(int j=0;j<temp.size();j++)
//                    {
//                        arr[temp[j]]=1;
//                    }
//                }
//                else
//                {
//                    for(int j=0;j<temp.size();j++)
//                    {
//                        arr[temp[j]]=0;
//                    }
//                }
//                mp.erase(s[i]);
//                count++;
//            }
//            else
//            {
//                arr[temp[0]]=-1;
//                mp.erase(s[i]);
//            }
//        }
//    }
////    for(int i=0;i<n;i++)
////    {
////        cout << arr[i] << " ";
////    }
////    cout << endl;
//    if(isbin(arr))
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
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
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,q;
//    cin >> n >> q;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    vector<long long int>prefix_arr;
//    long long int prefix_sum=0;
//    for(int i=0;i<n;i++)
//    {
//        prefix_sum+=arr[i];
//        prefix_arr.push_back(prefix_sum);
//    }
//    for(int i=0;i<q;i++)
//    {
//        long long int l,r,k;
//        cin >> l >> r >> k;
//        long long int rem;
//        if(l==r)
//        {
//            rem=arr[l-1];
//        }
//        else
//        {
//            if(l!=1)
//            {
//                rem=prefix_arr[r-1]-prefix_arr[l-2];
//            }
//            else
//            {
//                rem=prefix_arr[r-1];
//            }
//        }
//        long long int req=prefix_sum-rem+((l-r+1)*k);
//        if(req%2!=0)
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
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
//    map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        if(mp.find(a[i])!=mp.end())
//        {
//            mp[a[i]]++;
//        }
//        else
//        {
//            mp[a[i]]=1;
//        }
//    }
//    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
//    {
//        cout << it->first << " : " << it->second << endl;
//    }
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}