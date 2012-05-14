#include <iostream>
#include "fisher.hpp"

using namespace std;
int main(int argc, char* argv[]) {
		cout << fisher_test(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4])) << endl;
}

