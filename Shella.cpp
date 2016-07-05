#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void shell(int *tab, int lewy, int prawy)
{
	int h=1;
	int pom;
	int rozmiar= prawy-lewy+1;
	
	while(h < rozmiar)
	{
		h=h*3+1;
	}
	
	h=h/9;
	
	if(h==0)
	{
		h=1;
	}
	
	while(h>0)
	{
		for(int i =lewy+h, j; i<= prawy; i++ )
		{
			pom=tab[i];
			j=i-h;
			while( (j >= lewy) && (tab[j] > pom) )
			{
				tab[j+h]= tab[j];
				j=j-h;
			}
			tab[j+h]=pom;
		}
		h=h/3;
	}
}


int main()
{
	srand(time(NULL));
	int tab[500];
	
	for(int i =0; i<500; i++)
	{
		tab[i]=rand()%1000;
	}
	
	shell(tab,0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
