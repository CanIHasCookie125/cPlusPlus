//Helper Function
void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Iterative approach
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
}

//Recursive approach
void bubbleSortRecursive(int arr[], int n) {
	if (n == 1)
		return;
	for (int i = 0; i < n - 1; i++)
		if (arr[i] > arr[i + 1])
			swap(&arr[i], &arr[i + 1]);
	bubbleSortRecursive(arr, n - 1);
}
