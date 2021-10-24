#include <iostream>
#include <math.h>

using namespace std;

bool selectSort(int array[], size_t arrLen) {//声明一个选择排序函数，定义数组及长度
    if (arrLen < 0) {
        cout << "Please check your input." << endl;
        return false;
    }//如果数组长度小于0则输出请检查你的输入
    int min_value;//定义一个最小值
    int min_pos;//定义最小值的位置
    for(int i=0;i<arrLen-1;i++)//外层循环
    {
        min_value=array[i];//首先定义array[i]为最小值
        min_pos=i;//最小值位置为i
        for(int j=i+1;j<arrLen,j++)//内层循环，循环i以后的数据
        {
            if(array[j]<min_value)//如果array[j]小于最小值
            {
                min_value=array[j];
                min_pos=j;//则交换array[j]的所有内容
            }
        }
        if(min_value<array[i])//外层循环如果内层循环里面的最小值小于array[i]
        {
            array[min_pos]=array[i];
            array[i]=min_value;//则把array[i]里面的所有内容赋给定义的最小值
        }
    }
}
void printArray(int array[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}//输出打印数组
int main()
{
    int array[]={8,4,5,1,3,2};
    arrLen=sizeof(array)/sizeof(int);
    printf(array,arrLen);
    selectSort(array,arrLen);
    printf(array,arrLen);
}
