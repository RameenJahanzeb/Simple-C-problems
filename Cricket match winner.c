//A simple c program to find out the winner of a cricket match.

#include<stdio.h>
int main(){
	int run1,run2,wicket1,wicket2,wic2,runs;
	//run1
	printf("Enter ''Runs'' of team 1: ");
	scanf("%d",&run1);
	while(run1<0){
		printf("Enter positive value: ");
		scanf("%d",&run1);
	}//wicket1
		printf("Enter ''Wicket1'' of team 1: ");
	scanf("%d",&wicket1);
	while(wicket1<0){
		printf("Enter positive value: ");
		scanf("%d",&wicket1);
	}
	//run2
	printf("Enter ''Runs'' of team 2: ");
	scanf("%d",&run2);
	while(run2<0){
		printf("Enter positive value: ");
		scanf("%d",&run2);
	}//wicket2
		printf("Enter ''Wicket2'' of team 2: ");
	scanf("%d",&wicket2);
	while(wicket2<0){
		printf("Enter positive value: ");
		scanf("%d",&wicket2);
	}
      while(run2>run1 && wicket2>=10){
		printf("Enter wicket of team 2 less than 10: ");
		scanf("%d",&wicket2);
	}
	while(wicket2>10){
		printf("Enter wickets less than 10: ");
		scanf("%d",&wicket2);
	}
	//result
	if(run2>run1){
		wic2=10-wicket2;
		printf("Team 2 has won by %d wickets.",wic2);
	}
	else if(run1>run2){
		runs=run1-run2;
		printf("Team 1 has won by %d runs.",runs);
	}
	else if(run1==run2){
	if(wicket1<wicket2){
		printf("Team 1 has won by 1 run.");
		}
		else if(wicket1>wicket2){
			wic2=10-wicket2;
		printf("Team 2 has won by %d wickets.",wic2);
		}
		else{
		printf("The match is draw.");
		}}
	else{
		printf("The match is draw.");
	}
	return 0;
}
