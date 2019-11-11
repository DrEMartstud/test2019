#include <iostream>
#include <cmath>
#include <string>

using namespace std;
short n() {
	//short n;
	cout << "(N): " << endl;
	while (true) {
		cin >> n;
		if (n % 2 == 0 && (n <= 10 && n >= 2)) break;
		if (n % 2 != 0) cout << "Only even." << endl;
		if (n > 10 || n < 2) cout << "[2..10]" << endl;
	}
	return n;
}
int sum(int stepen, int chislo) {
	int ten, number;
	ten = pow(10, stepen);
	number = chislo / ten;
	return number % 10;
}
int ten(int i) {
	int a = 0;
	a = pow(10, i);
	return a;
}
int main() {
	int i, sum1, sum2, AmountOfLuckyTickets = 0;
	unsigned long long int ticket = 0, max;
	
	short n = n();
		int maxSum;
		max = 9999999999 % ten(n / 2);
	cout << "Max = "<< max << endl;
	for (i = 0,maxSum = 0; i < n / 2; i++) {
		maxSum += sum(i, max);
	}
	while (ticket <= max) {
		for (i = 0, sum1 = 0; i < n / 2; i++) {
			sum1 += sum(i, ticket);
		}
		for (sum2 = 0; i < n; i++) {
		 sum2 += sum(i,ticket);
		}
		//cout << "Sums = " << sum1 << " " << sum2;
		if (sum1 == sum2) AmountOfLuckyTickets++; 
		ticket++;
	}

	/*maxSum = n / 2 * 9;
	cout << "maxSum = " << maxSum;*/
	
	
	cout << "Lucky = "<< AmountOfLuckyTickets;
	return 0;

}