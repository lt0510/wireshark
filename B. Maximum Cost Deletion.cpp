#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   
int main() {
	int x, y, z;
	for(x = 0; x < 1000; x++) {
		for(y = 0; y < 1000; y++) {
			for(z = 0; z < 1000; z++) {
			
				if((3*(y*y*z*z + 2*x*x*z*z + 3*x*x*y*y) == 2*x*x*y*y*z*z) && (x != 0 || y!= 0 || z!=0))
				cout << x << " "<< y << " " << z << "\n";
			}
		}
	}
	return 0;
}