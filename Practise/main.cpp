//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int a,b,c;
//        cin >> a >> b >> c;
//        int arr[] = {a,b,c};
//        sort(arr,arr+3);
//        if(arr[0]+arr[1]==arr[2])
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int a[n];
//        set <int> s;
//        for(int i=0;i<n;i++)
//        {
//            cin >> a[i];
//            s.insert(a[i]);
//        }
////        sort(a,a+n);
////        int flag=0;
////        for(int i=0;i<n-1;i++)
////        {
////            if(a[i]==a[i+1])
////            {
////                flag=1;
////                break;
////            }
////        }
////        if(flag==0)
////        {
////            cout << "YES" << endl;
////        }
////        else
////        {
////            cout << "NO" << endl;
////        }
//        if(s.size()==n)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string temp2;
        getline(cin,temp2);
        char temp[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin >> temp[i][j];
            }
        }
        /*row check*/
        int flag=0;
        for(int i=0;i<8;i++)
        {
            vector <char> s;
            for(int j=0;j<8;j++)
            {
                if(temp[i][j]!='.')
                {
                    s.push_back(temp[i][j]);
                }
            }
//            cout << s.size() << endl;
            if(s.size()==8)
            {
                cout << temp[i][0] << endl;
                flag=1;
                break;
            }
        }
        /*column check*/
        if(flag==0)
        {
            for(int i=0;i<8;i++)
            {
                vector <char> s;
                for(int j=0;j<8;j++)
                {
                    if(temp[j][i]!='.')
                    {
                        s.push_back(temp[j][i]);
                    }
                }
//                cout << s.size() << endl;
                if(s.size()==8)
                {
                    cout << temp[0][i] << endl;
                    flag=1;
                    break;
                }
            }
        }
        return 0;
    }
}