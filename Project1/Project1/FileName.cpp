#include <iostream>
#include <Windows.h>

#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int Kylykist(const char* str,char a) {
	int g = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == a) {
			g++;
		}
	}
	return g;
}
int main() {
	srand(time(NULL)); 
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 
	char a;
	cout << "¬каж≥ть слово" << endl;
	cin >> a;
	char str[50]; 
	cin.getline(str, 50); 
	
}