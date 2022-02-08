#pragma once
#include <iostream>
#include <fstream>
#include "clerk.cpp"
#include "Post_man.cpp"
#include "Account_Officer.cpp"
class Postal_work:Account_Officer,post_man,clerk
{
public:
	fstream file;
	Account_Officer AO;
	post_man PM;
	clerk c;
	Postal_work();
};
