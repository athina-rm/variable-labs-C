#define _CRT_SECURE_NO_WARNINGS //includes swedish alphabet
#include <stdio.h>
#include "safeinput.h"

//Skapa en variabel(string) med ditt namn.
//Skriv ut Hello + ditt namn i Console applikationen p� sk�rmen

void lab1()
{
	char name[] = "Athina";
	printf("Hello %s", name);

}

//2. Skapa en Application. 
//a.Skapa en variabel string name med ditt namn
//b.Skapa en int age med din �lder.
//c.Skriv sedan ut Jag heter Kalle(inneh�llet i name) och �r 27(inneh�llet i age) �r.

void lab2()
{
	char name[] = "Athina";
	int age = 32;
	printf("Jag heter %s och �r %d �r\n", name, age);
}

/*3. Skapa en applikation d�r anv�ndaren matar in f�r och efternamn. 

a. Skriv ut Skriv in ditt f�rnamn: . Ta emot v�rdet i en variabel 

b. L�t mark�ren v�nta p� din inmatning p� samma rad. 

c. G�r p� samma s�tt med efternamnet. 

d. Skriv sedan ut namnen i omv�nd ordning. 

e. Se till att resultatet ser ut s� h�r.*/

void lab3()
{
	char firstname[40], surname[40];
	GetInput("Skriv in ditt f�rnamn:", firstname,40);
	GetInput("Skriv in ditt efternamn:",surname, 40);
	printf("Du heter:%s,%s\n", surname, firstname);
}

/*4. Skapa en applikation d�r anv�ndaren matar in tv� tal 

a. Skriv in Mata in tal 1: 

b. Ta emot detta tal i en variabel 

c. Skriv in Mata in tal 2: 

d. Ta emot v�rdet p� detta tal 

e. Skriv ut p� sk�rmen - Summan av tal1 och tal 2 �r: summan*/

void lab4()
{
	int tal1, tal2, sum;
	GetInputInt("Mata in tal 1:", &tal1);
	GetInputInt("Mata in tal 2:", &tal2);
	sum = tal1 + tal2;
	printf("Summan av %d och %d �r : %d\n",tal1, tal2, sum);
}

/*5. Skriv ett program som tar in ett f�delse �r fr�n anv�ndaren. 

a. Ta emot f�delse�ret och r�kna ut personens �lder 

b. Skriv p� sk�rmen- Din �lder �r : �lder 

c. Pr�va att s�tta dagens datum i en variabel och utg� fr�n �rtalet i detta datum i din ber�kning.

*/
/*
void lab5()
{
	int birthYear;
	GetInputInt("Enter your Birthyear : ", &birthYear);

}
*/

/*6. Mata in tv� tal och returnera medelv�rde, summa och differens mellan dessa tal 

a.Skriv in Mata in tal 1:. Ta emot i en variabel 

b.Skriv Mata in tal 2: . Ta emot i en variabel 

c.R�kna ut medelv�rde, summa och differens mellan dessa tv� tal 

d. Skriv ut de ber�knade v�rdena p� sk�rmen

*/

void lab6()
{
	float tal1, tal2;
	GetInputFloat("Enter a number:", &tal1);
	GetInputFloat("Enter next number:", &tal2);
	printf("Sum = %.2f\nAverage = %.2f\nDifference = %.2f\n", tal1 + tal2, (tal1 + tal2) / 2, tal1 - tal2);
}
/*7. Be anv�ndaren mata in en summa. 

L�gg p� 25% moms dvs summan g�nger 0,25 och skriv p� sk�rmen den nya summan med moms*/

void lab7()
{
	float total;
	GetInputFloat("Enter the total amount:", &total);
	printf("The amount including vat is %0.2f\n",(1.25 * total));
}

/*8. Skapa ett program d�r anv�ndaren matar in ett antal minuter(minst 60 minuter). Programmet omvandlar sedan detta till timmar och minuter. 

a. Skriv in �Mata in antal minuter:� 

b. Ta emot detta tal 

c. R�kna om detta till antal timmar och minuter 

d. Skriv ut p� sk�rmen- Detta �r .. timmar och � minuter*/

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