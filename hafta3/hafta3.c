
#include <stdio.h>

int main() {

	//Write a C program to find the largest of three numbers A, B, and C given from keyboard.

	/*int A, B, C;

	printf("Sayilarin Degerlerini Giriniz: ");
	scanf_s("%d%d%d", &A, &B, &C);

	if (A>B && A>C)
	{
		printf("En Buyuk Sayi: %d", A);
	}
	else if (B>A && B>C)
	{
		printf("En Buyuk Sayi: %d", B);
	}
	else
	{
		printf("En Buyuk Sayi: %d", C);
	}*/

	//Write a C program for computing factorial N(N!).

	/*int sayi, fak, i;

	fak = 1;

	printf("Faktorielini Bulmak Istediginiz Sayiyi Giriniz:");
	scanf_s("%d", &sayi);

	for ( i = sayi; i >= 1; i--)
	{
		fak = fak * i;
	}
	printf("Sayinin Faktorieli: %d", fak);
	*/


	//Write a C program which generates even numbers between 1000 and 2000 and then prints them.

	/*int sayi;

	for ( sayi = 1000; sayi < 2000; sayi=sayi+2)
	{
		printf("%d\n", sayi);
	}*/


	//Write a C program to check whether a given number from keyboard is Palindrome number or not.

	/*int n, kalan, real, reverse;

	printf("Enter an integer: ");
	scanf_s("%d", &n);
	
	reverse = 0;
	real = n;

	while (n > 0) {
		kalan = n % 10;
		reverse = reverse * 10 + kalan;
		n /= 10;
	}

	if (reverse == real)
	{
		printf("Sayi Palindrome");
	}
	else
	{
		printf("Sayi Palindrome Degil");
	}*/


	//Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]

	/*int x, sayac, toplam, us;

	toplam = 0;
	us = 0;
	sayac = 0;

	printf("x in degerini giriniz:");
	scanf_s("%d", &x);

	while (sayac<=x)
	{
		toplam = toplam + x ^ us;
		
		us++;
		sayac++;
	}
	printf("sonuc: %d", toplam);
	*/


	//Karabük Sayisi
	
	
	int n, kalan, x, y;

	kalan = 0;
	x = 0;
	y = 0;

	printf("Bir Sayi Giriniz: ");
	scanf_s("%d", &n);

	
	
	while (n > 0)
	{
		
		kalan = n % 10;
		kalan = x;
		n = n / 10;
	}

	if (kalan == x)
	{
		printf("Sayi Karabuk Sayisidir.");
	}
	else
	{
		printf("Sayi Karabuk Sayisi Degildir.");
	}
	
	


	/*int i, bosluk, kat, k = 0;
	printf("kat numarasini giriniz: ");
	scanf_s("%d", &kat);
	for (i = 1; i <= kat; ++i, k = 0) {
		for (bosluk = 1; bosluk <= kat - i; ++bosluk) {
			printf("  ");
		}
		while (k != 2 * i - 1) {
			printf("* ");
			++k;
		}
		printf("\n");
	}*/



	/*int x, y, kat;
	printf("kat sayisini giriniz: ");
	scanf_s("%d", &kat);
	for (x = 1; x <= kat; ++x) {
		for (y = 1; y <= x; ++y) {
			printf("* ");
		}
		printf("\n");
	}*/





	return 0;
}
