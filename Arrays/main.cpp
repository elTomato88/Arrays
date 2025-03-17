#include <iostream>
using namespace std;

int main()
{
	const int index=5;
	int first_array[index];
	cout << "Please, enter the indexes of array, length["<<index<<"]: "<<endl; 
	for (int i = 0; i < index; i++)
	{
		cin >> first_array[i];
		
	}
	cout << "-->"<<endl;
	for (int i = 0; i < index; i++)
	{
		cout << first_array[i] << " ";

	}
	cout << endl;
	cout << "<--" << endl;
	for (int i = index-1; i >= 0; i--)
	{
		cout << first_array[i]<<" ";
	}
	cout << endl;
	int summ = 0;
	for (int i = 0; i < index; i++)
	{
		summ += first_array[i];
		cout<< (i == index - 1 ? "summ[array]= " : "summ[i]= ")<< summ;
		cout << endl;
	}
	cout << "arithmetic mean= " << summ<<"/"<< index <<"="<< summ/index<< endl;
	int min= first_array[0];
	int max= first_array[0];;
	for (int i = 0; i < index; i++)
	{
		if (first_array[i] < min) { min = first_array[i]; }
		if (first_array[i] > max) { max = first_array[i]; }
	}
	cout <<"minimum number= "<< min<<endl;
	cout << "maximum number= " << max << endl;
	return 0;
}