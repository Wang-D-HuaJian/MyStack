#include "MyStack.h"
#include "stdlib.h"
#include<iostream>
#include "Coordinate.h"
using namespace std;

//int main(void)
//{
//	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);
//	
//	//����push()
//	pStack->push(Coordinate(1,2));
//	pStack->push(Coordinate(3, 4));
//
//
//	//pStack->push('h');//��
//	//pStack->push('e');
//	//pStack->push('l');
//	//pStack->push('l');
//	//pStack->push('o');//��
//
//	//����stackTraverse(bool isFormButtom) 
//	pStack->stackTraverse(true); //����Ϊtrue�ӵ׵�������ջ��hello
//
//	pStack->stackTraverse(false); //����Ϊfalse�Ӷ����ױ���ջ��olleh
//
//	//����clearStack()
////	pStack->clearStack();
//	
//
//
//
//	//����pop()������ջ��Ԫ��o
//	//char elem = 0;
//	//pStack->pop(elem);
//	//cout << endl;
//	//cout << elem << endl;
//
//
//	//����stackLength()
//	cout << pStack->stackLength() << endl;
//
//	//����stackEmpty()
//	if (pStack->stackEmpty())
//	{
//		cout << "ջΪ��" << endl;
//	}
//
//	//����stackFull()
//	if (pStack->stackFull())
//	{
//		cout << "ջΪ��" << endl;
//	}
//
//
//
//
//	delete pStack;
//	pStack = nullptr;


//	system("pause");
//	return 0;
//}



//*************************************ջӦ��----����ת��
//��ʽ��N = (N div d) * d + N mod d(div�������� mod:���࣬ N��ʮ�������� d�����������) �̳���

/*
   N                N div 8            N mod 8
  1348		   		 168                 4
   168                21                 0
    21                 2                 5
     2                 0                 2  
#define BINARY 2;
#define OCTONARY 8;
#define HEXADECIMAL 16;

int main(void)
{
	char num[] = "0123456789ABCDEF";

	MyStack<int> *pStack = new MyStack<int>(30);  //����ջָ��

	int N = 2016;

	int mod = 0;

	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}
	//pStack->stackTraverse(false);//��ջ����ջ�ױ���,����16����ת��ʱ��10��15û����ʾΪA��F�����Խ��иĽ�

     //for (int i = pStack->stackLength - 1; i >= 0; i--)
	 //{
	 //  	num[pStack[i]];//ջû���±��������ʹ��forѭ��������
	 //}
	


	while (!pStack->stackEmpty())
	{
		int elem = 0;
		pStack->pop(elem);
		cout << num[elem];

	}


	delete pStack;
	pStack = nullptr;
	
	system("pause");
	return 0;
}
*/

/**************************************************************************************************/
/*

  ջӦ��---����ƥ��
  ��������������һ�����ţ������ж������Ƿ�ƥ�䣬�����ǳ�˫�ɶԵ�
  ����ƥ��ģ�[()] [()()] [()[()]] ��ƥ��ģ�[[()]


*/

int main(void)
{
	MyStack<char> *pStack = new MyStack<char>(30);
	MyStack<char>  *pNeedStack = new MyStack<char>(30);


	char str[] = "[()]]";

	char currentNeed = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != currentNeed)
		{
			pStack->push(str[i]);
			switch (str[i])
			{
			case '[':
				if (currentNeed != 0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ']';
				break;
			case '(':
				if (currentNeed != 0)
				{
					pNeedStack->push(currentNeed);
				}
				currentNeed = ')';
				break;
			default:
				cout << "�ַ������Ų�ƥ��" << endl;
				system("pause");
				return 0;
			}
		}
		else
		{
			char elem;
			pStack->pop(elem);
			if (!pNeedStack->pop(currentNeed))
			{
				currentNeed = 0;
			}
		}
	}

	if (pStack->stackEmpty())
	{
		cout << "����ƥ��" << endl;
	}
	else
	{
		cout << "���Ų�ƥ��" << endl;
	}


	delete pStack;
	pStack = NULL;

	delete pNeedStack;
	pNeedStack = NULL;

	system("pause");
	return 0;


}