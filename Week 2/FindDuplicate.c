int findDuplicate(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize-1;i++)
    {
        int min=0;
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[j]<nums[min])
                min=j;
        }
        int temp=nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
    }

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==nums[i+1])
            return nums[i];
    }
            return -1;

}
