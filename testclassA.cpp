#include "testclassA.h"
#include <stdio.h>
A *A::singleton = NULL;

A *A::get_singleton() {

	return singleton;
}

A::A() {
	printf("hello world \n");
	singleton = this;

}

A::~A() {

	singleton = NULL;

}
