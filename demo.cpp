#include "MyStack.h"
#include "stdlib.h"
#include<iostream>
#include "Coordinate.h"
using namespace std;

//int main(void)
//{
//	MyStack<Coordinate> *pStack = new MyStack<Coordinate>(5);
//	
//	//测试push()
//	pStack->push(Coordinate(1,2));
//	pStack->push(Coordinate(3, 4));
//
//
//	//pStack->push('h');//底
//	//pStack->push('e');
//	//pStack->push('l');
//	//pStack->push('l');
//	//pStack->push('o');//顶
//
//	//测试stackTraverse(bool isFormButtom) 
//	pStack->stackTraverse(true); //参数为true从底到顶遍历栈：hello
//
//	pStack->stackTraverse(false); //参数为false从顶到底遍历栈：olleh
//
//	//测试clearStack()
////	pStack->clearStack();
//	
//
//
//
//	//测试pop()，弹出栈顶元素o
//	//char elem = 0;
//	//pStack->pop(elem);
//	//cout << endl;
//	//cout << elem << endl;
//
//
//	//测试stackLength()
//	cout << pStack->stackLength() << endl;
//
//	//测试stackEmpty()
//	if (pStack->stackEmpty())
//	{
//		cout << "栈为空" << endl;
//	}
//
//	//测试stackFull()
//	if (pStack->stackFull())
//	{
//		cout << "栈为满" << endl;
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



//*************************************栈应用----数制转换
//公式：N = (N div d) * d + N mod d(div：整除， mod:求余， N：十进制数， d：任意进制数) 短除法

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

	MyStack<int> *pStack = new MyStack<int>(30);  //创建栈指针

	int N = 2016;

	int mod = 0;

	while (N != 0)
	{
		mod = N % HEXADECIMAL;
		pStack->push(mod);
		N = N / HEXADECIMAL;
	}
	//pStack->stackTraverse(false);//从栈顶往栈底遍历,当做16进制转换时，10到15没有显示为A到F，所以进行改进

     //for (int i = pStack->stackLength - 1; i >= 0; i--)
	 //{
	 //  	num[pStack[i]];//栈没有下标操作，故使用for循环不可以
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

  栈应用---括号匹配
  描述：输入任意一组括号，可以判断括号是否匹配，即都是成双成对的
  例：匹配的：[()] [()()] [()[()]] 不匹配的：[[()]


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
				cout << "字符串括号不匹配" << endl;
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
		cout << "括号匹配" << endl;
	}
	else
	{
		cout << "括号不匹配" << endl;
	}


	delete pStack;
	pStack = NULL;

	delete pNeedStack;
	pNeedStack = NULL;

	system("pause");
	return 0;


}