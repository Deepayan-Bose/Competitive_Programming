#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	//Character arrays
	char ch[10]={'a','b','c','d','e','\0'};

	cout << ch << endl; // Special behavior : prints unless you find a null terminator '\0'
	//input
	char s[10];
	cin >> s;
	cout << s << '\n';
	char word[]={'h','e','l','l','o','\0'};
	cout << word << sizeof(word); // 6
	return 0;
}


