#include <stdio.h>
#include <stddef.h>
struct PerInfo
   {
       char name[10];//占用0~9字节
       char sex;//偏移量为10，10是1的整数倍，不需要补空白字节
       int age;//偏移量为11，不是4的倍数，需要补1个空白字节，从12开始占字节
       double height;//偏移量为16,是8的倍数,不需要补空白字节
   };
typedef struct PerInfo information;
int main()
{
   information p;
   int a=sizeof(p);
   printf("%d",a);
   printf("sex偏移:%zu\n", offsetof(information, sex));
    printf("name偏移:%zu\n", offsetof(information, name));
    printf("age偏移:%zu\n", offsetof(information, age));
    printf("height偏移:%zu\n", offsetof(information, height));
    printf("总大小：%zu\n", sizeof(information));
   return 0;



}