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
	cout << "������ �����" << endl;
	char str[50];
	cin.getline(str, 50);
	char a;
	cout << "������ �����" << endl;
	cin >> a;
	int rez = Kylykist(str, a);
	cout << "ʳ������ ����� " << a << " � �����:" << rez << endl;
}