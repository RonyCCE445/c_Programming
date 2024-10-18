#include<stdio.h>
int main(){

char choice;
char choice_up;

double hra,da,basic,gs,bon,fin_sal;
printf("Enter your educational qualification");
 printf("Enter 'u' for under graduade and 'p' for post graduate\n");
 scanf("%c",&choice_up);
 
  switch(choice_up){
  case 'u':
  printf(" The salary structure of an undergrad is given below");
  basic=50000.00;
  hra=(0.2*basic);
  da=(0.3*basic);
  gs=(basic+hra+da);
  printf( "\nbasic salary= Rs%lf",basic);
  printf("\nHRA= Rs%lf",hra);
  printf("\nDA= Rs%lf",da);
  printf("\n Gross Salary= Rs%lf\n",gs);
  printf("are you working more than 3 years? if yes press'y' if no press'n'\n");
  scanf("%s",&choice);
		  switch(choice){
		  case 'y':
		      bon=2500;
		      fin_sal= gs+bon;
		      printf("\ncongratulation!! you are eligible for bonus, your final salary is =%lf\n",fin_sal);
		      break;
		  case 'n':
			printf("Sorry you are not eligible for bonus");
			break;
		  default: 
			printf("Please press something from 'y' or 'n'");
			}
    break;
 
   case 'p':
   
	   printf(" The salary structure of an postgrad is given below");
	   basic=60000.00;
	   hra=(0.4*basic);
	  da=(0.2*basic);
	  gs=(basic+hra+da);
	  printf( "\nbasic salary= Rs%lf",basic);
	  printf("\nHRA= Rs%lf",hra);
	  printf("\nDA= Rs%lf",da);
	  printf("\n Gross Salary= Rs%lf\n",gs);
	   printf("are you working more than 3 years? if yes press'y' if no press'n'");
	  scanf("%s",&choice);
		  switch(choice){
		  case 'y':
			  bon=2500;
			 fin_sal= gs+bon;
			  printf("\ncongratulation!! you are eligible for bonus, your final salary is =%lf\n",fin_sal);
			  break;
		  case 'n':
			  printf("Sorry you are not eligible for bonus");
			  break;
		  default: 
		  printf("Please press something from 'y' or 'n'");}
		  
           break;
  
     default: 
          printf("Error"); }
          
  
return 0;}
