#include<stdio.h>
#include<conio.h>
int main()
{
	int mark;
	char grade;
	printf("enter your mark :");
	scanf("%d",&mark);
	grade=(mark>=90 && mark<100)? 'a' :
		(mark>80 && mark<90)? 'b' :
		(mark>70 && mark<80)? 'c':
		(mark>60 && mark<70)? 'd':
		(mark>50 && mark<60)?'e':
		'f';
		printf("%c\n",grade);
		switch(grade)
		{
			case'a': printf("excellent work\n :");
			break;
			case'b': printf("well done\n :");
			break;
			case'c': printf("good job\n :");
			break;
			case 'd': printf("you passed \n:");
			break;
			case'e': printf("you passed but you could better\n");
			break;
			case'f': printf("sorry you failed\n :");
			break;

			
		}
		if( grade<'e' && grade>'e')
		
		{
			printf("Congratulations! You are eligible for the next level :\n");
		}
		else
		{
			printf(" Please try again next time \n");
			
		}
		return 0;
		
		
}
