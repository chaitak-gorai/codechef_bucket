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
    int i, j, n, count = 0, res;
    //start code here
    string S;
    cin >> S;
    int len;
    len = S.length();
    int l[26] = {0};
    int r[26] = {0};

    fo(i, len / 2)
    {
        int a;
        a = S[i];
        l[a - 97]++;
    }

    for (i = (len + 1) / 2; i < len; i++)
    {
        int b;
        b = S[i];
        r[b - 97]++;
    }
    fo(i, 26)
    {
        if (l[i] != r[i])
        {
            no;
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        yes;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
