#include <stdio.h>

struct PerInfo
   {
       char name[10];
       char sex;
       int age;
       double height;
   };
typedef struct PerInfo information;
int main()
{
   information p;
   p.age=18;
   return 0;


}