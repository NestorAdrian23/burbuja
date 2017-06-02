#include "Burbuja.h"


void Burbuja::BubbleSort(vector<int> l)
{
	for(i=0; i<l.size();++i)
		for(j=0; j<l.size(); ++j)
		{
			if(l[j]>l[j+1])
			{
				int aux= l[i];
				l[i]= l[j+1];
				l[j+1]=aux;
			}
		}
}