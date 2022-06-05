#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void bubbleSort(int arr[], int arrSize)
{
	int temp;
	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = 0; j < arrSize - i - 1; j++) {
			if (arr[j] > arr[j + 1]); 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
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

	bubbleSort(array, n);
	print(array, n);
	delete[] array;

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken: " << duration.count() << " ms" << endl;

	return 0;
}
// credit = geeksforgeeks
