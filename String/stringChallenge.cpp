#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

string extractStringAtKey(string str,int key){
	//strtok
	string s=strtok((char*)str.c_str()," ");
	while(key-->1)  s=strtok(NULL," ");
	return (string)s;
	
}

bool numericCompare(pair<string,string> s1,pair<string,string> s2){
	return stoi(s1.second)<stoi(s2.second);
}
bool lexicoCompare(pair<string,string> s1,pair<string,string> s2){
	return s1.second<s2.second;
}
int main(){

	int n;
	cin >> n;
	cin.get();

	string a[100];
	for(int i=0;i<n;i++) getline(cin,a[i]);

	int key;
	string reversal, ordering;
	
	cin >> key >> reversal >> ordering;
	pair<string,string> strPair[100];

	for(int i=0;i<n;i++){
		strPair[i].first=a[i];
		strPair[i].second=extractStringAtKey(a[i],key);
	}

	//Next -> Sorting

	if(ordering=="numeric") sort(strPair,strPair+n,numericCompare);
	else sort(strPair,strPair+n,lexicoCompare);
	//Reversal
	if(reversal=="true") for(int i=0;i<n/2;i++){
		swap(strPair[i],strPair[n-1-i]);
	}
	
	//Print the output
	for(int i=0;i<n;i++) cout << strPair[i].first << '\n';
	return 0;
	
}
