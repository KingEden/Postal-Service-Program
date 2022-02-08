#pragma once
#include <iostream>
#include "Customer.cpp"
#include "Invoice.h"
using namespace std;
class Order
{
public:
	Customer CS;
	Invoice I;
	Order(int a);
	Order();
	int getOrder_ID();
	void settOrder_ID();
	float GetWeight();
	void SetWeight(float A);
private:
	int order_id;
	float weight;
};


