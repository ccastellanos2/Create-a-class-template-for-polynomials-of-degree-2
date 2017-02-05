#include <iostream>
#include <vector>
using namespace std;
using std::vector;
#include "polynomial_op.h"

int main()
{
    polynomialOperations<int> integerPolynomialOperations;
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
    v1.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	cout<< "\nAddition"<<endl;
	integerPolynomialOperations.vectorAddition(v1, v2);
	integerPolynomialOperations.printIntegersVector(v1);
	/*the values of v1 changed when the addition function was called so I will reset them to use them for multiplication*/
    v1[0]=1;
	v1[1]=2;
	v1[2]=3;
	cout<< "\nMultiplication"<<endl;
	integerPolynomialOperations.vectorMultiplication(v1,v2);
	integerPolynomialOperations.printIntegersVector(v1);
return(0);
}

