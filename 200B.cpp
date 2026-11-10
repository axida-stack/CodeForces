#include <stdio.h>

int main(){
    int n, x;
    double p=0.0;
    scanf("%d", &n);
    int t=n;
    while (n--) {
        scanf("%d", &x);
        p += x/100.0;
    }
    printf("%.12f\n", p/t*100);
}

