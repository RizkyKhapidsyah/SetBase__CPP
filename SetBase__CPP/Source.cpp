# include <iostream>
# include <conio.h>
# include <iomanip>

using namespace std;

int main() {
	int a = 250;

	cout << "Penggunan Manipulator setbase()" << "\n\n";
	cout << "Decimal Octal Hexadecimal" << endl;
	cout << "----------------------------" << "\n";

	for (a = 250; a <= 260; a++) {
		cout << setbase(10) << a << " ";
		cout << setbase(8) << a << " ";
		cout << setbase(16) << a << endl;
	}
	
	_getche();
	return 0;
}