#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void koktajlowe(int *tab, int lewy, int prawy)
{
	int znacznik = lewy;
	while(lewy < prawy )
	{
		for(int i = lewy; i < prawy; i++)
		{
			if( tab[i] > tab[i+1] )
			{
				swap( tab[i], tab[i+1] );
				znacznik=i;
			}
		}
		
		prawy = znacznik;
		
		for(int i = prawy; i > lewy; i--)
		{
			if( tab[i] < tab[i-1] )
			{
				swap( tab[i], tab[i-1] );
				znacznik=i;
			}
		}
		
		lewy=znacznik;
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
	
	koktajlowe(tab,0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
