/*
Summary:
Print hexadecimal values

Notes:
0000 - FFFF

-Copy/Pasting hex practice values from cmd to doc file
might require different IDE or directly loading file from 
command prompt
*/


#include <iostream> /*cout, endl */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

using namespace std;

void convertValue(int x, int y)
{	
	switch (x) 
	{
  		case 10:
   			cout << "A --- "  << x * y << endl;
    		break;
  		case 11:
   			cout << "B --- "  << x * y << endl;
    		break;
    	case 12:
   			cout << "C --- "  << x * y << endl;
    		break;
    	case 13:
   			cout << "D --- "  << x * y << endl;
    		break;
    	case 14:
   			cout << "E --- "  << x * y << endl;
    		break;
    	case 15:
   			cout << "F --- "  << x * y << endl;
    		break;
  		default:
    		break;
  }
}




void printHex(int a, int b)
{
	switch (a) 
	{
	  		case 10:
	   			cout << "A";
	    		break;
	  		case 11:
	   			cout << "B";
	    		break;
	    	case 12:
	   			cout << "C";
	    		break;
	    	case 13:
	   			cout << "D";
	    		break;
	    	case 14:
	   			cout << "E";
	    		break;
	    	case 15:
	   			cout << "F";
	    		break;
	  		default:
	  			cout << a;
	    		break;
	  
	}
}

//Generate list of hex numbers for worksheet practice
void genHexNumbers()
{
	/* initialize random seed: */
  	srand (time(NULL));
  	int a;
  	
  	cout << "Copy/paste values into doc file to print" << endl;
  	for (int x = 0; x <= 100; x++)
	{
  		a = rand() % 16;
  		printHex(a);
  		a = rand() % 16;
  		printHex(a);
  		cout << "  "; //padding for printing worksheet
	}
	cout << endl;
}

int main()
{
	
	for (int x = 0, y = 1; ; x++)
	{
		if (x <= 9)
		{
			cout << x << " --- " << x * y << endl;
		}
		else
		{
			convertValue(x, y);
		}
		if (x == 15)
		{
			x = 0;
			y *= 16;
			cout << endl << endl << endl;
		}
		if (y >= 5000 ) //greater than 4,096 
		{
			break;
		}
	}
	
	genHexNumbers();
	
	return 0;
}


