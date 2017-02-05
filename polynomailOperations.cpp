
#include <iostream>
#include <vector>

using namespace std;
using std::vector;

template <typename T>
void polynomialAddition( vector<T>& v1, vector<T>& v2) //add two vectors element to element and stores it in v1
{
	v1[0]=v1[0]+v2[0];
	v1[1]=v1[1]+v2[1];
	v1[2]=v1[2]+v2[2];

	return;
}
template <typename T>
void polynomialMultiplication( vector<T>& v1, vector<T>& v2)//multiplies two vectors stores result in v1
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


int main()
{
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
v1.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	cout<< "\nAddition"<<endl;
	polynomialAddition(v1, v2);
	printIntegersVector(v1);
	/*the values of v1 changed when the addition function was called so I will reset them to use them for multiplication*/
v1[0]=1;
	v1[1]=2;
	v1[2]=3;
	cout<< "\nMultiplication"<<endl;
	polynomialMultiplication(v1,v2);
	printIntegersVector(v1);
return(0);
}

