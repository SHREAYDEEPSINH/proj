#include <stdio.h>

int main()
{
    // qus 1 
    float f =(38 * 9/5 ) + 32 ;
    printf("%f",f);
    return 0;

    // qus 3
    int firstangle = 65;
    int secondangle= 45;
    int sum=firstangle+secondangle;
    int thirdangle=180-sum;
    
    printf("%d",thirdangle); 

    //qus 2
     float basesalary;
    float HRA;
    float DA;
    float TA;
    float grosssalary;
    
    printf("enter basesalary");
    scanf("%f",&basesalary);
    
    printf("enter HRA");
    scanf("%f",&HRA);
    
    printf("enter DA");
    scanf("%f",&DA);
    
     printf("enter TA");
    scanf("%f",&TA);
    
    HRA =(HRA/100*100);
    DA=(DA/100*100);
    TA =(TA/100*100);
     
   grosssalary=basesalary+HRA+DA+TA;
    
     printf("%f",grosssalary);

}