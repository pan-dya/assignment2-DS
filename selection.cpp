#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int arrSize)
{
	int min;
	for (int i = 0; i < arrSize - 1; i++) {
		min = i;
		for (int j = i + 1; j < arrSize; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
				swap(&arr[min], &arr[i]);
		}
	}
}

void print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
}

int main() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int* array = new int[n];
	cout << "Enter elements:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	auto start = high_resolution_clock::now();

	selectionSort(array, n);
	print(array, n);
	delete[] array;

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken: " << duration.count() << " ms" << endl;

	return 0;
}
// credit = geeksforgeeks
