#include <iostream>
#include <ctime>
#include "randomnums.h"
#include "swabnums.h"


using namespace std;

int main()
{
	srand(unsigned(time(NULL)));
	cout << randomnums::Randomnums(1, 100) << endl;
	swabnums::swabfun(5, 7);
}


