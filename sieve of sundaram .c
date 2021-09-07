//sieve of sundaram 
#include<stdio.h> 
int main() 
{
    int n; 
    scanf("%d",&n); //n=12 
    int m=(n-1)/2; //m=5 
    int arr[m];  //arr[5]
    int i,j,z; 
    for(i=0;i<m;i++) //i=2  
    {
        arr[i]=i+1; //arr[2]=2+3
    }
    i=1,j=1; 
    while(1)
    {
        z=i+j+2*i*j;  //z=12 
        if(i==j && z>m) //2==2&&12>5
        {
            break;
        }
        if(z<=m) // 7<=5  
        {
         arr[z-1]=-1;  //arr[3]=-1 
         j++; //2 
        }
        else 
        {
            i++;  //i=2
            j=i;  //j=2 
        }
    }
    printf("2 ");
    for(i=0;i<m;i++)
    {
        if(arr[i]!=-1)
        {
            printf("%d ",2*arr[i]+1);
        }
    }
}

