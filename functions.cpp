 #include "functions.h"
#include <ctime>
#include <cstdlib>
 int sumAB(int A, int B) {
	return A + B;
}

 void fillarr(int arr[], int l, int min, int max)
 {
	 srand(time(NULL));
	 for (int i = 0; i < l; i++)
		 arr[i] = rand() % (max - min) + min;
 }
