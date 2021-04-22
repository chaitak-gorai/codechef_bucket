#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define int long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl

void solve()
{
    int i, j, n, m;
    //start code here
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3];
    arr[1] = a;
    arr[0] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    cout << arr[1];
}

int32_t main()
{

    solve();

    return 0;
}
