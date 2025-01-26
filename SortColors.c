void sortColors(int* nums, int numsSize) {
    int i,j;
    int r=0,w=0,b=0;
    int sol[numsSize];

    for(i=0;i<numsSize;i++)
        sol[i]=-1;

    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
            r++;
        if(nums[i]==1)
            w++;
        if(nums[i]==2)
            b++;
    }

    for (i = 0; i < r; i++) {
        sol[i] = 0;
    }
    for (j = 0; j < w; j++) {
        sol[i + j] = 1;
    }
    for (j = 0; j < b; j++) {
        sol[i + w + j] = 2;
    }

    for(i=0;i<numsSize;i++)
    {
        nums[i]=sol[i];
    }

    printf("[");
    for(i=0;i<numsSize;i++)
    {
        if(i<numsSize-1)
            printf("%d,",nums[i]);
        else
            printf("%d]",nums[i]);
    }
}
