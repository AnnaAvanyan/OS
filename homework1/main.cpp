#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Complex.h"


void  sort(std::vector<Complex>& v)
{
	int n = v.size();
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n- i - 1; ++j)
		{
			if (v[j+1] < v[j])
				std::swap(v[j], v[j + 1]);
		}
	}

}

int main()
{
	int n;
	std::cin >> n;
	std::vector<Complex> v(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	
	for (int i = 0; i < n;++i)
	{
		v[i] = v[i] + v[i];
		v[i] = v[i] - v[i] * 0.5;
		
	}
	sort(v);
	for (int i = 0; i < n;++i)
	{
		std::cout << v[i] << "\n";
	}
}
