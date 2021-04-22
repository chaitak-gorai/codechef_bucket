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
    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
    }
    int arr2[n];
    fo(i, n)
    {
        arr2[n - 1 - i] = arr[i];
    }
    fo(i, n)
    {
        cout << arr2[i] << " ";
    }
}

int32_t main()
{

    solve();

    return 0;
}
