#include <iostream>
#include <cmath>
#include <string>

using namespace std;
short numb() {
	short chislo;
	cout << "(Ne): " << endl;
	while (true) {
		cin >> chislo;
		if (chislo % 2 == 0 && (chislo <= 10 && chislo >= 2)) break;
		if (chislo % 2 != 0) cout << "Only even." << endl;
		if (chislo > 10 || chislo < 2) cout << "[2..10]" << endl;
	}
	return chislo;
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
	unsigned long ticket = 0, max;
	
	short n = numb();
	max = 9999999999 % ten(n);

	
	cout << "Max = "<< max << endl;

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
	cout << "Lucky = "<< AmountOfLuckyTickets;
	return 0;

}