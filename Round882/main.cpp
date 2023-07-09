//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    if(k==n)
//    {
//        cout << "0" << endl;
//        return ;
//    }
//    int total_strenth=0;
//        for(int i=0;i<n-1;i++)
//        {
//            total_strenth+=abs(arr[i]-arr[i+1]);
//        }
//    if(k==1)
//    {
//        cout << total_strenth << endl;
//        return ;
//    }
////    if(k==2)
////    {
////        cout << min(total_strenth-abs(arr[0]-arr[1]),total_strenth-abs(arr[n-2]-arr[n-1])) << endl;
////    }
////    else
////    {
//        priority_queue<int>pq;
//        for(int i=0;i<n-1;i++)
//        {
//            pq.push(abs(arr[i]-arr[i+1]));
//        }
//        for(int i=0;i<k-1;i++)
//        {
//            pq.pop();
//        }
//        int ans=0;
//        while(!pq.empty())
//        {
//            ans+=pq.top();
//            pq.pop();
//        }
//        cout << ans << endl;
////    }
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
//#define SIZE 32
//#define big 998244353
//#define ll long long int
//using namespace std;
//struct TrieNode
//{
//    int value; 
//    TrieNode *arr[2];
//};
// 
//TrieNode *newNode()
//{
//    TrieNode *temp = new TrieNode;
//    temp->value = 0;
//    temp->arr[0] = temp->arr[1] = NULL;
//    return temp;
//}
// 
//// Inserts pre_xor to trie with given root
//void insert(TrieNode *root, int pre_xor)
//{
//    TrieNode *temp = root;
//    for (int i=SIZE-1; i>=0; i--)
//    {
//        bool val = pre_xor & (1<<i);
//        if (temp->arr[val] == NULL)
//            temp->arr[val] = newNode();
// 
//        temp = temp->arr[val];
//    }
//    temp->value = pre_xor;
//}
//int query(TrieNode *root, int pre_xor)
//{
//    TrieNode *temp = root;
//    for (int i=SIZE-1; i>=0; i--)
//    {
//        bool val = pre_xor & (1<<i);
//        if (temp->arr[1-val]!=NULL)
//            temp = temp->arr[1-val];
//        else if (temp->arr[val] != NULL)
//            temp = temp->arr[val];
//    }
//    return pre_xor^(temp->value);
//}
//int maxSubarrayXOR(int arr[], int n)
//{
//    TrieNode *root = newNode();
//    insert(root, 0);
//    int result = INT_MIN, pre_xor =0;
//    for (int i=0; i<n; i++)
//    {
//        pre_xor = pre_xor^arr[i];
//        insert(root, pre_xor);
//        result = max(result, query(root, pre_xor));
//    }
//    return result;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    cout << maxSubarrayXOR(arr,n) << endl;
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
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n==1)
    {
        cout << "1" << endl;
        return ;
    }
    int cur = arr[0];
	int part = 1;
	for(int i = 0; i < n; i++){
		cur &= arr[i];
		if(cur == 0){
			if(i == n-1)break;
			part++;
			cur = arr[i + 1];
		}
	}
	if(cur != 0)part--;
	part = max(part,1);
	cout << part << '\n';
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