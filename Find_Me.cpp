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
    int k;
    cin >> n >> k;
    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
    }

    fo(i, n)
    {
        if (arr[i] == k)
        {
            j = 1;
        }
    }
    if (j == 1)
    {
        cout << j;
    }
    else
    {
        cout << "-1";
    }
}

int32_t main()
{

    solve();

    return 0;
}
