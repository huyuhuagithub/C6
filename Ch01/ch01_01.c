#include <stdio.h>
void testpoint(int* p);
void testpoint1(int p);
int main(void)
{

    //测试在多台电脑修改代码
    int num=0;
    printf("Enter number:\t");
    scanf("%d",&num);
    printf("\tinput num it is %d\n",num);

    testpoint1(num);
    printf("testint num %d\n",num);

    testpoint(&num);
    printf("testpoint num %d sizeof (%d)\n",num ,sizeof(num));


    //printf("sizeof byte type size is (%d)\n",sizeof(byte));


    /*printf("\thello world!");*/
    getchar();
    return 0;
} 

void testpoint(int* p)
{
   (*p)++;
}
void testpoint1(int p)
{
  p= p++;
}