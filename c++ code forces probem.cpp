#include <iostream>
#include <string>
using namespace std;

int main(){
	int loops;
	cin>> loops; // loop count = lc
	for(int lc = 0; lc<loops; lc++){
		// days bank will be open = nd
		// days Ham wants to withraw = nk
		int nd;
		int nk;
		cin>> nd>> nk;
		// total balance at the end = tb
		long long tb;
		tb = (1LL<<(nd-nk+1)) + (2*(nk-1));
		cout<<tb<<"\n";
	}
    return 0;}
