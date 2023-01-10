#include<bits/stdc++.h>
using namespace std;
const int MAXLEN = 1e8;
typedef long long ll;
ll n;
ll C(ll b, ll a){
	ll sum = 1;
	for(ll i = b, j  = 1; j <= a; i --, j ++){
		sum = sum * i / j;
		if(sum > n)
			return sum;
	}
	return sum;
}
bool ans(ll x){
	ll MIN = 2 * x;
	ll MAX = n;
	ll mid;
	while(MAX > MIN){
		mid = (MAX + MIN )>> 1;
		if(C(mid, x) >= n){
			MAX = mid;
		}else {
			MIN = mid + 1;
		}
	}
	if(C(MAX, x) == n){
		cout << (1 + MAX) * MAX / 2 + x + 1;
		return true;
	}
	return false;
}
int main(){
	while(cin >> n){
		ll x;
		if(n == 1) cout << 1;
		else{
			for(x = 16; x >= 0; x --)
				if(ans(x))
					break;
		}
	}
	return 0;
}
