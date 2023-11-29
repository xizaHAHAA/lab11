#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	int	k;
	cout << "Enter k: ";
	cin >> k;

	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; ++j) {
			for (int m = 0; m <= 9; ++m) {
				if (i + j + m == k) {
					cout << i * 100 + j * 10 + m << endl;
				}
			}
		}
	}
	return 0;
}





//3. Дано натуральне число 𝑘. 
// Знайти всі тризначні числа, сума цифр якого дорівнює 𝑘. 
// Операцію ділення, цілочисельного ділення та визначення остачі не використовувати.


