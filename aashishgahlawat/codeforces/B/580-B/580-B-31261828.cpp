#include <bits/stdc++.h>
#define X first
#define Y second


using namespace std;


int main(){
	long long int n, d, num1, num2, maxlocal = 0, maxglobal = 0;
	vector<pair<long long, long long> >vetor;
	cin >> n >> d;
	for(long int i = 0; i < n; i++){
		cin >> num1 >> num2;
		vetor.push_back(make_pair(num1, num2));
	}
	sort(vetor.begin(), vetor.end());

	for(long int i = 0, j = 0; j < n;){
		if(vetor[j].X - vetor[i].X  < d){
			maxlocal += vetor[j].Y;
			j++;
		}else{
			maxlocal -= vetor[i].Y;
			i++;
		}
		maxglobal = max(maxlocal, maxglobal);
	}
	cout << maxglobal << endl;


    return 0;
}