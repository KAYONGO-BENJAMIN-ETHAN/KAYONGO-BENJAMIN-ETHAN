#include <stdio.h>
int main(){
	int secret_number = 347;
	int guess;
	int guesscount=0;
	int guesslimit=3;
	int outofguesses=0;
	while(guess != secret_number&&outofguesses==0){
		if(guesscount<guesslimit){
		printf("enter your three lucky numbers but not morethan 3 times: ");
		scanf("%d", &guess);
		guesscount++;}
		else{
			outofguesses=1;
		}
	}
	if(outofguesses=1){
		printf("you loose papa");
		}
		else{
	printf("you win the jack port mr.billionier");}
	
}
