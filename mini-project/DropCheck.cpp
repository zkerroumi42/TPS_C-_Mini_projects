#include "DropCheck.h"

DropCheck::DropCheck()
{

}

DropCheck::~DropCheck()
{

}
bool DropCheck::productReleased() {
		
		srand(time(NULL));
		int c = (rand() % 10) + 1;
		if (c == 10)
			return 0;
		else
			return 0;
	}