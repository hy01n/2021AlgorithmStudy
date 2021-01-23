#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main(int argc, char** argv)
{
	hash Hashy;
	string name = "";
	
	Hashy.AddItem("Paul", "Locha");
	Hashy.AddItem("Kim", "Iced Mocha");
	Hashy.AddItem("Emma", "Strawberry Smoothie");
	Hashy.AddItem("Annie", "Hot Chocolate");
	Hashy.AddItem("Sarah", "Passion Tea");
	Hashy.AddItem("Pepper", "Caramel Mocha");
	Hashy.AddItem("Mike", "Chai Tea");
	Hashy.AddItem("Steve", "Apple Cider");
	Hashy.AddItem("Bill", "Root Beer");
	Hashy.AddItem("Marie", "Skinny Latte");
	Hashy.AddItem("Susan", "Water");
	Hashy.AddItem("Joe", "Green Tea");
	
	Hashy.PrintTable();
	
	while(name != "exit")
	{
		cout<< "Remove ";
		cin>> name;
		if(name != "exit")
		{
			Hashy.RemoveItem(name);
		}
	}
	Hashy.PrintTable();
//	Hashy.PrintTable();
	
//	Hashy.PrintItemsInIndex(9);
	
	return 0;
}