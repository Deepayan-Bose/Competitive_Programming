#include <iostream>
#include <string>
#include <cstring>
#include <climits>
using namespace std;

int main(){
	string s0;
	string s1("Hello");
	string s2="Hello World";

	string s3(s2);

	string s4=s3;

	char a[]={'a','b','c','\0'};
	string s5(a);

	cout << s0 << '\n' << s1 << '\n' << s2 << '\n' << s3 << '\n' << s4 << '\n' << s5 << endl;
	
	if(s0.empty()){
		cout << "s0 is an empty string" << '\n';
	}
	//Append
	s0.append("I love C++");
	cout << s0 << endl;
	s0+=" and Python";
	cout << s0 << endl;

	//Remove
	cout << s0.length() << endl;
	s0.clear();
	cout << s0.length() << endl;

	//Compare two strings
	s0="Apple";
	s1="Mango";
	cout << s0.compare(s1) << endl; //Returns an integer ==0 equal >0 or <0 (Performs lexographic comparison)

	//Using overloaded operator
	if(s0<s1) cout << "Mango is lexographically greater than Apple" << '\n';

	cout << s1[0] << endl;

	//Find substrings
	string s="I want to have apple juice.";
	int idx=s.find("apple");
	cout << idx << endl;

	//Remove a word from the string
	string word="apple";
	int len=word.length();
	cout << s << endl;
	s.erase(idx,len+1);
	cout << s << endl;

	//Iterate over all the characters in the string
	for(int i=0;i<s1.length();i++){
		cout << s1[i] << ':';
	}
	cout << endl;
	//Iterators
	for(string::iterator it=s.begin();it!=s.end();it++) cout << (*it) << ':';

	//for Each loop
		for(char c:s1){
			cout << c << '.';
		}
}
