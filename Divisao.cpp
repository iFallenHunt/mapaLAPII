cd #include <stdio.h>
#include <conio.h>

int main(void)

{
	int n1,n2,resto,res;
   
	printf ("\nDigite um numero:");
	scanf ("%d", &n1);
      
	printf ("\nDigite um numero:");
	scanf ("%d", &n2);
     
	res = n1 / n2;
    resto = n1 % n2;
	
	printf("\nResultado da divisao de %d / %d = %d. \n",n1,n2,res); //mostra o resultado da divisão entre o Dividendo e o Divisor
	printf("\nO Resto da divisao de %d / %d = %d. \n",n1,n2,resto); //mostra o resto da divisao
      
	getch();
	return(0);
}