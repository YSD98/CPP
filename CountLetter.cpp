//Write a function count_letter that takes a single character. This function
//will count the number of consonants and vowels. If a nonletter is given to the function, it
//generates an exception

#include <iostream>

using namespace std;

void countLetter(char);

int vowels = 0, cons = 0;

int main()
{
	string str;
	
	cout << "Enter the string : ";	
	getline(cin, str);
	
	for(int i = 0; str[i] != '\0'; i++) {
		countLetter(str[i]);
	}
	
	cout << "\nVowels : " << vowels << endl;
	cout << "Consonants : " << cons << endl;
	
	return 0;
}

void countLetter(char c) {
	try {
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
				vowels++;
			} else {
				cons++;
			}
			
		if(!isalpha(c)) {
			throw c;
		}
			
	} catch(char c) {
		cout << c << " is non letter" << endl;
	}		
}

