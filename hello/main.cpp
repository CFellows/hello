// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	std::chrono::high_resolution_clock c{};
	int iterations{ 100 };

	while (iterations > 0)
	{
		cout << "Hello! Profiling your console for " << iterations << " iterations." << endl;
		auto t1 = c.now();
		for (int i = iterations; i > 0; --i)
		{
			cout << "Profiling your Console." << endl;
		}
		auto t2 = c.now();

		auto d = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();

		cout << "Printed for " << iterations << " iterations in " << d << " milliseconds. If this is too slow, try updating your display drivers." << endl;

		//TODO(cfellows): Analytics
		cout << "Enter number of iterations. 0 to exit." << endl;

		cin >> iterations;
	}

	return 0;
}