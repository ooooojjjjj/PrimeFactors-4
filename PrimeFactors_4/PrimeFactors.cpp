#include <vector>

using namespace std;

class PrimeFactors
{
public:
    vector<int> of(int nNumber)
    {
        vector<int> result = {};

        for (int divisor = 2; nNumber > 1; divisor++)
        {
            while (nNumber % divisor == 0)
            {
                result.push_back(divisor);
                nNumber /= divisor;
            }
        }

        return result;
    }
};