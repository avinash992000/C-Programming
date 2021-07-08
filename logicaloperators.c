#include<stdio.h>
int main()
{
    /*
        Logical Operators:
            -> Used to check two or more expressions at a time
            -> List of operators:
                && -> Logical AND
                || -> Logical OR
                !  -> Logical NOT 
            -> Logical AND: True if two expression values are non-zero, Otherwise false
                10<20 [True/False]   20>30 [True/False]
                    True    True    =>  True
                    True    False   =>  False
                    False   True    =>  False
                    False   False   =>  False  
                10+30 [Non-Zero/Zero]   309*0 [Non-Zero/Zero]
                    Non-Zero    Non-Zero    =>  1
                    Non-Zero    Zero        =>  0
                    Zero        Non-Zero    =>  0
                    Zero        Zero        =>  0
            -> Logical OR: True if any of the expression value is True, Otherwise false
                10<20 [True/False]   20>30 [True/False]
                    True    True    =>  True
                    True    False   =>  True
                    False   True    =>  True
                    False   False   =>  False  
                10+30 [Non-Zero/Zero]   309*0 [Non-Zero/Zero]
                    Non-Zero    Non-Zero    =>  1
                    Non-Zero    Zero        =>  1
                    Zero        Non-Zero    =>  1
                    Zero        Zero        =>  0
            -> Logical NOT[Unary Operator:Applied only on on value/variable]
                !(True)     =>  False
                !(False)    =>  True
                !(Non-Zero) =>  Zero
                !(Zero)     =>  Non-Zero 
    */
    printf("%d %d %d %d\n",10<20&&10<30,10<20&&10>30,10>30&&10<20,10>30&&10>40);//1 0 0 0
    printf("%d\n",(10+30) && (39*10));//=> 40[Non-Zero] && 390[Non-Zero] => 1
    printf("%d\n", 10 && 30);//NOn-Zero && Non-Zero  => 1
    printf("%d\n", 10 && 0);//Non-Zero && Zero => 0
    printf("%d\n",10>30&&10<20);
    //Question: Is 10<20 verifies? No, because 10>30 is already false, thats why it dont go and verify second expression, Make a note that if first expression value is true then only it will verify second expression. 

    printf("%d\n",10<20&&10<30&&1);
    /*
        10<20 && 10<30 && 1
            -> 10<20 => 1
            -> 10<30 => 1
            => 1 && 1 => 1
            -> 1 && 1   =>  1
    */
   printf("%d\n",10<20==1);

    printf("%d\n",10<20||10>50);
    //Question: Is 10>50 will check? No, because already 10<20 is true, Means whenever first condition value is false then only second one will be verified.
    printf("%d\n",10>30||10<20);
    //Becuase of 10>30 fails[False], it will go and verify 10<20


    printf("%d\n",!10>5);//0
    printf("%d\n",!10==0);//1
    printf("%d\n",!10==10==1);
    /*
        !10==10==1
            -> !10 -> !(Non-Zero)   => 0
            -> 0 == 10  => 0
            -> 0 == 1   => 0
        !(10==10)==1
            -> !(True)  => 0
            -> 0 == 1   => 0
    */
    return 0;
    
}
