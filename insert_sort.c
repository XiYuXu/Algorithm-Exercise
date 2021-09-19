#include <stdio.h>

void insert_sort(int *nums,int numsSize){
    int i;
    int temp;
    for(int j=1;j<numsSize;j++){
        temp = nums[j];
        for(i=j-1;i>=0;i--){
            if(nums[i]<temp){
                nums[i+1] = nums[i];
            }else{
                break;
            }
        }
        nums[i+1] = temp;
    }

    for(int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
}

int main(){
    int nums[] = {0,3,1,2,9,4,1,7,-16};
    insert_sort(nums,sizeof(nums)/sizeof(int));
    return 0;
}