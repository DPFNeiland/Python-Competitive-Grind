#include <iostream>

using namespace std;

#define MAX 31

int main(){
	
	int N, bits[MAX];
	
	for (int i = 0; i < MAX; i++){
		bits[i] = 0;
	}
	
	
	cin >> N;
	
	int a[N];
	
	for(int i = 0; i < N; i++){
		cin >> a[i]; 
		
		// &    |   <<    >>
		
		for(int j = 0; j < MAX; j++){
			if ((1<<j) & a[i]) {
				bits[j] += 1;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		int num = 0;
		
		for(int j = 0; j < MAX; j++){
			if (bits[j] != 0){
				num = num +  (1 << j);
				bits[j] -= 1;
			}
			
		}
		
		cout << num << " ";
	}
	
	cout << endl;
}
