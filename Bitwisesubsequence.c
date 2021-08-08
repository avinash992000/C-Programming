#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



    




int main(){
    
    int n,count=0,c=0,x=0,f=0;
    scanf("%d",&n);
    int a[n],d[n],g[n],e[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b=pow(2,n);
    for(int i=1;i<=b;i++){
        x=0;count=0;c=0;
        for(int j=0;j<=n;j++){
            if(i & 1<<j){
                //printf("%d-->",a[j]);
                d[x]=j;
                g[x]=a[j];
                x++;
            }
            }
        //printf("%d-->",x);
        //for(int k=0;k<x;k++)
            //printf("%d",d[k]);
        /*if(x>=2){
            for(int k=0;k<x;k++){
                if((d[k]+1)==d[k+1]){
                    (x==2) ? c+=2 : c++;   
                }
            }
            if(x==3)c+=1;
            //printf("%d",c);
            if(c>=x){
                for(int k=0;k<x-1;k++){
                    if(g[k] < g[k+1])
                        (x==2) ? count+=2 : c++;
                }
                if(x==3)count+=1;
                //printf("%d",count);
            }
            if(count>=x){
                for(int k=0;k<x-1;k++)
                    if((g[k] & g[k+1])*2 < (g[k] | g[k+1])){
                        //printf("%d %d",g[k],g[k+1]);
                        e[f]=g[k];e[f+1]=g[k+1];f+=2;}
            }
        }
            if(count==x){
                for(int k=0;k<x;k++)
                    if(a[k]>a[k+1])
                        c++;
            }
            if(c==x){
                for(int k=0;k<x;k++)
                    printf("%d",a[k]);
            }*/
            
            if(x==2){
            if((d[0]+1)==d[0+1]){
                c=d[0];count=d[1];
                if(a[c]<a[count] && ((a[c] & a[count]) * 2) < (a[c] | a[count])){
                    printf("%d %d\n",a[c],a[count]);
                }
            }
            
        
        
    }
    }
    /*count=0;
    for(int k=0;k<f;k++){
        for(int i=k+1;i<f;i++){
            if(e[k]==e[i])
                count++;
        }
    }
    printf("%d",f-count);*/
        
        //printf("-->%d",x);
    
        
    
    return 0;
}
