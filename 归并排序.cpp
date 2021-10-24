#include<iostream>
#include<malloc.h>
void merge(int arr[],int tempArr[],int left,int mid,int right)
{
    int l_pos=left;//����������һ��δ�����Ԫ��
    int r_pos=right;//����Ұ�����һ��δ�����Ԫ��
    int pos=left;//��ʱ����Ԫ���±�
    while(l_pos<=mid&&r_pos<=right)
    {
        if(arr[l_pos]<arr[r_pos])//�������һ��Ԫ�ظ�С
          tempArr[pos++]=arr[l_pos++];
        else//�Ұ�����һ��Ԫ�ظ�С
           tempArr[pos++]=arr[r_pos++];
    }
    while(l_pos<=mid)//�ϲ������ʣ��Ԫ��
      tempArr[pos++]=arr[l_pos++];
    while(r_pos<=right)//�ϲ��Ұ���ʣ��Ԫ��
      tempArr[pos++]=arr[r_pos++];
    while(left<=right)//����ʱ�����кϲ����Ԫ�ظ��ƻ�ԭ��������
    {
        arr[left]=tempArr[right];
        left++;
    }
}
void msort(int arr[],int tempArr[],int left,int right)//�鲢���򻮷�����
{
    if(left<right)
    {
        int mid=(left+right)/2;//���������м��Ǹ������±�
        msort(arr,tempArr,left,mid);//�ݹ黮���������
        msort(arr,tempArr,mid+1,right);//�ݹ黮���������
        merge(arr,tempArr,left,mid,right);//�ϲ��Ѿ����������
    }
}
void merge_sort(int arr[],int n)//�鲢�������
{
    int *tempArr=(int*)malloc(n*sizeof(int));//����һ����ʱ������������ź��������
    if(tempArr)
    {
        msort(arr,tempArr,0,n-1);
        free(tempArr);//������鲻Ϊ�գ�����ʱ�������ɹ�
    }
    else
    {
        printf("error");//�����������
    }
}

void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
    cout<<array[i]<<" ";
    }
    cout << endl;
}//��ӡ�������
int main()
{
    int array[]={8,4,5,1,3,2};
    int arrLen=sizeof(array)/sizeof(int);
    printfArray(array,arrLen);
    merge_tSort(array,arrLen);
    printfArray(array,arrLen);
    return 0;
}
