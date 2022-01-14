#include <iostream>
#include <vector>

#include "hSort.h"


int main()
{
	//Utility<int> a;
	int size = 20;
	std::vector<int> vec;
	vec.resize(size, 0);
	for (int i = 0; i < size; i++)
	{
		vec[i] = rand();
	}
	//Buble Sort
	/*for (int i = 0; i < vec.size()-1; i++)
	{
		for (int j = i+1; j < vec.size(); j++)
		{
			if (vec[j]< vec[i])
			{
				swap(vec[j], vec[i]);
			}
		}
	} */
	//Selection sort 
	/*int min;
	for (int i = 0; i < vec.size(); i++)
	{
		min = vec[i];
		for (int j = 0; j < vec.size(); j++)
		{
			if (vec[j] > min)
			{
				Utility<int>::swap(vec[i], vec[j]);
			}
		}
	}*/
	//Insertion sort
	int tmp;
	int j;
	for (int i = 1; i < vec.size(); i++)
	{
		tmp = vec[i];
		j = i-1;
		while (vec[j] > tmp && j>=0)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = tmp;
	}
	//Binary search
	int key; 
	std::cin >> key;
	int start = 0, end = vec.size() - 1, mid=0;
	std::cout << a.binarySearch(start, end, mid, key, vec)<<std::endl;
	
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i]<<" ";
	}
}