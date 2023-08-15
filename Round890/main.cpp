//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    vector<int>temp=arr;
//    sort(temp.begin(),temp.end());
//    if(temp==arr)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        int count=0;
//        for(int i=1;i<n;i++)
//        {
//            arr[i]=max(0,arr[i]-count);
//            if(arr[i]<arr[i-1])
//            {
//                count+=arr[i-1];
//                arr[i-1]=0;
//                arr[i]=0;
//            }
//            else
//            {
//                
//            }
//        }
//        cout << count << endl;
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
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[arr[i]]++;
//    }
//    if(n==1)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    if(mp.find(1)==mp.end())
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        auto it=mp.find(1);
//        int count=it->second;
//        long long int sum=0;
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]!=1)
//            {
//                sum+=arr[i];
//            }
//        }
//        long long int remaining=sum-(n-count);
//        if(remaining>=2*count)
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

