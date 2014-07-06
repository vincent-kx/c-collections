/**
 * nullpointer 2014-7-6
 * A simple introduce to how function pointer can be used.
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * define a new type function-pointer Func,which has two parameters
 * of type int and returns int result.
 */
typedef int (*Func)(int, int);

int add1(int a, int b)
{
    return a+b;
}
int sub1(int a, int b)
{
    return a-b;
}
int mul1(int a, int b)
{
    return a*b;
}
int div1(int a, int b)
{
    return a/b;
}

int main()
{
    //init a function pointer array with the names of the functions
    Func operation[4] = {add1,sub1,mul1,div1};
    int a = 10;
    int b = 2;
    int i = 0;
    for(i=0; i<4; i++)
    {
        printf("%d\n",operation[i](a,b));
    }
}
