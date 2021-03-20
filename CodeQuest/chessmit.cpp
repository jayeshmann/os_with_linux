#include <bits/stdc++.h>
#include <unistd.h>
#define ll long long
#define skip cin >> ws;
#define vll vector<ll>
#define vb vector<bool>
#define vpll vector<pair<ll, ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define vs vector<string>
#define vvpll vector<vector<pair<ll, ll>>>
#define pb push_back
#define pob pop_back()
#define MOD (ll)(1e9 + 7)
#define INF (ll)(1e18 + 5)
#define count1(n) __builtin_popcountll(n)
#define test \
  ll t;      \
  cin >> t;  \
  while (t--)
#define loop(i, a, b) for (ll i = (ll)a; i < (ll)b; ++i)
#define enter(a)                    \
  for (ll i = 0; i < a.size(); i++) \
    cin >> a[i];
#define show(a)       \
  for (ll e : a)      \
    cout << e << " "; \
  cout << "\n";
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  vll r(n);
  enter(r);
  sort(r.begin(), r.end());
  int cnt = 0;
  ll sum = 0;
  for (int i = n - 1; i >= 0; i--)
    for (int j = i; j >= 0; j--)
    {
      if (cnt == m)
      {
        cout << sum << endl;
        return;
      }
      if (i == j)
      {
        sum += 2 * r[i];
        cnt += 1;
        if (cnt == m)
        {
          cout << sum << endl;
          return;
        }
      }
      else
      {
        sum += (r[i] + r[j]);
        cnt += 1;
        if (cnt == m)
        {
          cout << sum << endl;
          return;
        }
        sum += (r[i] + r[j]);
        cnt += 1;
        if (cnt == m)
        {
          cout << sum << endl;
          return;
        }
      }
    }
  return;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input1.txt", "r", stdin);
  freopen("output1.txt", "w", stdout);
#endif
  int t = 1;
  //cin>>t;
  while (t--)
    solve();
  return 0;
}