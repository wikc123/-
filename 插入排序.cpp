#include <iostream>
#include <math.h>

using namespace std;

bool insertSort(int array[], size_t arrLen) {//����һ��������������������������鳤��
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//������鳤��С��0����������������
   for(int i=0;i<=arrLen;i++)//���ѭ��
   {
       value=a[i+1];//��value����Ϊi�����һ����
       for(int j=i+1;j>=0&&value<a[j-1];j--)//�ڲ�ѭ������value��ǰ������ݽ��бȽ�
       {
           a[j]=a[j-1];//����������������j-1�����ݸ���j
       }
    a[j]=value;//����j��ֵ���µ���value
   }//�ٴν������ѭ��
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
    insertSort(array,arrayLen);
    printf(array,arrayLen);
}
