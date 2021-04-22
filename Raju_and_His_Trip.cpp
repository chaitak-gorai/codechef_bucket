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
    cin >> n;
    if (n % 5 == 0 || n % 6 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int32_t main()
{

    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    //
    // }
    solve();
    return 0;
}
