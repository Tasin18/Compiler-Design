#include<stdio.h>

int main()
{
    int a, b, c;
    b = 10;
    c = 20;
    a = b + c;
    printf("a = %d\n", a);
    //gcc -o HelloWorld HelloWorld.c .........compilation step
    //gcc -E HelloWorld.c > HelloWorld.i .........preprocessing step
    //gcc -S -masm=intel HelloWorld.i .........assembly step
    //as -o HelloWorld.o HelloWorld.s .........assembly to object code step
    //objdump -M intel -d HelloWorld.o > HelloWorld.dump .........disassembly step
}
