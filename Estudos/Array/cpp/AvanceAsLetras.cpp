#include<iostream>
#include <string>
#include <limits>


using namespace std;

int main(){
	int N, resp = 0;
	string text1, text2;
	
	cin >> N;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for(int i = 0; i < N; i++){
		resp = 0;
		cin >> text1 >> text2;
		
		for(int j = 0; j < text1.length(); j++){
			while(text1[j]!=text2[j]){
				resp++;
				text1[j] = text1[j] + 1;
				if(text1[j]>122){
					text1[j] = 97;
				}
			}
		}
		cout << resp << endl;
	}
}
