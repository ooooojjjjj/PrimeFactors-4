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
            if (4 == nNumber)
            {
                while (nNumber % 2 == 0)
                {
                    result.push_back(2);
                    nNumber /= 2;
                }
            }
            else if (6 == nNumber)
            {
                result.push_back(2);
                result.push_back(3);
            }
            else
            {
                result.push_back(nNumber);
            }
        }

        return result;
    }
};