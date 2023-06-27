#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int main(){
	
	int n;
	cin >> n;

	char a[1000];
	char largest[1000];

	int largest_len=0;

	cin.get(); // Very very important

	while(n--){
		cin.getline(a,1000);
		//cout << a << endl;
		if(strlen(a),largest_len) strcpy(largest,a);
		largest_len=max(largest_len,(int)strlen(a));
	}
	cout << largest << ' 'largest_len << endl;
}

