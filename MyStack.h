#ifndef MYSTACK_H
#define MYSTACK_H

//class MyStack
//{
//public:
//	MyStack(int size);    //���캯��
//	~MyStack();           //��������
//	bool stackEmpty();    //�ж�ջ�ǹ�Ϊ��
//	bool stackFull();     //�ж�ջ�ǹ�����
//	void clearStack();    //���ջ
//	int stackLength();    //ջ������Ԫ�صĸ���
//	bool push(char elem); //��Ԫ��elemѹ��ջ��
//	bool pop(char &elem); //����ջ��Ԫ��
//	void stackTraverse(bool isFormButtom); //����ջ������Ԫ��
//
//
//
//private:
//	char *m_pBuffer;    //ջ�ռ�ָ��
//	int m_iSize;        //ջ����
//	int m_iTop;			//ջ����ջ��Ԫ�ظ���
//};



//////����ջ��ʹ��ʹ���ڸ�����������
//class MyStack
//{
//public:
//	MyStack(int size);    //���캯��
//	~MyStack();           //��������
//	bool stackEmpty();    //�ж�ջ�ǹ�Ϊ��
//	bool stackFull();     //�ж�ջ�ǹ�����
//	void clearStack();    //���ջ
//	int stackLength();    //ջ������Ԫ�صĸ���
//	bool push(Coordinate elem); //��Ԫ��elemѹ��ջ��
//	bool pop(Coordinate &elem); //����ջ��Ԫ��
//	void stackTraverse(bool isFormButtom); //����ջ������Ԫ��
//
//
//
//private:
//	Coordinate *m_pBuffer;    //ջ�ռ�ָ��
//	int m_iSize;        //ջ����
//	int m_iTop;			//ջ����ջ��Ԫ�ظ���
//};

//*****************************������ģ��������ջ��ʹ����ͨ��ջ
template<typename T>
class MyStack
{
public:
	MyStack(int size);    //���캯��
	~MyStack();           //��������
	bool stackEmpty();    //�ж�ջ�ǹ�Ϊ��
	bool stackFull();     //�ж�ջ�ǹ�����
	void clearStack();    //���ջ
	int stackLength();    //ջ������Ԫ�صĸ���
	bool push(T elem); //��Ԫ��elemѹ��ջ��
	bool pop(T &elem); //����ջ��Ԫ��
	void stackTraverse(bool isFormButtom); //����ջ������Ԫ��



private:
	T *m_pBuffer;    //ջ�ռ�ָ��
	int m_iSize;        //ջ����
	int m_iTop;			//ջ����ջ��Ԫ�ظ���
};

//****************************������ģ�����ջΪͨ��ջ
template<typename T>
MyStack<T>::MyStack(int size)    //���캯��
{
	m_iSize = size;
	m_pBuffer = new T[size];
	m_iTop = 0;   //��ʾ��ǰջΪ��ջ
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete[]m_pBuffer;
}

template<typename T>
bool MyStack<T>::stackEmpty()
{
	if (0 == m_iTop)  //if(m_iTop==0)ǰ��������������ֵ�����ǱȽϵĴ������ʱ�ᱨ�����������Ƚϸ�
	{
		return true;
	}
	return false;
}

template<typename T>
bool MyStack<T>::stackFull()
{
	if (m_iTop == m_iSize)//>=Ҳ��
	{
		return true;
	}
	return false;
}

template<typename T>
void MyStack<T>::clearStack()
{
	m_iTop = 0;
}

template<typename T>
int MyStack<T>::stackLength()
{
	return m_iTop;
}

template<typename T>
bool MyStack<T>::push(T elem)
{
	if (stackFull())   //��ջ�Ѿ�����ʱ
	{
		return false;
	}
	m_pBuffer[m_iTop] = elem;
	m_iTop++;
	return true;
}

template<typename T>
bool MyStack<T>::pop(T &elem)
{
	if (stackEmpty())
	{
		return false;
	}
	m_iTop--;
	elem = m_pBuffer[m_iTop];
	return false;
}

template<typename T>
void MyStack<T>::stackTraverse(bool isFormButtom)
{
	if (isFormButtom)    
	{
		for (int i = 0; i < m_iTop; i++)
		{
			cout << m_pBuffer[i];   //Ϊtrue����ջ�� 0 ��ջ�� m_iTop ����
			//m_pBuffer[i].printCoordinate();
		}
	}
	else
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i];    //Ϊfalse����ջ�� m_iTop ��ջ�� 0 ����
			//m_pBuffer[i].printCoordinate();
		}
	}


}

#endif