#include<stdio.h>
void main()
{
    add();

}
int add()
{
    printf("a\n");
    add2();
}
int add2()
{
    printf("a2\n");
    add3();

}
int add3()
{
    printf("a3\n");
    add4();
}
int add4()
{
    printf("a4\n");
}
