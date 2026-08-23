#include <iostream>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

int main(){
	int N;
	string text;
	
	cin >> N;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for(int i = 0; i < N; i++){
		getline(cin,text);
		
		for(int i = 0; i < text.length(); i++){
			if((text[i]>=65 && text[i]<=90) || (text[i]>=97 && text[i]<=122))
			text[i] = text[i] + 3;
		}
		reverse(text.begin(), text.end());
		
		for(int i = text.length()/2; i < text.length(); i++){
			text[i] = text[i] - 1;
		}
		
		cout << text << endl;
	} 
	
	
} 
