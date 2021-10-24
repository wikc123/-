#include <iostream>
#include <math.h>

using namespace std;

bool bubbleSort(int array[], size_t arrLen) {
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }
//如果输入的数组长度小于0，则输出请检查你的输入

    for (int orderedNum = 0; orderedNum < arrLen; ++orderedNum) {//外层循环，排好N个数据，需要排N-1次，每次循环，排好一个数
        bool isExchanged = false;
        for (int i = 0; i < arrLen - orderedNum -1; ++i) {//内层循环，拍好一个数据，需要比较N-1-i次
            if (array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;//数据交换
                isExchanged = true;//发生数据交换
            }
        }
        if (!isExchanged) {
            break;//遍历未排序的部分未发生数据交换，说明数组有序，则跳出
        }
    }
    return true;
}
void printfArray(int array[],int arrLen)
{
   for(int i=0;i<=arrLen-1;i++)
   {
       cout<<array[i];//输出打印数组
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
