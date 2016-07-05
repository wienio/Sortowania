#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int lomuto(int *tab, int lewy, int prawy)
{
	int pom=tab[prawy];
	int i=lewy-1;
	int j;
	for(j=lewy; j<=prawy-1 ; j++)
	{
		if( tab[j] <= pom)
		{
			i++;
			swap( tab[i], tab[j] );
		}
	}
	
	swap( tab[i+1], tab[prawy] );
	return i+1;
}

void quicksort(int *tab, int lewy, int prawy)
{
	if( lewy < prawy)
	{
		int c=lomuto(tab,lewy,prawy);
		quicksort(tab,lewy,c-1);
		quicksort(tab,c+1,prawy);
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
	
	quicksort(tab,0,500);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
