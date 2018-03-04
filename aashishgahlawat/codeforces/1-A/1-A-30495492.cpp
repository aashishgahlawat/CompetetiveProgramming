#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,m,a;
	cin>>n>>m>>a;
	long long int x,y;
	x=n/a;
	y=m/a;
	if(m%a) y+=1;
	if(n%a) x+=1;
	std::cout << x*y << std::endl;
	return 0;
}