#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    int a[n], i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d", &k);
    k = k % n;
    for(i = n - k; i < n; i++){
        printf("%d ", a[i]);
    }
    for(i = 0; i < n - k; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
