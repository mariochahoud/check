#include <stdio.h>
#include <stdlib.h>

int sum(int i, int j);
int main(int argc, char *argv[])
{

    int a;

    a = sum(1,3);
    printf("%d", a);
    return a;


}


int sum(int i, int j)
{


    return i + j;
}
