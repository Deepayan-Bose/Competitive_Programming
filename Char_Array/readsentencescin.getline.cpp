#include <iostream>
#include <climits>
using namespace std;

//read a sentence/paragraph and store it
//cin.get() reads a single character
//put a loop to read characters till you get a new line '\n'

void read_line(char a[],int maxLen,char delim='\n'){
	int i=0;
	char ch=cin.get();
	while(ch!=delim){
		a[i++]=ch;
		if(i==maxLen-1) break;
		ch=cin.get();
	}
	//once out of the loop
	a[i]='\0';
	return;
}

int main(){
	//Character arrays
	char a[1000];
	//cin >> a; // cin does not input spaces
	//cout << a << endl;
	//read_line(a,1000,'$');
	cin.getline(a,1000,'$');
	cout << a << endl;
	return 0;
}


