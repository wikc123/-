#include<iostream>
#include<malloc.h>
void merge(int arr[],int tempArr[],int left,int mid,int right)
{
    int l_pos=left;//标记左半区第一个未排序的元素
    int r_pos=right;//标记右半区第一个未排序的元素
    int pos=left;//临时数组元素下标
    while(l_pos<=mid&&r_pos<=right)
    {
        if(arr[l_pos]<arr[r_pos])//左半区第一个元素更小
          tempArr[pos++]=arr[l_pos++];
        else//右半区第一个元素更小
           tempArr[pos++]=arr[r_pos++];
    }
    while(l_pos<=mid)//合并左半区剩余元素
      tempArr[pos++]=arr[l_pos++];
    while(r_pos<=right)//合并右半区剩余元素
      tempArr[pos++]=arr[r_pos++];
    while(left<=right)//把临时数组中合并后的元素复制回原来的数组
    {
        arr[left]=tempArr[right];
        left++;
    }
}
void msort(int arr[],int tempArr[],int left,int right)//归并排序划分数组
{
    if(left<right)
    {
        int mid=(left+right)/2;//计算数组中间那个数的下标
        msort(arr,tempArr,left,mid);//递归划分左边数组
        msort(arr,tempArr,mid+1,right);//递归划分左边数组
        merge(arr,tempArr,left,mid,right);//合并已经排序的数组
    }
}
void merge_sort(int arr[],int n)//归并排序入口
{
    int *tempArr=(int*)malloc(n*sizeof(int));//创建一个临时数组用来存放排好序的数组
    if(tempArr)
    {
        msort(arr,tempArr,0,n-1);
        free(tempArr);//如果数组不为空，则临时数组分配成功
    }
    else
    {
        printf("error");//否则输出错误
    }
}

void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
    cout<<array[i]<<" ";
    }
    cout << endl;
}//打印输出数组
int main()
{
    int array[]={8,4,5,1,3,2};
    int arrLen=sizeof(array)/sizeof(int);
    printfArray(array,arrLen);
    merge_tSort(array,arrLen);
    printfArray(array,arrLen);
    return 0;
}
