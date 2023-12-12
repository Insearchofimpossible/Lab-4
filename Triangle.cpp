#include <iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	int n;
	int b;
	cout << "¬ведите число n: "; cin >> n;
	while ((n % 2 == 0) or (n < 3)) {
		cout << "¬ведите число n: ";
		cin >> n;
	b = (n - 1) / 2; 
	}
	for (int i = 1; i <= ((n + 2) / 2); i ++) {
		for (int p = b; p >= 0; p --){
			cout << " ";
		}
		for (int z = 1; z <= i; z++) {
			cout << "*";
		}

		cout << endl;
	}
}