#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void insertionSort(int arr[], int arrSize) 
{
	int key, j;
	for (int i = 0; i < arrSize; i++)
	{
		key = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > key) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = key;
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
	
	insertionSort(array, n);
	print(array, n);
	delete[] array;

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken: " << duration.count() << " ms" << endl;

	return 0;
}
// credit = geeksforgeeks
