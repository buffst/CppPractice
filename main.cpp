#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int input;
	cout << "整数値を入力：";
	cin >> input;
	if (input % 2 == 0) {
		cout << input << "は偶数です。" << endl;
	}
	return 0;
}