#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void twoSum(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1;
	while (nums[left] > target && left < right)
	{
		left++;
	}
	for (; nums[left] + nums[right] != target; right = numsSize - 1)
	{
		while (left < right)
		{
			while (nums[right] > target && left < right)
			{
				right--;
			}
			if (nums[left] + nums[right] == target)
			{
				goto there;
			}
			right--;
		}
		while (nums[++left] > target && left < right)
		{
			left++;
		}
	}
there:

	printf("%d %d\n", nums[left], nums[right]);
}

int main()
{
	int nums[20] = { 0 };
	int target;
	int i = 0;
	
	scanf("%d", &nums[i++]);
	int count = 1;
	while (getchar() != '\n')
	{
		scanf("%d", &nums[i]);
		i++;
		count++;
	}
	scanf("%d", &target);

	twoSum(nums, count, target);

	return 0;
}