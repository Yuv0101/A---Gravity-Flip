#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()
#define iparr                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

using namespace std;
int main()
{
    ll n;
    cin>>n;

    int i=0;
    ll arr[n];

    while(i<n)
    {
         cin>>arr[i];
         i++;
    }
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}