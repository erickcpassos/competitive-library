#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+28;

struct BIT {
	vector<int> tree;
	void init(int max_size) {
		tree.resize(max_size+28);
	}

	void update(int pos, int delta) {
		for(pos; pos <= max_size; pos+=(pos&-pos)) {
			tree[pos]+=delta;
		}
	}

	int sum(int pos) {
		int s = 0;
		for(pos; pos > 0; pos-=(pos&-pos)) {
			s += tree[pos];
		}
		return s;
	}

	int sum_range(int l, int r) {
		return sum(r)-sum(l-1);
	}
};

int main() {
	BIT bit;
	bit.init(MAXN);
}
