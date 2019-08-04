#include <iostream>
#include <array>
#include <string>

#ifndef FUN_H
#define fUN_H

using namespace std;

class fun {
public:
	fun(bool, char, short, int, unsigned int, long, unsigned long, 
		long long, long long int, float, double);
	void sizeOfMembers();
	template <class T, class U> T add(T a, U b);
private:
	bool b;
	char c;
	short s;
	int i;
	unsigned int i1;
	long l;
	unsigned long l1;
	long long ll;
	long long int lli;
	float f;
	double d;
	size_t size = 4;
	array<int, 4> numbers{0,3,1,2};
};

#endif // !fun_H
