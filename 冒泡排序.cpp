#include <iostream>
#include <math.h>

using namespace std;

bool bubbleSort(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }
//�����������鳤��С��0������������������

    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {//���ѭ�����ź�N�����ݣ���Ҫ��N-1�Σ�ÿ��ѭ�����ź�һ����
        bool isExchanged = false;
        for (int i = 0; i < arrLen - orderedNum -1; ++i) {//�ڲ�ѭ�����ĺ�һ�����ݣ���Ҫ�Ƚ�N-1-i��
            if (array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;//���ݽ���
                isExchanged = true;//�������ݽ���
            }
        }
        if (!isExchanged) {
            break;//����δ����Ĳ���δ�������ݽ�����˵����������������
        }
    }
    return true;
}
void printfArray(int array[],int arrLen)
{
   for(int i=0;i<=arrLen-1;i++)
   {
       cout<<array[i];//�����ӡ����
   }
}
int main()
{
    int array[]={3,1,6,7,2,9};
    int arrLen=sizeof(array)/sizeof(int);
    printfArray(array,arrLen);
    bubbleSort(array,arrLen);
    cout<<endl;
    printfArray(array,arrLen);
    return 0;
}
