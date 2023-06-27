#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
void removeDuplicates(char a[]){
	if(strlen(a)-1<=1) cout << a;
	else{
		int i=0,j=1;
		while(j<strlen(a)){
			//first find the first non duplicate character after first character
			while(a[j]==a[i]) j++;
			a[i+++1]=a[j++];
		}
		a[i+1]='\0';
	}
}
int main(){
	//Character arrays
	char a[1000];
	
	cin.getline(a,1000);
	removeDuplicates(a);
	cout << a;
	return 0;
}

