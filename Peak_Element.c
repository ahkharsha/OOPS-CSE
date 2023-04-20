//C program to find the peak element
int findPeakElement(int* nums, int numsSize){
    int i=1;
        if(numsSize==1)
            return i-1;
    for(i=1;i<=numsSize-1;i++){
        if(nums[i-1]<nums[i]&&i==numsSize-1)
            return i;
        else if(nums[i-1]<nums[i]&&nums[i+1]<nums[i])
            return i;
    }
    return 0;   

}
