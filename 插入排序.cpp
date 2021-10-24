#include <iostream>
#include <math.h>

using namespace std;

bool insertSort(int array[], size_t arrLen) {//声明一个插入排序函数，定义数组和数组长度
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//如果数组长度小于0则输出请检查你的输入
   for(int i=0;i<=arrLen;i++)//外层循环
   {
       value=a[i+1];//将value定义为i后面的一个数
       for(int j=i+1;j>=0&&value<a[j-1];j--)//内层循环，将value与前面的数据进行比较
       {
           a[j]=a[j-1];//如果满足条件，则把j-1的数据赋给j
       }
    a[j]=value;//再令j的值重新等于value
   }//再次进行外层循环
}
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}//打印输出数据
int main()
{
    int array[]={8,4,5,1,3,2};
    arrayLen=sizeof(array)/sizeof(int);
    printf(array,arrayLen);
    insertSort(array,arrayLen);
    printf(array,arrayLen);
}
