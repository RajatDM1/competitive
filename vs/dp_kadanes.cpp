/* ===== ===== =====

Dynamic Programming - Kadane's Algorithm
time O(N)
space O(1)

===== ===== ===== */

#include <stdio.h>

int maxSubArray(int arr[], int size)
{
    int i, maxSum, maxGlobalSum;

    maxSum = maxGlobalSum = arr[0];

    for (i = 1; i < size; ++i) {
        maxSum = arr[i] > arr[i] + maxSum ? arr[i] : arr[i] + maxSum;
        maxGlobalSum = maxSum > maxGlobalSum ? maxSum : maxGlobalSum;
    }

    return maxGlobalSum;
}

int main()
{
	int n;

	scanf("%d", &n);

	int arr[n], i;

	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}

	printf("%d\n", maxSubArray(arr, n));
}