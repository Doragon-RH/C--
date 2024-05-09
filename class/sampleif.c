#include <stdio.h>
int main(void)
{
 int x; //変数の宣言
 x = -20; //変数に値を代入
 //変数xによって処理を変える
 if(x < 0)
{
 x = -1 * x;
}
printf("%d", x); //結果を出力
}