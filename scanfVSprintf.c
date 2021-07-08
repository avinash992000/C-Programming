/*
    printf:
        -> purpose          :   print output on the screen
        -> return value     :   integer
        -> What returns     :   Return how many characters are printed on the screen
        -> syntax           :   printf("%[-NUMBER]formatspecifier") 
                                    -> NUMBER:0-9[Min length]
                                    -> - left justificaton
                                    -> format specifier: used to identify type of data
        -> Example          :   printf("%d",printf("CCC")); Output: CCC3
    scanf:
        -> purpose          :   reading input into the program 
        -> returns          :   integer
        -> what returns     :   returns how many inputs taking into the program
        -> syntax           :   scanf("%[NUMBER]formatSpecifier")
                                    -> NUMBER[Any positive number > 0] : The maximum number of characters  
                                    -> format specifier: used to identify type of data 
        -> example          :   printf("%d",scanf("%d%d",&num1,&num2)); output: 2
*/
