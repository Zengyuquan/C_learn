#include <stdio.h>

int main() {

    int* p1, *p2, m, n;

    p1 = &m;p2 = &p1;
    p1=&m; p2=p1 ;
    p1=&m; p2=&n;*p1=*p2 ;
    p1=&m; *p1=*p2;

    return 0;
}
