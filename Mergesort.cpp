#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int tab[500];
int pomocnicza[500];

void mergesort(int poczatek, int srodek, int koniec)
{
	int i,j,q;
	for(i=poczatek; i<= koniec; i++)
	{
		pomocnicza[i]=tab[i];
	}
	
	i=poczatek;
	j=srodek+1;
	q=poczatek;
	
	while( i <= srodek && j<= koniec)
	{
		if( pomocnicza[i]<pomocnicza[j])
		{
			tab[q++]=pomocnicza[i++];
		}
		else
		{
			tab[q++]=pomocnicza[j++];
		}
	}
	
	while (i<=srodek)
	{
		tab[q++]=pomocnicza[i++];
	}
}

void sortuj(int poczatek, int koniec)
{
	int srodek;
	if(poczatek<koniec)
	{
		srodek=(poczatek+koniec)/2;
		sortuj(poczatek,srodek);
		sortuj(srodek+1,koniec);
		mergesort(poczatek,srodek,koniec);
	}
}

int main()
{
	srand(time(NULL));
	
	
	for(int i =0; i<500; i++)
	{
		tab[i]=rand()%1000;
	}
	
	sortuj(0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
