#include <vector>

using namespace std;

class PrimeFactors
{
public:
    vector<int> of(int nNumber)
    {
        vector<int> result = {};

        if (1 < nNumber)
        {
            result.push_back(nNumber);
        }

        return result;
    }
};