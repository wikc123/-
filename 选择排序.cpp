#include <iostream>
#include <math.h>

using namespace std;

bool selectSort(int array[], size_t arrLen) {//����һ��ѡ�����������������鼰����
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//������鳤��С��0����������������
    int min_value;//����һ����Сֵ
    int min_pos;//������Сֵ��λ��
    for(int i=0;i<arrLen-1;i++)//���ѭ��
    {
        min_value=array[i];//���ȶ���array[i]Ϊ��Сֵ
        min_pos=i;//��Сֵλ��Ϊi
        for(int j=i+1;j<arrLen,j++)//�ڲ�ѭ����ѭ��i�Ժ������
        {
            if(array[j]<min_value)//���array[j]С����Сֵ
            {
                min_value=array[j];
                min_pos=j;//�򽻻�array[j]����������
            }
        }
        if(min_value<array[i])//���ѭ������ڲ�ѭ���������СֵС��array[i]
        {
            array[min_pos]=array[i];
            array[i]=min_value;//���array[i]������������ݸ����������Сֵ
        }
    }
}
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}//�����ӡ����
int main()
{
    int array[]={8,4,5,1,3,2};
    arrLen=sizeof(array)/sizeof(int);
    printf(array,arrLen);
    selectSort(array,arrLen);
    printf(array,arrLen);
}
