//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	getchar();
//	return 0;
//
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	 
//	getchar();
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//	//printf("age = %d\n", age);
//	//printf("price = %f\n", price);
//
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//
//// 1. ȫ�ֱ�����д������������к���������
//int global_age = 20; 
//
//void testFunction() {
//    // 2. �ֲ�������ֻ���� testFunction ����
//    int local_score = 100; 
//    
//    printf("�ڲ��Ժ����ڲ���global_age = %d\n", global_age); // ���Է���
//    printf("�ڲ��Ժ����ڲ���local_score = %d\n", local_score); // ���Է���
//    
//    // printf("%d", main���local_num);  // ��������������Կ����� main ��� local_num
//}
//
//int main() {
//    // 3. �ֲ�������ֻ���� main ��������
//    int local_num = 66; 
//    
//    printf("��main�����ڲ���global_age = %d\n", global_age); // ���Է���
//    printf("��main�����ڲ���local_num = %d\n", local_num); // ���Է���
//    
//    // printf("%d", local_score); // �����������޷����� testFunction ��� local_score
//    
//    testFunction(); // ���ú���
//    
//    getchar();
//    return 0;
//}



//int num = 10; // ȫ�ֱ���
//
//int main() {
//    int num = 20; // �ֲ�����
//    printf("%d", num); // ������� 20������ 10���ֲ�������ȫ�ֵ�ס�ˡ�
//    
//    // �������ǿ����ȫ�ֱ��������� ::num��C++�﷨����C������û����ƣ�ֻ�ܸ�����
//    getchar();
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS  // ��� VS �� scanf ����������

//#include <stdio.h>
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0; // ��ʼ��
//
//    // ����2������
//    printf("��������������(�ÿո����): ");
//    scanf("%d %d", &num1, &num2); // ע������Ķ��źͷֺű�����Ӣ��
//
//    // ���
//    int sum = num1 + num2;
//
//    // ���
//    printf("����֮��Ϊ: %d\n", sum);
//
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf("%d %d", &num1, &num2);
//
//	sum = num1 + num2;
//
//	printf("%d\n", sum);
//	//scanf("%d %d", &num1, &num2);//��ʱ����
//	//getchar();//һ��
//	system("pause");  //ֱ��ͣ���밴���������               //              �������ʾ��3�ִ�������            //
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);//#define _CRT_SECURE_NO_WARNINGS  // ��� VS �� scanf ����������
//	int sum = num1 + num2;//VS2010Ĭ��ʹ�õ���C89��׼(һ�����ϵı�׼)�������׼��һ���ǳ�����Ĺ��:��һ��������}���棬���еı�������(Ҳ���Ǵ�int��double��Щ���͵����)������ȫ��д����ǰ��//
//
//	printf("%d\n", sum);
//	getchar();
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	getchar();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//#define MAX 100
//#define STR "abcdef"
//int main()
//{
//	int a = 0;                    û��
//	printf("%d\n", MAX);
//	a = MAX;//int a = MAX;        �����������⣿������
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	/*MAX = 200;*/
//	/*getchar();*/
//	system("pause");
//	return 0;
//}

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	int num = 10;
//	printf("%d\n", num);
//	num = 20;
//	printf("%d\n", num);
//
//	enum Color c = RED
//
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int len1 = 0;
//	//int len2 = 0;
//	//int len3 = 0;
//	//int len4 = 0;
//	/*char ch = 'w';*/ 
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f'};
//	char arr3[] = {'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr1);
//    printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	len1 = strlen("abc");
//	printf("%d\n", len1);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//
//	getchar();
//	return 0;
//}

//#include<string.h>
//#include <stdio.h>
//int main()
//{
//	//char str[] = "c:\test\628\test.c"; // �ȶ���
//	////printf("%s\n", "(are you ok??)");
//	////printf("are u ok??\n");
//	////printf("c:\\test\\test.c\n");
//	////printf("c:\test\test.c\n");
//	////printf("\\a");
//	////printf("\a\n");
//	////printf("abc\ndef666\rghij\n");
//	////printf("%c\n", '\x60');
//	////printf("%c\n", '\x63');
//	////printf("%c\n", '\x063');
//	////printf("%c\n", '\130');
//	///*printf("%s\n", '\130');*/
//	////char str[] = "X";
// ////   printf("%s\n", str);     // ���: X
//	////printf("%s\n", "X");     // ���: X
//	//printf("%d\n", strlen("c:\test\628\test.c"));
//	////char str[] = "c:\test\628\test.c"; // �ȶ���
// //   printf("%d\n", strlen(str));        // �ٴ�������
//
//	//printf("%u\n", sizeof("c:\test\628\test.c")); 
//

//������������������������������������strlen��sizeof�Լ�����[]��ʹ�ã�'' and ""��\0���������������������������������
//	char arr[] = {'b', 'i', 't'};
//	char arr1[8] = {'b', 'i', 't'};
//	char arr2[] = {"bit"};
//	char arr3[] = {"b,i,t"};
//	char arr4[8] = {"b,i,t"};
//	char arr5[8] = {"bit"};
//	char arr6[] = {1,2,3};
//	char arr7[8] = {1,2,3};
//	char arr8[] = {'1','2','3'};
//	char arr9[8] = {'1','2','3'};
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", sizeof(arr1));
//
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr2));
//
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", sizeof(arr3));
//
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", sizeof(arr4));
//
//	printf("%d\n", strlen(arr5));
//	printf("%d\n", sizeof(arr5));
//
//	printf("%d\n", strlen(arr6));
//	printf("%d\n", sizeof(arr6));
//
//	printf("%d\n", strlen(arr7));
//	printf("%d\n", sizeof(arr7));
//
//	printf("%d\n", strlen(arr8));
//	printf("%d\n", sizeof(arr8));
//
//	printf("%d\n", strlen(arr9));
//	printf("%d\n", sizeof(arr9));
//
//	getchar();
//	return 0;
//}
//������������������������������������strlen��sizeof�Լ�����[]��ʹ�ã�'' and ""��\0���������������������������������




//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��0/1��?\n");
//	scanf("%d", &input);
//
//	if(input == 1)
//	{
//		printf("nb666\n");
//		getchar();
//	}
//	else
//	{
//		printf("lshhh\n");
//		getchar();
//	}
//	
//	system("pause");
//	/*getchar();*/
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	printf("��ʼѧϰ\n");
//
//	while(day<730)
//	{
//		printf("����ѧϰ��%d��\n", day);
//		day++;
//	}
//	if(day >= 730)
//	{
//		printf("nb666\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	system("pause");
//	return 0;
//}

//int add(int x, int y)
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int add(int x, int y)
//	{
//		return (x + y);
//	}
//
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum = 0;
//	int t1 = 0;
//	int t2 = 0;
//	int ret = 0;
//	scanf("%d %d", &n1, &n2);
//	/*int sum = add(n1, n2);*/
//	sum = add(n1, n2);
//	t1 = 100;
//	t2 = 300;
//	add(t1, t2);
//	ret = add(t1, t2);
//	printf("%d\n", sum);
//	printf("%d\n", ret);
//	//getchar();
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while(i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	getchar();
//
//	printf("%d\n", sizeof("abc\0def"));
//	printf("%d\n", strlen("abc\0def"));
//	
//	system("pause");
//	return 0;
//}


//int Max(int x, int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = 0;
//
//	//scanf("%d %d",&a, &b);
//	//if(a > b)
//	//{
//	//	printf("%d\n", a);
//	//	/*system("pause");*/
//	//}
//	//else
//	//{
//	//	printf("%d\n", b);
//	//	/*system("pause");*/
//	//}
//
//	scanf("%d %d",&a, &b);
//	r = Max(a, b);
//	printf("%d\n", r);
//
//	system("pause");
//	return 0;
//
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d\n", &x);
//	if(x == 0)
//	{
//		printf("y=%d\n", 0);
//	}
//	else
//	{
//		if(x > 0)
//		{
//			printf("y=%d\n", -1);
//		}
//		else
//		{
//			printf("y=%d\n", 1);
//		}
//	}
//	system("pause");
//	return 0;
//}
//scanf���治�ܼ�\n,����Ҫ����һ���ǻس��ǿո�    ==�����ж����

//int main()
//{
	/*һЩ������ŵ�ʹ��*/
	//int a = 7 / 2;
	//int b = 7 % 2;
	//float c = 7 / 2.0;
	//int d = 7 / 2.0;   //    %  ��ȡ��

	//printf("%d\n", a);
	//printf("%d\n", b);
	//printf("%f\n", c);
	//printf("%.2f\n", c);
	//printf("%d\n", d);
	//int a = 0;
	//int b = 3;
	//a = 20;
	//b += a;
	//a -= 3;
	//printf("%d\n", b);
	//printf("%d\n", a);

	/*���ֽڴ�С��sizeof�ǵ�Ŀ�����
	int a = 10;
	int arr[10] = {0};

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof a);

	���ܹ�ʽ>>>>>>>>������Ԫ�ظ���
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));*/


	/*++��--��ǰ�������*/
//	int a = 10;
//
//	int b = a++;
//	//int b = ++a;
//
//	//int b = a--;
//	//int b = --a;
//	
//	printf("%d\n", a);
//	printf("%d\n", b);
//


	/*ǿ��ת��*/
	//int a = (int) 3.14;
	//printf("%d\n", a);


    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int n = 3;
    //arr[n] = 20;//[]�����±����ò�����  arr��3����[]�Ĳ�����
    //printf("%d\n", arr[3]);



//	system("pause");
//	return 0;
//}




int main()
{
	/*typedef unsigned int uint;*/
	//int ch = 0;
	//while((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	/*int ch = 0;
	ch = getchar();
	putchar(ch);
*/


//	int ch = 0;
//    int ret = 0;
//	int mm = 0;
//	char password[20] = {0};
//printf("����������:>");
//scanf("%s", password);
//
//// ��ջ�����
////int ch = 0;
////int ret = 0;
//while ((ch = getchar()) != '\n') 
//{
//    ; // ��ѭ���壬ֻΪ�Ѳ����ַ��Ե�
//}
//
//printf("��ȷ������(Y/N):>");
//ret = getchar();
//
//if ('Y' == ret)
//{
//    /*printf("Yes");*/
//	printf("Yes, ������: %s\n", password); 
//}
//else 
//{
//    printf("No\n");
//}


    //int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};
    //int i = 0;
    //int sz = sizeof(arr)/sizeof(arr[0]);
    //
    //while(i<sz)
    //{
    //    printf("%c", arr[i]);
    //    i++;
    //}
    
   /* int a = 0;
    while (scanf("%d", &a) != 1) 
   {
    printf("����������������룺");
       while (getchar() != '\n');
    }
    printf("a = %d\n", a);*/

	system("pause");
	return 0;
}
