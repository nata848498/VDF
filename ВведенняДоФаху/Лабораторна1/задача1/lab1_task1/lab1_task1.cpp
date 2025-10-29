#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    cout << "Сума: " << a + b << endl;
    return 0;
}