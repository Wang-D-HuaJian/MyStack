#ifndef MYSTACK_H
#define MYSTACK_H

//class MyStack
//{
//public:
//	MyStack(int size);    //构造函数
//	~MyStack();           //析构函数
//	bool stackEmpty();    //判断栈是够为空
//	bool stackFull();     //判断栈是够已满
//	void clearStack();    //清空栈
//	int stackLength();    //栈中已有元素的个数
//	bool push(char elem); //将元素elem压入栈顶
//	bool pop(char &elem); //弹出栈顶元素
//	void stackTraverse(bool isFormButtom); //遍历栈中所有元素
//
//
//
//private:
//	char *m_pBuffer;    //栈空间指针
//	int m_iSize;        //栈容量
//	int m_iTop;			//栈顶，栈中元素个数
//};



//////改造栈，使其使用于复合数据类型
//class MyStack
//{
//public:
//	MyStack(int size);    //构造函数
//	~MyStack();           //析构函数
//	bool stackEmpty();    //判断栈是够为空
//	bool stackFull();     //判断栈是够已满
//	void clearStack();    //清空栈
//	int stackLength();    //栈中已有元素的个数
//	bool push(Coordinate elem); //将元素elem压入栈顶
//	bool pop(Coordinate &elem); //弹出栈顶元素
//	void stackTraverse(bool isFormButtom); //遍历栈中所有元素
//
//
//
//private:
//	Coordinate *m_pBuffer;    //栈空间指针
//	int m_iSize;        //栈容量
//	int m_iTop;			//栈顶，栈中元素个数
//};

//*****************************利用类模板来改造栈，使其变成通用栈
template<typename T>
class MyStack
{
public:
	MyStack(int size);    //构造函数
	~MyStack();           //析构函数
	bool stackEmpty();    //判断栈是够为空
	bool stackFull();     //判断栈是够已满
	void clearStack();    //清空栈
	int stackLength();    //栈中已有元素的个数
	bool push(T elem); //将元素elem压入栈顶
	bool pop(T &elem); //弹出栈顶元素
	void stackTraverse(bool isFormButtom); //遍历栈中所有元素



private:
	T *m_pBuffer;    //栈空间指针
	int m_iSize;        //栈容量
	int m_iTop;			//栈顶，栈中元素个数
};

//****************************利用类模板改造栈为通用栈
template<typename T>
MyStack<T>::MyStack(int size)    //构造函数
{
	m_iSize = size;
	m_pBuffer = new T[size];
	m_iTop = 0;   //表示当前栈为空栈
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete[]m_pBuffer;
}

template<typename T>
bool MyStack<T>::stackEmpty()
{
	if (0 == m_iTop)  //if(m_iTop==0)前面那种在遇到赋值而不是比较的错误操作时会报错，这样质量比较高
	{
		return true;
	}
	return false;
}

template<typename T>
bool MyStack<T>::stackFull()
{
	if (m_iTop == m_iSize)//>=也行
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
	if (stackFull())   //当栈已经满了时
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
			cout << m_pBuffer[i];   //为true，从栈底 0 往栈顶 m_iTop 遍历
			//m_pBuffer[i].printCoordinate();
		}
	}
	else
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i];    //为false，从栈顶 m_iTop 往栈底 0 遍历
			//m_pBuffer[i].printCoordinate();
		}
	}


}

#endif