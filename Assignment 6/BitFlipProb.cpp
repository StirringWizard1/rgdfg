#include "BitFlipProb.h"

	BitFlipProb::BitFlipProb(double pnob)
	{
		p=prob;
	}

	Individual * BitFlipProb::Mutate(Individual * In, int k)
	{	
		for (int i = 0; i < In->getLength(); ++i)
		{
			if (rand()<=p)
			{
				In->flipBit(i);
			}
		}
		return In;
	}
	

	