//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    int flag1=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int minimum=a[0];
//    int maximum=a[0];
//    for(int i=0;i<n;i++)
//    {
//        maximum=max(maximum,a[i]);
//        minimum=min(minimum,a[i]);
//    }
//    for(int i=1;i<n;i++)
//    {
//        if(a[i]!=a[i-1])
//        {
//            flag1=1;
//            break;
//        }
//    }
//    if(flag1==0)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        vector<vector<int>> positions;
//        int flag2=0;
//        while(!(minimum==1 && minimum!=maximum))
//        {
//            flag2=0;
//            for(int i=1;i<n;i++)
//            {
//                if(a[i]!=a[i-1])
//                {
//                    flag2=1;
//                    break;
//                }
//            }
//            if(flag2==0)
//            {
//                break;
//            }
//            maximum=a[0];
//            minimum=a[0];
//            for(int i=0;i<n;i++)
//            {
//                maximum=max(maximum,a[i]);
//                minimum=min(minimum,a[i]);
//            }
//            int maximum_pos=0;
//            int minimum_pos=0;
//            for(int i=0;i<n;i++)
//            {
//                if(a[i]==maximum)
//                {
//                    maximum_pos=i;
//                    break;
//                }
//            }
//            for(int i=0;i<n;i++)
//            {
//                if(a[i]==minimum)
//                {
//                    minimum_pos=i;
//                    break;
//                }
//            }
//            positions.push_back({maximum_pos+1,minimum_pos+1});
//            a[maximum_pos]=ceil(static_cast<double>(a[maximum_pos])/(a[minimum_pos]));
//        }
//        if(minimum==1 && maximum!=minimum)
//        {
//            cout << "-1" << endl;
//        }
//        else if(flag2==0)
//        {
//            cout << positions.size() << endl;
//            for(int i=0;i<positions.size();i++)
//            {
//                cout << positions[i][0] << " " << positions[i][1] << endl;
//            }
//        }
//        else
//        {
//            
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
#define ll long long int
using namespace std;
void solution()
{
    int n,m;
    cin >> n >> m;
    vector<int>p(m);
    for(int i=0;i<m;i++)
    {
        cin >> p[i];
    }
    set<int>s;
    vector<int> a(n);
    int temp=n-1;
    int count=1;
    for(int i=0;i<m;i++)
    {
        if(s.find(p[i])==s.end())
        {
            if(temp>=0)
            {
                a[temp]=count;
                temp--;
                s.insert(p[i]);
                count++;
            }
            else
            {
                break;
            }
        }
        else
        {
            count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout << "-1 ";
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
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