#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"


class Mutator {
protected:
private:	
	
public:
	Mutator();
	virtual Individual * Mutate(Individual * I, int k)=0;
};
#endif