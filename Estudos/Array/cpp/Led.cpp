#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
	int N, resp, aux;
	
	string led;
	
	cin >> N;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for(int i = 0; i < N; i++){
		resp = 0;
		
		getline(cin,led);
		aux = led.length();
		
		
		for(int j = 0; j < aux; j++){
				 if(led[j]=='1'){resp = resp + 2;}
			else if(led[j]=='2' || led[j]=='3' || led[j]=='5'){resp = resp + 5;}
			else if(led[j]=='4'){resp = resp + 4;}
			else if(led[j]=='6' || led[j]=='9' || led[j]=='0'){resp = resp + 6;}
			else if(led[j]=='7'){resp = resp + 3;}
			else if(led[j]=='8'){resp = resp + 7;}
		}
		cout << resp << " leds" << endl;

	}
}
