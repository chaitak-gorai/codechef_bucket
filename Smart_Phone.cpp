#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define int long long
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
const int mod = 1'000'000'007;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define PI 3.1415926535897932384626

void solve()
{
    int i, j, n, count, res;
    //start code here
    int N;
    cin >> N;
    int arr[N];
    fo(i, N)
    {
        cin >> arr[i];
    }
    int rev[N] = {0};
    fo(i, N)
    {
        int a = arr[i];

        fo(j, N)
        {
            if (arr[j] >= a)
            {
                rev[i] += a;
            }
        }
    }
    sort(rev, rev + N);
    cout << rev[N - 1];
}

int32_t main()
{

    solve();

    return 0;
}
