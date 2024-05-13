// A simple quiz of 10 marks including addition ,multiplication and subtraction in c language. 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int sum,difference,product,ans_product,ans_sum,ans_diff,score=0;
	 srand(time(0));
	 for(int i=0;i<10;i++){
	 int choice=rand()%3+1;
	 int num1=rand()%100;
	 int num2=rand()%100;
	 int num3=rand()%10+90;
	 int num4=rand()%num3+1;
	 int num5=rand()%9+0;
	 int num6=rand()%9+0;
	 //choice1
	 if(choice==1){
	 	sum=num1+num2;
	 	printf("\nAddition\n");
    	printf("N1: %d  N2: %d\n",num1,num2);
    	printf("Answer:");
    	scanf("%d",&ans_sum);
    	if(ans_sum==sum){
    		printf("Correct\n");
    		score++;
	 	}
	 		else{
    		printf("Incorrect\n");
		}
}
     //choice2 
      if(choice==2){ 
        difference=num3-num4;
        printf("\nSubtraction\n");
    	printf("N1: %d  N2:%d\n",num3,num4);
    	printf("Answer:");
    	scanf("%d",&ans_diff);
    	if(ans_diff==difference){
    		printf("Correct\n");
    		score++;
    	}
    	else{
    		printf("Incorrect\n");
		}
	}
	//choice3
	     else{
	 	product=num5*num6;
	 	printf("\nMultiplication\n");
    	printf("N1: %d  N2: %d\n",num5,num6);
    	printf("Answer:");                       
    	scanf("%d",&ans_product);
    	if(ans_product==product){
    		printf("Correct\n");
    		score++;
    	}
    	else{
    		printf("Incorrect\n");
		}
} }
   	printf("Score : %d out of 10",score);
   
   return 0;
	}



	

