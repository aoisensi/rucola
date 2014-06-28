#include <iostream>
#include "client.hpp"

using namespace std;

int main() {
	cout << "Hello Rucola!!" << endl;
	return Rucola::Client().Run();
}
