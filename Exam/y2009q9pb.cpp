#include <iostream>
#include <time.h>

using namespace std;

int main(){
	
	int n;
	cout << "enter number: ";
	cin >> n;
	int w = 0;


	clock_t begin_2 = clock();

	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			w += 1;
		}
	}
	clock_t end_2 = clock();
	cout << "time spent: " << (double)(end_2 - begin_2) / CLOCKS_PER_SEC;
	cout << endl;

	clock_t begin = clock();
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				w += 1;
			}
		}
	}
	clock_t end = clock();
	cout << "time spent: " << (double)(end - begin) / CLOCKS_PER_SEC;
	cout << endl;

	



	return 0;
}