#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	int i;
	bool isPrime = true;

	if (n == 0 || n == 1) {
        	isPrime = false;
   	} else {
        	for (i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
            	    		isPrime = false;
                    		break;
          		}
        	}
   	 }
    return isPrime;
}

int main() {
	typedef unsigned long long ull;
	ull t, d, e, d2; cin >> t;
	while(t--) {
		cin >> d; d2 = d; d = d + 1; 
		if (d != 1) {
			while (prime(d) != true) {
				d++;
			}
		} else {
			d++;
		}
		e = d + d2;
		while (prime(e) != true) {
			e++;
		}
		cout << d*e << "\n";
	}
}