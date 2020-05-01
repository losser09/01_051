

//binary search
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, key;
    cin >> n;
    ll a[n+5];
    for(int i=0; i<n; i++)
        cin >> a[i];

    cin >> key;
    sort(a, a+n);
    if(binary_search(a, a+n, key))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
