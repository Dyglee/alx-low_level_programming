/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int v;

	while (start < end)
	{
		v = a[start];
		a[start] = a[end];
		a[end] = v;

		start++;
		end--;
	}
}
