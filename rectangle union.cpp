/*  Towhidul Islam
    University Of Dhaka
    Problem Name :
    Algorithm Used :
*/

#include<bits/stdc++.h>

typedef long long ll;

#define SSTR(x)         dynamic_cast< ostringstream & >( \
                        (ostringstream() << dec << x )).str()
#define pb              push_back
#define mem(a, x)       memset(a, x, sizeof a)
#define PI              acos(-1)
#define all(a)          a.begin(), a.end()
#define ff              first
#define ss              second
#define read(in)        freopen("in.txt", "r", stdin)
#define write(out)      freopen("out.txt", "w", stdout)
#define INF             1<<30
#define eps             1e-9
#define FORN(i, n)      for(int i = 0; i < n; i++)
#define FORAB(i, x, n)  for(int i = x; i < n; i++)
#define FORD(i, x, n)   for(int i= n - 1; i >= x; i--)
#define scan(n)         scanf("%d", &n)
#define print(n)        printf("%d\n", n)
#define tor             vector
#define dbg(x)          cout<<#x<<" : "<<x<<endl
#define chkwhere        cout<<"LOL\n"
#define pii             pair<int, int>
#define MOD             1000000007
#define MAX             1000007

using namespace std;

ll t[4*MAX], lazy[4*MAX], a[MAX];

void push(int node, int l, int r){
    if(lazy[node] != 0){
        t[node] = h[r] - h[l-1];
    }
    else t[node] = t[lc] + t[rc];
}

void update(int node, int l, int r, int st, int ed, int x){
    push(node, l, r);
    if(l > r || l > ed || r < st) return;
    if(l >= st && r <= ed){
        t[node] += (r - l + 1) * x                                                                         ;
        if(l != r){
            lazy[L(node)] += x;
            lazy[R(node)] += x;
        }
        return;
    }

    int mid = (l + r) >> 1;
    update(L(node), l, mid, st, ed, x);
    update(R(node), mid + 1, r, st, ed, x);
    t[node] = t[L(node)] + t[R(node)];
}

int main(){
    //read(in);
    //write(out);
	int tc, cs = 1;
	scan(tc);
	while(tc--){

		printf("Case %d: \n", cs++);
	}
    return 0;
}
