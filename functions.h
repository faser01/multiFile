#pragma once

#include <iostream>

 int sumAB(int A, int B);
 void fillarr(int arr[], int l, int min, int max);
 //не в коем случае не подключить стд
 template < typename T> void showarr(T arr, int l) 
 {
	std:: cout "[";
	 for (int i = 0; i < l;; i++)
		 std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
 }
