// ������6������ ������ �++
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
	cout << " ������� ����� : ";
	cin >> n;
	cout << "������ ����� " << n << "=" << _abs(n) << endl;
	printPI();



	cout << " ������� ��� ����� :";
	cin >> n >> m;
	cout << n << "+" << m << "=" << sumAB(n, m) << endl;*/


	//�������
	int arr[10];
	cin >> n >> m;
	fillarr(arr, 10, n, m);
		cout << "������ arr\n";
		showarr(arr, 10);

	//��������
	person Tom = {"Tom Smith", {10, 10, 1990}};
	showObj(Tom);
	showObj(Tom.B);

	return 0;
}