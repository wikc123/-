#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
void partition(int arr[];int low,int high)
{
    int i=low-1;
    int j=high;
    int pivot=arr[high];
    while(1)
    {
        while(arr[++i]<pivot);
        while(arr[--j]<pivot);
        if(i<j)
         swap(&arr[i],&arr[j]);
        else
          break;
    }//����ŦԪ�طŵ���ȷ��λ������
    swap(&arr[i],&arr[high]);
    return i;
}
void qsort(int arr[],int low,int high)//��������
{
    if(low<high)
    {
        int mid=partition(arr,low,high);
        qsort(arr,low,mid-1);
        qsort(arr,mid+1,high);
    }
}
void quicksort(int arr[],int n)//�����������
{
    qsort(arr,0,n-1);
}
void swap(int *a,int *b)//����������������ֵ
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}//��ӡ�������
int main()
{
    int array[]={8,4,5,1,3,2};
    arrayLen=sizeof(array)/sizeof(int);
    printf(array,arrayLen);
    quickSort(array,arrayLen);
    printf(array,arrayLen);
}
