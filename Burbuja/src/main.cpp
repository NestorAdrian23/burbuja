#include "Burbuja.h"
#include <time.h>
#include <cstdlib>
#include <vector>


int main()
{
	int k,i;
	vector<int> l;
	Burbuja burbuja();


	cout<<"Arregla los datos de un arreglo"<<endl;
	
	for(i=0;i<=9;++i)
	{
		l.push_back(rand ()%99);
	}
	
	cout<<"Vector"<<endl;
	for(k=0;k<l.size()-1;k++)
	{
		cout<<l[i]<<" ";
	}


	cout<<"vector ordenado"<<endl;
	BubbleSort(l).burbuja;
	for(k=0;k<l.size()-1;k++)
	{
		cout<<l[i]<<" ";
	}

	return 0;

}
