#include <iostream>
#include <iomanip>
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
    int l, r;
    cin >> l >> r;
    i = (l % 2 == 0) ? l + 1 : l;
    for (j = i; j <= r; j = j + 2)
    {
        cout << j << " ";
    }
}

int32_t main()
{

    solve();
    return 0;
}
