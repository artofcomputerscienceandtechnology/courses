/*
Project: C++ Course
File: classesAndPointers.cpp

Summary:
Examples of classes and objects

Notes

*/

//Header that defines the standard input/output stream objects
//cin, cout, cerr, clog
#include <iostream>

//printf()
#include <stdio.h>

using namespace std;

class Rectangle 
{
	int height, width; //private member variables
  public: //public access specifer applies to everything after here
    void set_values (int, int);
    int area() {return height * width;}
};

//scope operator (::, two colons) for name spaces
void Rectangle::set_values (int x, int y) 
{
  height = x;
  width = y;
}

class Car 
{
  public: //public access specifier, default is private
	int year, price, options;
	
    void selectOptions (int);
    int totalPrice() {return price + (options * 1000);}
} coup; //declare "coup" object

void Car::selectOptions (int numOptions) 
{
  options = numOptions;
}

int main () 
{
	//pointer examples
	int myNum;
	int * myNumPtr;
	myNum = 100;
	myNumPtr = &myNum;
	
	printf("myNum: %d \n", myNum); //variable myNum value
	
	printf("myNum: %p \n", myNumPtr); //pointer address, hex
	printf("myNum: %d \n", myNumPtr); //pointer address, decimal
	
	printf("myNum: %p \n", *myNumPtr);//pointer value, hex
	printf("myNum: %d \n\n\n", *myNumPtr); //pointer value, decimal
	
	//dont change value of myNumPtr past this point!!!!
	//changing values in random memory addresses can f things up
	myNumPtr++;
	printf("myNum: %d \n", myNum); //variable myNum value
	
	printf("myNum: %p \n", myNumPtr); //pointer address, hex
	printf("myNum: %d \n", myNumPtr); //pointer address, decimal
	
	printf("myNum: %p \n", *myNumPtr);//pointer value, hex
	printf("myNum: %d \n\n\n", *myNumPtr); //pointer value, decimal
	
	
  Rectangle rect; //create "rect" object from "Rectangle" class
  rect.set_values (10,5); //set "rect" object values for height/width
  cout << "area: " << rect.area() << endl; //print area of "rect" object
  
  rect.set_values (4,4);
  cout << "area: " << rect.area() << endl;
  
  Car suv; //create "suv" object from "Car" class
  Car sedan; //create "sedan" object from "Car" class
  
  suv.price = 9999; //set price member variable of suv object
  suv.selectOptions(3); //use object method function to set member var
  cout << "Suv Price: " << suv.totalPrice() << endl;
  
  sedan.price = 10000; //set price member variable of sedan object
  sedan.selectOptions(8); //use object method function to set member var
  cout << "Sedan Price: " << sedan.totalPrice() << endl;
  
  //remember, coup object was declared with class
  coup.price = 49500; //set price member variable of coup object
  coup.selectOptions(8); //use object method function to set member var
  cout << "Coup Price: " << coup.totalPrice() << endl;
  
  return 0;
}


	
