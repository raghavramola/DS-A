#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void Raghav()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
vector<int> shuffle(vector<int>& arr) {
	vector<int> res;
	for (int i = 0, j = arr.size() / 2; i < arr.size() / 2; i++, j++) {
		res.push_back(arr[i]);
		res.push_back(arr[j]);
	}
	return res;
}
int32_t main()
{
	Raghav();
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	v = shuffle(v);
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
