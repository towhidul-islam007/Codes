
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
#define MAX             100010
#define read(in)        freopen("in.txt", "r", stdin)
#define write(out)      freopen("out.txt", "w", stdout)
#define INF             10000000
#define eps             1e-9
#define arraysz(a)      sizeof (a)/sizeof(a[0])
#define FORN(i, n)      for(int i = 0; i < n; i++)
#define FORAB(i, x, n)  for(int i = x; i < n; i++)
#define FORD(i, x, n)   for(int i= n - 1; i >= x; i--)
#define scan(n)         scanf("%d", &n)
#define print(n)        printf("%d\n", n)
#define tor             vector
#define dbg(x)          cout<<#x<<" : "<<x<<endl
#define pii             pair<int, int>

using namespace std;

ll go(ll a, ll b){
    if(a == b){
        return 1;
    }

    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    else{
        if(a > b){
            return ((a-1)/b) + go(a - b*((a-1)/b), b);
        }
        else{
            return ((b-1)/a) + go(a, b - a*((b-1)/a));
        }
    }
}

int main(){
    //read(in);
    //write(out);
    ll a, b;
    while(cin>>a>>b){
        cout<<go(a, b)<<endl;
    }
    return 0;
}
