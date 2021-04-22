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
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {

            for (j = 5 * i - 4; j <= 5 * i; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (j = 5 * i; j > 5 * (i - 1); j--)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int32_t main()
{

    solve();

    return 0;
}
