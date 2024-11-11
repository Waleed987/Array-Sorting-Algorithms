#include <iostream>
using namespace std;

class sortingAlgos {
public:
	//BUBBLE SORT , PASS AN ARRAY ALONG WITH ITS SIZE TO THIS FUNCTION
	void bubblesort(int a[], int size) {
		cout << endl;
		cout << "Performing Bubble sort";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size-1; j++) {
				if (a[j] > a[j + 1]) {
					int temp = a[j+1];
					a[j + 1] = a[j];
					a[j] = temp;
				}
			}
		}
		printarr(a, size);
	}

	//INSERTION SORT , PASS AN ARRAY ALONG WITH ITS SIZE TO THIS FUNCTION
	void insertionsort(int a[], int size) {
		cout << endl;
		cout << "Performing Insertion sort";
		for (int i = 0; i < size; i++) {
			int key = a[i];
			int j = i - 1;
			while (j >= 0 && a[j] > key) {
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = key;
		}
		cout << endl;
		printarr(a, size);
	}

	//SELECTION SORT , PASS AN ARRAY ALONG WITH ITS SIZE TO THIS FUNCTION
	void selectionsort(int a[], int size) {
		cout << endl;
		cout << "Performing Selection sort";
		for (int i = 0; i < size; i++) {
			int curmin = i;
			int minind = i;
			for (int j = i; j < size; j++) {
				if (a[j] < a[minind]) {
					minind = j;
				}
			}
			int temp = a[minind];
			a[minind] = a[curmin];
			a[curmin] = temp;
		}

		cout << endl;
		printarr(a, size);
	}

	//PRINTS THE ARRAY AFTER EACH SORTING ALGO CALL.
	void printarr(int a[], int size) {
		cout << endl;
		cout << "Printing Array" << endl;
		for (int i = 0; i < size;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
};
//TEST THE GIVEN ALGOS IN MAIN BY CALLING THEM THROUGH CLASS VARIABLE.
int main() {
	sortingAlgos sort;
	int a[] = { 324,234,234,123,4,43,234,2,234,6,64,6,2,467,3,23,2};
	int size = sizeof(a) / sizeof(int);
	sort.bubblesort(a, size);
	//sort.insertionsort(a, size);
	//sort.selectionsort(a, size);
	
	return 0;
}
