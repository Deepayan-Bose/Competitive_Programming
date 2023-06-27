#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

bool isPalindrome(char a[]){
	int i=0,j=strlen(a)-1;
	while(i<j){
		if(a[i++]!=a[j--]) return false;
	}
	return true;
}

int main(){
	//Character arrays
	char a[1000];
	
	cin.getline(a,1000);
	(isPalindrome(a))? cout << "Sentence is Palindromic" : cout << "Sentence is not palindromic";
	return 0;
}
