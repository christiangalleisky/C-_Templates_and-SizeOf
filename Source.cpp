//test class August 3, 2019

#include <iostream>
#include <array>
#include <string>
#include "Header.h"

fun::fun(bool b, char c, short s, int i, unsigned int i1, long l, unsigned long l1,
	long long ll, long long int lli, float f, double d){
	this->b = b;
	this->c = c;
	this->s = s;
	this->i = i;
	this->i1 = i1;
	this->l = l;
	this->l1 = l1;
	this->ll = ll;
	this->lli = lli;
	this->f = f;
	this->d = d;
}
void fun::sizeOfMembers() {
	cout << sizeof(b) << endl;
	cout<<sizeof(c)<<endl;
	cout<<sizeof(s)<<endl;
	cout<<sizeof(i)<<endl;
	cout<<sizeof(i1)<<endl;
	cout<<sizeof(l)<<endl;
	cout<<sizeof(l1)<<endl;
	cout<<sizeof(ll)<<endl;
	cout<<sizeof(lli)<<endl;
	cout<<sizeof(f)<<endl;
	cout<<sizeof(d)<<endl;
}

template <class T, class U> T fun::add(T a, U b) {
	
	cout << endl << endl;
	cout << "1: " << a << endl;
	cout << "2: " << b << endl;

	T c = a + b;
	cout << c << endl;
	U d = a + b;
	cout << d << endl;

	return a+b;
}


int main() {
	double a = 1.9;
	double b = 1.4;
	int c = 1;
	int d = 2;

	fun fun0(true, 'c', 1, 1, 1, 1, 1, 1, 1, 1.0, 1.0);
	fun0.sizeOfMembers();
	cout << fun0.add(a, c) << endl;
	cout << fun0.add(b, d) << endl;
	cout << fun0.add(c, d) << endl;
	system("PAUSE");
	return 0;
}