#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void babel(int *tab)
{
	for(int i =0; i<500; i++)
	{
		for(int j=0; j<500; j++)
		{
			if(tab[j] > tab[j+1])
			{
				swap(tab[j],tab[j+1]);
			}
		}
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
	
	babel(tab);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
