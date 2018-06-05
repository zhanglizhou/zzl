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
	return 0;
}