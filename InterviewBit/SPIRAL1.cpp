#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

/*
 * Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.
*/

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	
	int DIR = 0, T  = 0, B = A.size()-1, L = 0 , R = A[0].size()-1;
	int c= 0, ele = ((B+1)*(R+1)); 
	
	while( (T <= B) || (L <= R) ){
		if(c == ele){			
			break;
		}
		switch(DIR){
			case 0:

				for( int i = T; i <= R; i++){

					result.push_back(A[T][i]);
					c++;
				}

				DIR = 1;
				
				T++;
				break;
			case 1:

				for( int i = T; i <= B; i++){

					result.push_back(A[i][R]);
					c++;
				}

				DIR = 2;
				R--;
				break;
			case 2:
				for( int i = R; i >= L; i--){

					result.push_back(A[B][i]);
					c++;
				}

				DIR = 3;
				B--;
				break;	
			case 3:

				for( int i = B; i >= T; i--){

					result.push_back(A[i][L]);
					c++;
				}

				DIR = 0;
				L++;
				break;	
		}
	}
		
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

}
 

int main ()
{
  // constructors used in the same order as described above:

  // the iterator constructor can also be used to construct from arrays:

	// Now we'll try to create a 3 by 5 "matrix".
// First, create a vector with 5 elements
   vector<int> v2(4, 0); 

// Now create a vector of 3 elements. 
// Each element is a copy of v2

   vector<vector<int> > v2d2(3,v2);

   
   vector<int> result = spiralOrder(v2d2);
  
   return 0;
}