// Персон6альный шаблон С++
#include < iostream>
#include  "functions.h"
#include "structurs.h"
#include "Data.h"
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");
	int n, m;


	std::cout << " _PI " << _PI << std::endl;
	std::cout << " _E " << _PI << std::endl;
	cout << " Введите число : ";
	cin >> n;
	cout << "Модуль числа " << n << "=" << _abs(n) << endl;
	printPI();



	cout << " Введите два числа :";
	cin >> n >> m;
	cout << n << "+" << m << "=" << sumAB(n, m) << endl;*/


	//массивы
	int arr[10];
	cin >> n >> m;
	fillarr(arr, 10, n, m);
		cout << "массив arr\n";
		showarr(arr, 10);

	//стуктуры
	person Tom = {"Tom Smith", {10, 10, 1990}};
	showObj(Tom);
	showObj(Tom.B);

	return 0;
}