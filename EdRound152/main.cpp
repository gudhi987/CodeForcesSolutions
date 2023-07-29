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