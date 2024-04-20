#include <iostream>
#include <list>
#include <cmath>
using namespace std;
int main() {
	long int in, temp, n{ 0 }, q{ 0 }, result; list<int>outl; double s{ 0 };
	cout << "Please give me a number : "; 
	cin >> in;
	temp = in;
	if (in == 0) {
		cout << 0;
	}
	else {
		while (abs(in) != 1) {
			outl.emplace_front(abs(in) % 2);
			in = in / 2;
		}
		outl.emplace_front(1);
		if (temp < 0) {
			
			while (s <= abs(temp)) {
				n += 1;
				s = pow(2,n)/2;
				
			}
			result = (n - outl.size());
			for (int i = 0; i != result;i++) {
				outl.emplace_front(0);
				
			}
			for (auto i = outl.begin(); i != outl.end();i++) {
				*i = (*i == 1) ? 0 : 1;
			}
			outl.reverse(); 
		
			for (auto i = outl.begin(); i != outl.end();i++) {
				if (*i + 1 == 2) {
					*i = 0;
				}
				else {
					*i = 1;
					break;
				}
			}
			outl.reverse();
			for (auto i = outl.begin(); i != outl.end(); i++)
			{
				cout << *i;
			}
			cout << "\nkeep in mind that first number is telling us it's a negative number";
		
		}
		else {
			for (auto i = outl.begin(); i != outl.end(); i++)
			{
				cout << *i;
			}
		}
		
	}

}
// ICE T MODE ;)
//-MMD.

