/* �ҳ������е��ظ����� 
    ��һ������Ϊn����������������ֶ���0-n-1�ķ�Χ�ڡ��ҳ������������ظ�������*/

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

            //����numbers[i]��numbers[numbers[i]]
            int temp;
            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
    return false;
}