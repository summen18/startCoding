/* 赋值运算符函数 */
/* 为类型CMyString的声明添加赋值运算符函数 */
#include <cstring>
#include <cstdio>

class CMyString
{
public:
    CMyString(char *pData = nullptr);
    CMyString(const CMyString &str);
    ~CMyString(void);

    CMyString &operator=(const CMyString &str);

    void Print();

private:
    char *m_pData;
};

CMyString::CMyString(char *pData)
{
    if (pData == NULL)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int length = strlen(pData);
        m_pData = new char[length+1];
        strcpy(m_pData,pData);
    }
    
}

CMyString::CMyString(const CMyString &str)
{
    int length = strlen(str.m_pData);
    m_pData = new char[length+1];
    strcpy(m_pData,str.m_pData);
}

CMyString::~CMyString()
{
    delete[] m_pData;
}

CMyString& CMyString::operator=(const CMyString& str)
{
    if(this==&str)
    {
        return *this;
    }
    delete [] m_pData;
    m_pData = NULL;

    m_pData = new char[strlen(str.m_pData)+1];
    strcpy(m_pData,str.m_pData);

    return *this;
}