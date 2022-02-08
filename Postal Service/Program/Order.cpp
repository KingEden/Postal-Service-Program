#include "Order.h"
Order::Order()
{
	order_id = 0;
}
Order::Order(int a)
{
	order_id=a;
}
void Order::settOrder_ID()
{
	order_id = rand() % 100 + 1;
}
int Order :: getOrder_ID(){
	
	return order_id;
}
void Order::SetWeight(float A)
{
	weight = A;
}
float Order::GetWeight()
{
	return weight;
}