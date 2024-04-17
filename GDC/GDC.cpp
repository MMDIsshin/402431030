#include <iostream>
#include <list>
using namespace std;
int main() {
	int M{ 0 }, N{ 0 }, g{ 0 };
	cout << "type Two Numbers (use Space for Separate 'em : ";
	cin >> M >> N;
	for (int i = 1;i <= M && i <= N;i++) {
		if (M % i == 0 && N % i == 0) {
			g = i;
		}

	}
	cout << g << "is the Greatest Common Divisor ;)";
	system("pause>0");
}
//created by MMD. It’s quite straightforward so i don’t believe we need comments to explain it ;)