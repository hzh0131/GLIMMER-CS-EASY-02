#include <stdio.h>

struct PerInfo
   {
       char sex;//占用第0字节
       char name[10];//偏移量为1,是1的倍数,不补充空白字节，从第1字节开始占
       int age;//偏移量为10，不是4的倍数，需要补1个空白字节，从12开始占字节
       double height;//偏移量为16,是8的倍数,不需要补空白字节
   };
typedef struct PerInfo information;
int main()
{
   information p;
   int a=sizeof(p);
   printf("%d",a);
   return 0;


}