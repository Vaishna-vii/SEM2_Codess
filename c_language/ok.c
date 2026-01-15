#include <stdio.h>
int main() {
    int x=10,y=x++;
    printf("%d %d",y++,++x);
    return 0;
}