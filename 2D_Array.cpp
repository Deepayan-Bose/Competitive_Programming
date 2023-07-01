#include <iostream>
using namespace std;

// 2-D Arrays

int main(){

	int a[5][3]={0};

	//Iterate Over the array
	int val=1;
	for(int row=0;row<=4;row++)	{

		for(int col=0;col<=2;col++) {a[row][col]=val++; cout << a[row][col] << " ";}
		cout << '\n';
	}


	return 0;
}




