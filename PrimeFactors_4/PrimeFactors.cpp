#include <vector>

using namespace std;

class PrimeFactors
{
public:
    vector<int> of(int nNumber)
    {
        vector<int> result = {};

        if (2 == nNumber)
        {
            result.push_back(2);
        }

        return result;
    }
};