#include "Vulture.h"

Vulture::Vulture()
{
	health = 50;
	attack = 20;
	defense = 0;
}

void Vulture::Stats()
{
	cout << "Attack : " << attack << endl;
	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl;
}

