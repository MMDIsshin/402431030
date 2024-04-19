#include <iostream>
#include <list>
using namespace std;
int main() {
	int in; list<int>outl;
	cout << "Please give me a number : " << endl;
	cin >> in;
	while (in != 1) {
		outl.emplace_front(in % 2);
		in = in / 2;
	}
	outl.emplace_front(1);
	for (auto i = outl.begin(); i != outl.end(); i++)
	{
			cout << *i;
	}
	system("pause>0");
}
// ICE T MODE ;)
//-MMD.

