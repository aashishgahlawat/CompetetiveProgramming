#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int source, target, cnt = 0;
	cin >> source >> target;
	if(source >target){
		cout << source - target;
		return 0;
	}
	while(source < target){
		if(target % 2 == 0)
			target /= 2;
		else target++;
		cnt++;
	}
	cout << cnt + (source - target);
	return 0;
}