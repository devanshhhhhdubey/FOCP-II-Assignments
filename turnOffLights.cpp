#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

	bool turnOff(int n, string bulbs, int k, int l){
		int operations=0;
		string temp=bulbs;

		for(int i=0; i<n; i++){
			if(temp[i]=='1'){
				operations++;
				if(operations > k) return false;

				//i min(n-1,i+l-1)
				int end = min(n-1,i+l-1);
				for(int j=i; j<=end; j++) {
					temp[j]='0';
				} 
			}
		}
		return operations<=k;
	}

int main(){
	int n,k;
	cin>>n>>k;

	string bulbs;
	cin>>bulbs;

	int left=1, right=n, answer=n;

	while(left<=right){
		int mid=left+(right-left) / 2;

		if(turnOff(n,bulbs,k,mid)) {
			answer = mid;
			right = mid-1;
		}
		else{
			left = mid+1;
		}
	}

	cout<<answer<<endl;
	return 0;
}