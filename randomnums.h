#pragma once
#include<iostream>
using namespace std;

namespace randomnums
{
	int Randomnums(int From, int To) {
		return rand() % (To - From + 1) + From;
	}
}
