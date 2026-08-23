	#include <iostream>
	#include <string>
	#include <cctype>
	
	using namespace std;
	
	void SentencaDancante (string text){
		
		int cont = 0; 
		
		for(int i=0; i<text.length(); i++){
			if(text[i]!=32){
				if(cont%2!=0){
					text[i]=tolower(text[i]);
				}else{ 
					text[i]=toupper(text[i]);				}
				
				cont++;
			}
		}
		
		cout << text << endl;
		

	}
	
	int main(){
		string text1;
		string text2;
		string text3;
		string text4;
		getline(cin,text1);
		getline(cin,text2);
		getline(cin,text3);
		getline(cin,text4);
		SentencaDancante(text1);
		SentencaDancante(text2);
		SentencaDancante(text3);
		SentencaDancante(text4);
		return 0;
	}

