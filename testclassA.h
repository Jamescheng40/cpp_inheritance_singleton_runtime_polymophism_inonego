#pragma once


#include <iostream>

using namespace std;

class A {
	static A *singleton;

protected:
	friend class C;
	virtual void AP() = 0;

public:
	static A *get_singleton();
	A();
	~A();
};
