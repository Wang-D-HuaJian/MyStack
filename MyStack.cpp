//#include "MyStack.h"
//#include<iostream>
//using namespace std;

//MyStack::MyStack(int size)    //���캯��
//{
//	m_iSize = size;
//	m_pBuffer = new char[size];
//	m_iTop = 0;   //��ʾ��ǰջΪ��ջ
//}
//
//MyStack::~MyStack()
//{
//	delete[] m_pBuffer;
//}
//
//bool MyStack::stackEmpty()
//{
//	if (0 == m_iTop)  //if(m_iTop==0)ǰ��������������ֵ�����ǱȽϵĴ������ʱ�ᱨ�����������Ƚϸ�
//	{
//		return true;
//	}
//	return false;
//}
//
//bool MyStack::stackFull()
//{
//	if (m_iTop == m_iSize)//>=Ҳ��
//	{
//		return true;
//	}
//	return false;
//}
//
//void MyStack::clearStack()
//{
//	m_iTop = 0;
//}
//
//int MyStack::stackLength()
//{
//	return m_iTop;
//}
//
//bool MyStack::push(char elem)
//{
//	if (stackFull())   //��ջ�Ѿ�����ʱ
//	{
//		return false;
//	}
//	m_pBuffer[m_iTop] = elem;
//	m_iTop++;
//	return true;
//}
//
////char MyStack::pop() //������ֵΪcharʱ
////{
////	if (stackEmpty())
////	{
////		throw 1;
////	}
////	else
////	{
////		m_iTop--;
////		return m_pBuffer[m_iTop];
////	}
////}
//
//bool MyStack::pop(char &elem)
//{
//	if (stackEmpty())
//	{
//		return false;
//	}
//	m_iTop--;
//	elem = m_pBuffer[m_iTop];
//	return false;
//}
//
//void MyStack::stackTraverse(bool isFormButtom)
//{
//	if (isFormButtom)
//	{
//		for (int i = 0; i < m_iTop; i++)
//		{
//			cout << m_pBuffer[i] << ",";
//		}
//	}
//	else
//	{
//		for (int i = m_iTop - 1; i >= 0; i--)
//		{
//			cout << m_pBuffer[i] << ",";
//		}
//	}
//
//
//}


//����ջ��ʹ��ʹ���ڸ��ϵ����ݽṹ
//MyStack::MyStack(int size)    //���캯��
//{
//	m_iSize = size;
//	m_pBuffer = new Coordinate[size];
//	m_iTop = 0;   //��ʾ��ǰջΪ��ջ
//}
//
//MyStack::~MyStack()
//{
//	delete[] m_pBuffer;
//}
//
//bool MyStack::stackEmpty()
//{
//	if (0 == m_iTop)  //if(m_iTop==0)ǰ��������������ֵ�����ǱȽϵĴ������ʱ�ᱨ�����������Ƚϸ�
//	{
//		return true;
//	}
//	return false;
//}
//
//bool MyStack::stackFull()
//{
//	if (m_iTop == m_iSize)//>=Ҳ��
//	{
//		return true;
//	}
//	return false;
//}
//
//void MyStack::clearStack()
//{
//	m_iTop = 0;
//}
//
//int MyStack::stackLength()
//{
//	return m_iTop;
//}
//
//bool MyStack::push(Coordinate elem)
//{
//	if (stackFull())   //��ջ�Ѿ�����ʱ
//	{
//		return false;
//	}
//	m_pBuffer[m_iTop] = elem;
//	m_iTop++;
//	return true;
//}
//
//
//bool MyStack::pop(Coordinate &elem)
//{
//	if (stackEmpty())
//	{
//		return false;
//	}
//	m_iTop--;
//	elem = m_pBuffer[m_iTop];
//	return false;
//}
//
//void MyStack::stackTraverse(bool isFormButtom)
//{
//	if (isFormButtom)
//	{
//		for (int i = 0; i < m_iTop; i++)
//		{
//			//cout << m_pBuffer[i] << ",";//���������������<<���
//			m_pBuffer[i].printCoordinate();
//		}
//	}
//	else
//	{
//		for (int i = m_iTop - 1; i >= 0; i--)
//		{
//			//cout << m_pBuffer[i] << ",";
//			m_pBuffer[i].printCoordinate();
//		}
//	}
//
//
//}



////****************************������ģ�����ջΪͨ��ջ
//template<typedef T>
//MyStack<T>::MyStack(int size)    //���캯��
//{
//	m_iSize = size;
//	m_pBuffer = new T[size];
//	m_iTop = 0;   //��ʾ��ǰջΪ��ջ
//}
//
//template<typedef T>
//MyStack<T>::~MyStack()
//{
//	delete[]m_pBuffer;
//}
//
//template<typedef T>
//bool MyStack<T>::stackEmpty()
//{
//	if (0 == m_iTop)  //if(m_iTop==0)ǰ��������������ֵ�����ǱȽϵĴ������ʱ�ᱨ�����������Ƚϸ�
//	{
//		return true;
//	}
//	return false;
//}
//
//template<typedef T>
//bool MyStack<T>::stackFull()
//{
//	if (m_iTop == m_iSize)//>=Ҳ��
//	{
//		return true;
//	}
//	return false;
//}
//
//template<typedef T>
//void MyStack<T>::clearStack()
//{
//	m_iTop = 0;
//}
//
//template<typedef T>
//int MyStack<T>::stackLength()
//{
//	return m_iTop;
//}
//
//template<typedef T>
//bool MyStack<T>::push(T elem)
//{
//	if (stackFull())   //��ջ�Ѿ�����ʱ
//	{
//		return false;
//	}
//	m_pBuffer[m_iTop] = elem;
//	m_iTop++;
//	return true;
//}
//
//template<typedef T>
//bool MyStack<T>::pop(T &elem)
//{
//	if (stackEmpty())
//	{
//		return false;
//	}
//	m_iTop--;
//	elem = m_pBuffer[m_iTop];
//	return false;
//}
//
//template<typedef T>
//void MyStack<T>::stackTraverse(bool isFormButtom)
//{
//	if (isFormButtom)
//	{
//		for (int i = 0; i < m_iTop; i++)
//		{
//			cout << m_pBuffer[i];//���������������<<���
//			//m_pBuffer[i].printCoordinate();
//		}
//	}
//	else
//	{
//		for (int i = m_iTop - 1; i >= 0; i--)
//		{
//			cout << m_pBuffer[i;
//			//m_pBuffer[i].printCoordinate();
//		}
//	}
//
//
//}