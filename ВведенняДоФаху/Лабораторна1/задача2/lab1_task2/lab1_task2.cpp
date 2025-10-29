#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    cout << "Середнє арифметичне: " << (a + b) / 2 << endl;
    return 0;
}