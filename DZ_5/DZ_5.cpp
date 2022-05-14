#include <iostream>
#include <windows.h>
#include "Header.h"

using namespace std;
 
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int ex;
	cin >> ex;
	switch (ex) {

	case 1: {
		int a;
		string ch = "yes";
		while (ch == "yes") {
			cout << "Введите размер массива: \n";
			cin >> a;
			show(a);
			cout << "Продолжить создавать массивы? (yes или no) \n";
			cin >> ch;
		}
		break;
	}
	case 2: {
		int a = 12;
		show2(a);
		break;
	}
	case 3: {
		size_t str, stol;
		cout << "Введите количество строк, затем столбцов: \n";
		cin >> str;
		cin >> stol;
		int** arr = new int* [str];
		for (size_t i = 0; i < str; ++i) 
			arr[i] = new int[stol];
		

		fill(arr, str, stol);
		out(arr, str, stol);
		
		for (size_t i = 0; i < str; ++i) 
				delete[] arr[i];
				delete[] arr;
		
				break;
	}
	}
}