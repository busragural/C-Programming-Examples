#include<stdio.h>
#include<math.h>
#include<conio.h>

// En fazla 3 digite sahip octal say� sistemindeki bir say�y� decimal say�y� d�n��t�ren program.

int main(){
	
	int hundredsDigit, tensDigit, onesDigit;
	int userNumber;
	
	printf("Enter an octal number.");
	scanf("%d",&userNumber);
	
	hundredsDigit=userNumber/100;
	tensDigit=(userNumber-(100*hundredsDigit))/10;
	onesDigit=userNumber%10;
	
	hundredsDigit*=8*8;
	tensDigit*=8;
	
	userNumber=hundredsDigit+tensDigit+onesDigit;
	
	printf("%d",userNumber);
	
		
	getch();
	return 0;
}
