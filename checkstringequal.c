int main(){
    
    char str[100],str1[100];
    gets(str);
    gets(str1);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=str1[i])
            printf("%c",str[i]);
        i++;
    }
    return 0;
}
