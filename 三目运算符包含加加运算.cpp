#include <iostream>

using namespace std;

#define FUN(X,Y) ((X) >= (Y) ? (X) : (Y))

void main(void)
{
	int arr[3] = { 1,2,3 };
	int* p = &arr[1];//在这一步时，*p=2；
	//cout << ((*p)++);
	int x = FUN((*p)++, 1);
	/*
	这一步准确的写其实步骤如下
	（(*p)++）>= (1) ? ((*p)++) : (1);
	要主要++在后是先运算或运算后++
	三目运算符
	在前面比较后，其实第一步
	2>1，然后2+1=3，所以输出（*p）++的值。此时*p=3
	因此，x=3。但是，由于后++的特殊性，输出后，才会进行++运算
	所以*p又再加了1，*p最后为4.
	*/

	printf("x=%d, *p=%d\n", x, *p);//%d这种是c语言的写法，表示十进制输出
	system("pause");
}