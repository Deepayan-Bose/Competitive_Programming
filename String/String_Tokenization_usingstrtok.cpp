#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

//char *strtok(char *s,char *delimiters)
//returns a token one each subsequent call
// on the first call function should pass the string argument for 's'
// on the subsequent calls we should pass the string argument as null
int main(){

	char s[100]="Today, is a rainy, day";

	char *ptr=strtok(s,",");
	cout << ptr << endl;
	while(ptr!=NULL){
		ptr=strtok(NULL,",");
		cout << ptr << endl;
	}
	return 0;

	
}
