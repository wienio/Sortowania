#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void wybieranie(int *tab)
{
	int k;
	bool a;
	int min;
	for(int i =0 ; i<500 ; i++)
	{
		min = tab[i];
		a=0;
		for(int j=i+1 ; j<500; j++)
		{
			if(tab[j] < min)
			{
				min=tab[j];
				k=j;
				a=1;
			}
		}
		if(a)
		{
			swap(tab[k],tab[i]);	
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
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
	cout<<endl<<endl;
	
	wybieranie(tab);
	
	for (int i=0; i<500; i++)
	{
		cout<<tab[i]<<" ";
	}
}
