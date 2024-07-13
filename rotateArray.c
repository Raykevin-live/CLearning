#include <stdio.h>


void swap(int* nums, int left, int right)
{
	while(left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left ++;
		right--;
	}
}


void rotate(int* nums, int numsSize, int k) 
{
	
	swap(nums, 0, numsSize-k-1);
	swap(nums, numsSize-k, numsSize-1);
	swap(nums, 0, numsSize-1);
}

int main()
{
	int nums[] = {1,2,3,4,5,6,7};
	int k = 3;
	rotate(nums, 7, k);
	
	for(int i =0; i<7; ++i)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}
