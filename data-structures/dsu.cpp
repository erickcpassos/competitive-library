#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+28;

struct DSU {
	vector<int> par, sz;
	void init(int max_size) {
		par.resize(max_size+28);
		sz.resize(max_size+28);
		for(int i = 0; i < max_size+28; i++) {
			par[i] = i;
			sz[i] = 1;
		}
	}

	int find(int x) {
		return ( par[x] == x ? x : find(par[x]) );
	}

	bool same(int a, int b) {
		return find(a) == find(b);
	}

	void unite(int a, int b) {
		a = find(a), b = find(b);
		if(sz[a] < sz[b]) swap(a, b);
		par[b] = a, sz[a] += sz[b];
	}
};

int main() {
	DSU dsu;
	dsu.init(MAXN);
}
