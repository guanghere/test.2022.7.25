#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//
//	char arr[] = "abcd";
//
//	printf("%d", strlen(arr));
//
//	return 0;
//}


//		模拟实现一个strlen 函数 有临时变量


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "abcd";
//
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}


//		用递归写一个没有临时变量的函数

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//
//		return 1 + my_strlen(str + 1);
//
//	else
//
//		return 0;
//
//}
//
//int main()
//{
//
//	char arr[] = "abcd";
//
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}


//		递归与迭代（重复的做一件事）

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		 ret = ret * i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}



//有一些功能可以使用迭代 也可以使用递归

//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//
//	return 0;
//}


//		求第n个斐波拉契数
//	要有前两个才能求出来



//int fib(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//} 
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//
//}
			//		以上的重复计算次数太多
		//		举个栗子
//	统计第三个斐波拉契数的次数
//int count = 0;
//int fib(n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("%d\n", ret);
//
//	printf("count= %d", count);
//
//	return 0;
//
//}


//int fib( int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//
//}
//
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}



int main() {
	int a = 0;
	while (a < 3000) {
		a++;

	}
	
	printf(" i love you %d\n", a);

}