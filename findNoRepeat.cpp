/* 找出字符串第一个只出现一次的字符 */
#include <cstdio>
#include <string>

char FirstNotReapeatingChar(const char *pString)
{
    if (pString == NULL)
    {
        return '\0';
    }

    const int tableSize = 256;
    unsigned int hashTable[tableSize];
    for (unsigned int i = 0; i < tableSize; ++i)
    {
        hashTable[i] = 0;
    }
    const char *pHashkey = pString;
    while (*(pHashkey)!='\0')
        hashTable[*(pHashkey++)]++;
    pHashkey = pString;
    while (*pHashkey != '\0')
    {
        if(hashTable[*pHashkey]==1)
        {
            return *pHashkey;
        }
        pHashkey++;
    }
    return '\0';
}

// ===============测试代码================
void Test(const char *pString, char expected)
{
    if (FirstNotReapeatingChar(pString) == expected)
        printf("Test passed . \n");
    else
    {
        printf("Test failed . \n");
    }
}


int main(int argc, char * argv[])
{
    Test("google",'l');
}