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
    int i, j = 0, n, m;
    //start code here
    cin >> n;
    int arr[n / 2];
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[j] = i;
            j++;
        }
    }
    cout << j << endl;
    for (i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
}

int32_t main()
{

    solve();

    return 0;
}
