/* 找出数组中的重复数字 
    在一个长度为n的数组里的所有数字都在0-n-1的范围内。找出数组中任意重复的数字*/

#include <cstdio>

bool duplicate(int numbers[], int length, int *duplication)
{
    if (numbers == NULL || length <= 0)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] < 0 || numbers[i] > length - 1)
        {
            return false;
        }
    }
    for (int i = 0; i < length; i++)
    {
        while (numbers[i] != i)
        {
            if (numbers[i] == numbers[numbers[i]])
            {
                *duplication = numbers[i];
                return true;
            }

            //交换numbers[i]和numbers[numbers[i]]
            int temp;
            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    return false;
}