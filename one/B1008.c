/*
数组元素循环右移问题
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *nums, int begin, int end)
{
	int temp;
	for (int i = 0, count = (end - begin + 1) / 2; i < count; i++)
	{
		temp = nums[begin + i];
		nums[begin + i] = nums[end - i];
		nums[end - i] = temp;
	}
}

int main()
{
	int n, m, temp;

	// 获取m和n
	printf("Please input the n and m:\n");
	scanf("%d%d", &n, &m);

	m %= n; // 对于一个长度为N的序列，右移N位后与原序列相同。

	int *nums = (int *)malloc(sizeof(int) * n);

	// 获取整数值
	for (int i = 0; i < n; i++)
		scanf("%d", nums + i);

	// for (int i = 0; i < n - 1; i++)
	//     printf("%d ", nums[i]);

	// 交换前n-m个元素
	swap(nums, 0, n - m - 1);
	// 交换后m个元素
	swap(nums, n - m, n - 1);
	// 交换整个数组
	swap(nums, 0, n - 1);

	// 输出
	for (int i = 0; i < n - 1; i++)
		printf("%d ", nums[i]);
	printf("%d", nums[n - 1]);

	return 0;
}
