#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

//Define A Comparator Function
bool compare(int a,int b){
	return a>b;
}
int main(){
	int n;
	cout << "Enter number of elements : " << '\n';
	cin >> n;
	int *a=new int[n];
	for(int i=0;i<n;i++) cin >> a[i];
	// Sort an array using sort() function
	sort(a,a+n,compare);
	for(int i=0;i<n;i++) cout << a[i] << ' ';
	return 0;

}
