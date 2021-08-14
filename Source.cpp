#include<iostream>
using namespace std;
int main() {
	int a[3],min=INT_MAX;
	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int i = 0; i < 3; i++) if (a[i] < min)min = a[i];
	cout << min;
}