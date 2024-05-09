#include <stdio.h>
void main(void)
{
int i, res;
// for(i = 0; i < 4; i++)
// {
//  printf("Hello, world!\n");
// }
 res = 0; 
 for(i = 0; i < 100; i = i + 1)
 {
//  printf("res=%d, i=%d¥n",res, i ); //Cならではの書き方
 res = res + i; 
 }
 printf("合計は%dです\n", res);
int a[10] = {0,1,2,3,4,5,6,7,8,9};
for(i = 0; i < 10; i++)
{
 printf("%d\n", i, a[i]);
}
}