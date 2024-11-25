#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <cmath>
#include <map>
#include <queue>
#include <algorithm>
#include <functional>
#define rep(i, j, k) for (int i = j; i <= k; i++)
#define per(i, j, k) for (int i = j; i >= k; i--)
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;

ll getGCD(ll a, ll b)
{
    if (a == 0 || b == 0)
    {
        return (a>=b) ? a : b;
    }
    bool isBigger = (a>=b) ? 1 : 0;
    if (isBigger)
    {
        return getGCD(b,a%b);
    }
    else
    {
        return getGCD(a,b%a);
    }
}

void solve()
{
    ll n,m,k;
    ll capnum[502][502]; //(0,0)에서 (i,j)까지의 사각형의 cap 개수
    ll arr[501][501];
    string s[501];
    cin >> n >> m >> k;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> arr[i][j];
        }
    }
    rep(i,0,n-1)
    {
        cin >> s[i];
    }
    ll Icap(0),Inocap(0);

    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            capnum[i][j] = 0;
            if (s[i][j] == '1') Icap += arr[i][j];
            else Inocap += arr[i][j];

            if (i != 0) capnum[i][j] += capnum[i-1][j]; //인덱스 아웃 관리
            if (j != 0) capnum[i][j] += capnum[i][j-1];
            if (i != 0 && j != 0) capnum[i][j] -= capnum[i-1][j-1]; //중복되는 사각형 제거
            capnum[i][j] += (s[i][j] == '1');
        }
    }

    if (Icap == Inocap)
    {
        cout << "YES\n";
        return;
    }

    vector<ll> v;
    ll ksquare = k*k;
    rep(i,k-1,n-1)
    {
        rep(j,k-1,m-1)
        {
            ll num = capnum[i][j];
            if (i >= k) num -= capnum[i-k][j]; //k*k의 cap개수 구하기
            if (j >= k) num -= capnum[i][j-k];
            if (i >= k && j >= k) num += capnum[i-k][j-k];

            ll diff = num-(ksquare-num);
            if (diff == 0) continue;
            if (diff < 0) diff *= -1;
            v.pb(diff);
        }
    }
    if (v.empty())
    {
        cout << "NO\n";
        return;
    }
    ll gcd = v[0];
    rep(i,1,v.size()-1) //베주항등식. aN+bM의 가능한 값은 gcd(a,b)의 배수.
    {
        gcd = getGCD(gcd,v[i]); //전체 gcd를 구하고 cap과 nocap의 차이를 a,b의 합으로 만들수 있는지 판별.
    }
    if (abs(Icap-Inocap)%gcd == 0)
    {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}