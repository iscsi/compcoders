#include <iostream>
#include <map>

using namespace std;

typedef  int32_t i32;
typedef uint64_t u64;

__attribute__((always_inline))
i32 csum(i32 val) {
	u64 sum = val;
	for(int i = 0; val > 0; ++i, val /= 10) {
		sum += (val % 10);
	}
	return sum;
}

int main() {

	u64 N, N1;
	cin >> N;
	N1 = N;

	map<i32, i32> m;

	// build up storage
	while(N--) {
		i32 val = 0;
		cin >> val;
		i32 sum = csum(val);
		m[sum] = val;
	}

	// fullfill the queries
	while(N1--) {
		i32 val = 0;
		cin >> val;
		i32 sum = csum(val);

		auto low = m.lower_bound(sum);
		low--;
		auto up = ++low;
		low --;
		
		if (up == m.end()) {
			printf("%u\n", low->second);
			continue;
		}

		i32 d_low = abs(sum - low->first);
		i32 d_up  = abs(sum - up->first);
		if (d_low <= d_up) {
			printf("%u\n", low->second);
		}
		else {
			printf("%u\n", up->second);
		}
	}

	return 0;
}

