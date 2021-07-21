#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int hh,mm,ss;
    char a[3];
    
    scanf("%d:%d:%d%s",&hh,&mm,&ss,&a);
    
    if(a[0]=='P'){
        if(hh==12){
            printf("%02d:%02d:%02d", hh, mm, ss);
            return 0;
        }
        else{
            hh+=12;
            printf("%02d:%02d:%02d", hh, mm, ss);
            return 0;
        }
    }
    else{
        if(hh==12){
            hh-=12;
            printf("%02d:%02d:%02d", hh, mm, ss);
            return 0;
        }
        else{
            printf("%02d:%02d:%02d", hh, mm, ss);
            return 0;
        }
    }
    
    
    //printf("%02d:%02d:%02d", hh, mm, ss);
    //printf("%d:%d:%d%s",hh,mm,ss,a);
    
    return 0;
}
