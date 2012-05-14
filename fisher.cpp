#include <boost/math/distributions/normal.hpp> // for normal_distribution
using boost::math::normal; // typedef provides default type is double.
#include <boost/math/distributions/hypergeometric.hpp>
using boost::math::hypergeometric;

#include <iostream>
using std::cout; using std::endl; using std::left; using std::showpoint; using std::noshowpoint;
#include <iomanip>
using std::setw; using std::setprecision;
#include <limits>
using std::numeric_limits;

#include <stdlib.h>

using namespace boost::math;
using namespace std;

double fisher_test(unsigned a, unsigned b, unsigned c, unsigned d);

int main(int argc, char* argv[]) {
normal_distribution<> myNormal(1.0, 10.0);
printf("%f", (double)myNormal.mean());
cout << "Mean: " << myNormal.mean()  << ", standard deviation: ";
cout<< myNormal.standard_deviation() << endl;

// Distributional properties
double x = 10.25;
//  
cout << "pdf: " << pdf(myNormal, x) << endl;
cout << "cdf: " << cdf(myNormal, x) << endl;
//
unsigned int r = atoi(argv[1]);
unsigned int n = atoi(argv[2]);
unsigned int N = atoi(argv[3]);
cout << r << n << N << endl;
hypergeometric hgd(r, n, N);
cout << pdf(hgd, atoi(argv[4])) << endl;
cout << fisher_test(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
}
