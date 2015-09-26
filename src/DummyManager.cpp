#include <iostream>
#include "DummyManager.h"

DummyManager*	DUMMYMAN = NULL;

DummyManager::DummyManager()
{
	int i;
	std::cin >> i;
	std::system("sleep 20");
}

int DummyManager::doNothing()
{
	int i;
//	std::cin >> i;
	return 0;
}
