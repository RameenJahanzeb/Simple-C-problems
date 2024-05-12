#include <stdio.h>
int main() {
   float num1, num2; 
   float result;
   char operators;
     
    printf("\n  Enter number 1 : ");
	scanf("%f",&num1);    
	        
	printf("\n  Enter number 2 : ");
	scanf("%f",&num2);   
	                                             //taking values from user
    printf("\n  Enter operator (+, -, *, /): ");
    scanf(" %c", &operators);

    switch(operators) {
        case '+':
            result = num1+num2;
            printf("\n  Answer = %f",result);
            break;
        case '-':
            result = num1-num2;
            printf("\n  Answer = %f",result);
            break;
        case '*':
            result = num1*num2;
		    printf("\n  Answer = %f",result);           //apply switch conditions
            break;
        case '/':
        	if(num2!=0){
            result = num1/num2;
            printf("\n  Answer = %f",result);
            break;}
            else{
            	printf("Error,division by zero .");
			}
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}

