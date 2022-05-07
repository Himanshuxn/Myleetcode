// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
 long long minm = INT_MAX;
 long long maxm = INT_MIN;
 for(int i=0;i<n;i++)
 {
     minm=min(minm,a[i]);
     maxm=max(maxm,a[i]);
 }
 pair<long long,long long> pp;
 pp=make_pair(minm,maxm);
 return pp;
}