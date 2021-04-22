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
    int i, j, n, m, count1 = 0, count2 = 0;
    //start code here
    cin >> n;
    i = 1;
    j = 2;
    for (i = 1; i <= (2 * n - 1); i = i + 2)
    {
        count1 += i;
    }
    for (j = 2; j <= (2 * n); j = j + 2)
    {
        count2 += j;
    }
    cout << count1 << " " << count2;
}

int32_t main()
{

    solve();

    return 0;
}
