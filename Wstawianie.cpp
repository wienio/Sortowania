#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void wstawianie(int *tab)
{
	int max,j;
	
	for (int i = 1; i<500 ; i++)
	{
		max=tab[i];
		j=i-1;
		
		while(j>=0 && tab[j]>max)
		{
			tab[j+1]=tab[j];
			j--;
		}
		
		tab[j+1]=max;
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
	
	
	
	wstawianie(tab);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
