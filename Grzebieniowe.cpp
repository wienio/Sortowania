#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void grzebieniowe(int *tab, int lewy, int prawy)
{
	int dziura = prawy-lewy+1;
	do
	{
		dziura=dziura*10/13;
		if(dziura==9 || dziura==10)
		{
			dziura=11;
		}
		if(dziura == 0)
		{
			dziura=1;
		}
		for(int i = lewy; i <=prawy - dziura; i++)
		{
			if( tab[i] > tab[i+dziura] )
			{
				swap( tab[i], tab[i+dziura] );
			}
		}
	} while (dziura > 1);
}


int main()
{
	srand(time(NULL));
	int tab[500];
	
	for(int i =0; i<500; i++)
	{
		tab[i]=rand()%1000;
	}
	
	grzebieniowe(tab,0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
