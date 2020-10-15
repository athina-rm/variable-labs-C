#define _CRT_SECURE_NO_WARNINGS //includes swedish alphabet
#include <stdio.h>
#include "safeinput.h"

//Skapa en variabel(string) med ditt namn.
//Skriv ut Hello + ditt namn i Console applikationen på skärmen

void lab1()
{
	char name[] = "Athina";
	printf("Hello %s", name);

}

//2. Skapa en Application. 
//a.Skapa en variabel string name med ditt namn
//b.Skapa en int age med din ålder.
//c.Skriv sedan ut Jag heter Kalle(innehållet i name) och är 27(innehållet i age) år.

void lab2()
{
	char name[] = "Athina";
	int age = 32;
	printf("Jag heter %s och är %d år\n", name, age);
}

/*3. Skapa en applikation där användaren matar in för och efternamn. 

a. Skriv ut Skriv in ditt förnamn: . Ta emot värdet i en variabel 

b. Låt markören vänta på din inmatning på samma rad. 

c. Gör på samma sätt med efternamnet. 

d. Skriv sedan ut namnen i omvänd ordning. 

e. Se till att resultatet ser ut så här.*/

void lab3()
{
	char firstname[40], surname[40];
	GetInput("Skriv in ditt förnamn:", firstname,40);
	GetInput("Skriv in ditt efternamn:",surname, 40);
	printf("Du heter:%s,%s\n", surname, firstname);
}

/*4. Skapa en applikation där användaren matar in två tal 

a. Skriv in Mata in tal 1: 

b. Ta emot detta tal i en variabel 

c. Skriv in Mata in tal 2: 

d. Ta emot värdet på detta tal 

e. Skriv ut på skärmen - Summan av tal1 och tal 2 är: summan*/

void lab4()
{
	int tal1, tal2, sum;
	GetInputInt("Mata in tal 1:", &tal1);
	GetInputInt("Mata in tal 2:", &tal2);
	sum = tal1 + tal2;
	printf("Summan av %d och %d är : %d\n",tal1, tal2, sum);
}

/*5. Skriv ett program som tar in ett födelse år från användaren. 

a. Ta emot födelseåret och räkna ut personens ålder 

b. Skriv på skärmen- Din ålder är : ålder 

c. Pröva att sätta dagens datum i en variabel och utgå från årtalet i detta datum i din beräkning.

*/
/*
void lab5()
{
	int birthYear;
	GetInputInt("Enter your Birthyear : ", &birthYear);

}
*/

/*6. Mata in två tal och returnera medelvärde, summa och differens mellan dessa tal 

a.Skriv in Mata in tal 1:. Ta emot i en variabel 

b.Skriv Mata in tal 2: . Ta emot i en variabel 

c.Räkna ut medelvärde, summa och differens mellan dessa två tal 

d. Skriv ut de beräknade värdena på skärmen

*/

void lab6()
{
	float tal1, tal2;
	GetInputFloat("Enter a number:", &tal1);
	GetInputFloat("Enter next number:", &tal2);
	printf("Sum = %.2f\nAverage = %.2f\nDifference = %.2f\n", tal1 + tal2, (tal1 + tal2) / 2, tal1 - tal2);
}
/*7. Be användaren mata in en summa. 

Lägg på 25% moms dvs summan gånger 0,25 och skriv på skärmen den nya summan med moms*/

void lab7()
{
	float total;
	GetInputFloat("Enter the total amount:", &total);
	printf("The amount including vat is %0.2f\n",(1.25 * total));
}

/*8. Skapa ett program där användaren matar in ett antal minuter(minst 60 minuter). Programmet omvandlar sedan detta till timmar och minuter. 

a. Skriv in ”Mata in antal minuter:” 

b. Ta emot detta tal 

c. Räkna om detta till antal timmar och minuter 

d. Skriv ut på skärmen- Detta är .. timmar och … minuter*/

void lab8()
{
	int minutes, hours;
	GetInputInt("Enter the number of minutes:" ,& minutes);
	hours = (minutes-minutes%60)/60;
	printf("It is %d hours and %d minutes\n", hours, (minutes%60));
}

int main()
{
	lab8();
	lab7();
	lab6();
	//lab5();
	lab4();
	lab3();
	lab2();
	lab1();
	return 0;
}