#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int hoare(int *tab, int lewy, int prawy)
{
	int pom,i,j;
	pom=tab[lewy];
	i=lewy-1;
	j=prawy;
	
	while(1)
	{
		do j--;
		while ( tab[j] > pom );
		
		do i++;
		while ( tab[i] < pom );
		
		if(i<j)
		{
			swap( tab[i], tab[j] );
		}
		else
		{
			return j+1;
		}
	}
}

void quicksort(int *tab, int lewy, int prawy)
{
	int q;
	
	if(prawy-lewy<2)
	{
		return;
	}
	q=hoare(tab,lewy,prawy);
	quicksort(tab,lewy,q);
	quicksort(tab,q,prawy);
}

int main()
{
	srand(time(NULL));
	int tab[500];
	
	for(int i =0; i<500; i++)
	{
		tab[i]=rand()%1000;
	}
	
	quicksort(tab,0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
