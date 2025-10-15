void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void rotate(int* nums, int numsSize, int k) {
    if(numsSize==0){return;}
    k=k%numsSize;
    if(k==0){return;}
    int* arr=(int*)malloc(numsSize*sizeof(int));
    int i=numsSize-k;
    int x=0;
    for(int j=i;j<numsSize;j++){
        arr[x++]=nums[j];
    }
    for(int j=0;j<i;j++){
        arr[x++]=nums[j];
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=arr[i];
    }
}
