/**
 * insertion_sort - Recursive function to sort an array using
 * insertion sort
 * @arr: an array to be sorted
 * @n: the divisor
 *
 * Return: void
 */
void insertion_sort(int arr[], int n)
{
	if (n <= 1)
		return;

	insertion_sort(arr, n - 1);

	int last = arr[n - 1];
	int xj = n - 2;

	while (xj >= 0 && arr[xj] > last)
	{
		arr[xj + 1] = arr[xj];
		xj--;
	}

	arr[xj + 1] = last;
}
