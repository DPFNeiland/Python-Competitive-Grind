#include<iostream>

using namespace std;



int main(){
	
	int N, resp = 0, aux;
	
	cin >> N;

	int V[N][N];

	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> V[i][j];
		}
	}


// V[0][0], V[0][N-1], V[N-1][0], V[N-1][N-1]

if 	(V[0][N-1] < V[N-1][N-1] && V[0][N-1] < V[0][0]){
	resp = 1;
} else if (V[N-1][N-1] < V[0][N-1] && V[N-1][N-1]  < V[N-1][0]){
	resp = 2;
} else if (V[N-1][0] < V[0][0] && V[N-1][0]  < V[N-1][N-1]){
	resp = 3;
} 
	cout << resp << endl;
		 
		
}
