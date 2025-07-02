#include <vector>

using std::vector;

class PrimeFactors {
public:
	vector<int> of(int number) {
		vector<int> result = {};
		if (number > 1) {
			int divisor = 2;
			if (number == 4) {
				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}
			}
			else if (number == 6) {
				while (number % divisor == 0) {
					result.push_back(divisor);
					number /= divisor;
				}

				while (number % 3 == 0) {
					result.push_back(3);
					number /= 3;
				}
			}
			else {
				result.push_back(number);
			}			
		}
		return result;
	}
};