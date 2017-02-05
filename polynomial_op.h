#ifndef POLYNOMIAL_OPERATIONS
#define POLYNOMAIL_OPERATIONS
#include<iostream>
#include<vector>
 using namespace std;
 using std::vector;

 template <class T>
 class polynomialOperations
 {
 public:
    void vectorAddition(vector<T> &v1, vector<T> &v2)
    {
        v1[0]=v1[0]+v2[0];
        v1[1]=v1[1]+v2[1];
        v1[2]=v1[2]+v2[2];

	return;
    }
    void vectorMultiplication(vector<T> &v1, vector<T> &v2)//multiplies two vectors stores result in v1
    {
	/*when you multiply two polynomials of degree 2 the resulting polynomial will be of degree 4 thus it will have a maximum of 5 elements*/
	int x4, x3, x2, x, c;
	x4=v1[0]*v2[0];
	x3=v1[0]*v2[1]+v1[1]*v2[0];
	x2=v1[0]*v2[2]+v1[1]*v2[1]+v1[2]*v2[0];
	x  =v1[1]*v2[2]+v1[2]*v2[1];
	c  =v1[2]*v2[2];
	/*I will modify the first three elements of the vector and then attach the remaining 2*/
	v1[0]=x4;
	v1[1]=x3;
	v1[2]=x2;
	v1.push_back(x);
	v1.push_back(c);

	return;
    }
    void printIntegersVector(vector<int>& v1)
    {
	cout<<"\n\nThe Resulting Polynomials coefficients are\n\n";
	for(int i=0; i<v1.size(); i++)
	{
		cout<< v1[i]<< "  ";

	}
	cout<<endl;
    return;
    }
 };
#endif // POLYNOMIAL_OPERATIONS
