#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int array[n],sad[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]==-1){
            continue;
        }
        else{
            sad[i]=-1;
            for(int j=i+1;j<n;j++)
            {
                if(array[i]==array[j]){
                    sad[i]=j-i;
                    sad[j]=sad[i];
                    array[j]=-1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",sad[i]);
    }return 0;
}
