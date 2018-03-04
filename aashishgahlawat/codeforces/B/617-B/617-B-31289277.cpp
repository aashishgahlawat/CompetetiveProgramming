#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int prev = -1;
    long long result = 0;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if (v == 1) {
            if (prev == -1) {
                result = 1;
            } else {
                result *= i - prev;
            }
            // increase only if v==1 else dont so as to increase possibility with each 0
            //consider 1 11 111 all have 1 possibility as always i-prev=1 i.e. 1*1=1 case
            //consider 101 with 0. prev didn't increase and diff. increased so did possibility to diff. times
            prev = i;
        }
    }
 
    cout << result << endl;
}