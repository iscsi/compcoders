#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

typedef int32_t i32;
typedef vector<i32> v32;

int main() {

	i32 N;
	cin >> N;

	v32 s(N, 0);

	for (i32 i = 0; i < N; ++i) {
		cin >> s[i];
	}
	sort(s.begin(), s.end());

	for (i32 i = 0; i < N; ++i) {
		i32 q; 
		cin >> q;

		auto low = lower_bound(s.begin(), s.end(), q)-1;
		auto up  = low+1; //upper_bound(s.begin(), s.end(), q);

		if (up == s.end() {
			printf("%u\n", *low);
			continue;
		}

		i32 d_low = abs(q - *low);
		i32 d_up  = abs(q - *up);
		if (d_low <= d_up) {
			printf("%u\n", *low);
		}
		else {
			printf("%u\n", *up);
		}
	}

	return 0;
}

