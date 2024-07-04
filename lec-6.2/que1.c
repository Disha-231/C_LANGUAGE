/*--------------------------------------------------------
* Print 1 to 10 using do while loop in C - program example
*/

#include<stdio.h>

int main(){


	int num = 1;


	int target = 10;

	 do{
	

		printf("%d\n", num);

		++num;

	 }
	 while (num <= target);

}
