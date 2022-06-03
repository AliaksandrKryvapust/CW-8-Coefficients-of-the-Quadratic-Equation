#include<iostream>
#include <vector>
using namespace std;
vector<int> quadratic(const int a,const int b) {
	return (a == b && a > 1)? vector<int> ( { -(a + b), (a * b) }) : vector<int>({1, -(a + b), (a* b)});
}
int main() {
	int a = 1;
	int b = 2;
	return 0;
}
