/*
*this is the first step for me to understand cpp
*code is clone from c++ prime(A famous book)
*this is a easy way to remember how many times you print a same number!!!
*2018.6.6
*/
#include<iostream>
using namespace std;
int main()
{
	int curval = 0, val = 0;
	if(cin >> curval){
		int bnt = 1;
		while(cin >> val){
			if(val == curval)
				bnt++;
			else {
				cout << curval << " occurs " << bnt << " times " << endl;
				bnt = 1;
				curval = val;
			}
		}
		cout << curval << " occurs " << bnt << " times " << endl; 
	}
	else {
		cerr << " WRong " << endl;
		return -1;
	}
}
