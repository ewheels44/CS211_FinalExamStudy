#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h> 

using namespace std;	// Debatable, but easier for now.

class  Myclass{

	private:
		int Values;

	public:
		Myclass(); 										// No argument constructor
		Myclass(const Myclass & Other); 				// Copy constructor
		Myclass &operator=(const Myclass & Other); 		// assignment operator
		virtual ~Myclass(); 							// class destructor


		//methods
		void dosomething(int x);
};

// original (no edits)
/* void myfunc( int A, int * B, int C[ ], int * D ) { */
/*  */
/*  */
/*      A = 42; */
/*  */
/*      *B = 42; */
/*  */
/*      C[ 0 ] = 42; */
/*  */
/*      D = 42; */
/*  */
/*  */
/*      return; */
/*  */
/* } */

// writen for C
// fixed function from above
//
void myfunc( int A, int * B, int C[ ], int * D ) {


     A = 42;

     *B = 42;

     C[ 0 ] = 42;

     *D = 42;

     return;

}

void myfunc2( int A, int *B, int C[], int &D)
{
	A = 42;
	*B = 42;
	C[0] = 42;
	D = 42;
}

// A function that takes a douuble as an arugment and returns an int

// A function that takes a pointer to an int as an argument, and returns a char:

// A function that takes a float as an argument and returns a pointer to a double:

// A function that takes two doubles as arguments, and does not return anything:

// A function that takes pointer to a Point3d as an argument, and returns a generic pointer:

int main(int argc, const char** argv) {

	int A, B, C, D = 0;

	cout << "original numbers" << endl;
	cout << A << " " << B << " " << C << " " << D << endl;

	myfunc(A, &B, &C, &D);

	cout << "myfunc" << endl;
	cout << A << " " << B << " " << C << " " << D << endl;

	myfunc2(A, &B, &C, D);

	cout << "myfunc2" << endl;
	cout << A << " " << B << " " << C << " " << D << endl;

    return 0;
}
