#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double resp = 0;
	
	for(int i = 1; i <= 999; i++){
		resp = resp + 1.0/(i*i*i);
		cout << fixed << setprecision(52) << resp << " quando i = " << i << endl;
	}
	 
	
}
