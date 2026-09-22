#include <iostream>
using namespace std;

	class Prova
	{
		public: 
			static int v1;
			int v2;
	
		Prova()
		{
			v2 = 2;
		}
		
	void troca()
	{
		v1 = v2;
	}
};