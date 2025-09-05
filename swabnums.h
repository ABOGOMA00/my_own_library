#pragma once
#include<iostream>
using namespace std;

namespace swabnums
{
	void swabfun(int num1, int num2) {
		
		cout << "your num1 afer swapping : "<<num1<<endl;
		cout << "your num2 afer swapping : " << num2<<endl;

		int temp = num1;
		num1 = num2;
		num2 = temp;

		cout << "your num1 befor swapping : " << num1<<endl;
		cout << "your num2 befor swapping : " << num2<<endl;
	}

}