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
            int divisor = 2;

            if (4 == nNumber)
            {
                while (nNumber % divisor == 0)
                {
                    result.push_back(divisor);
                    nNumber /= divisor;
                }
            }
            else if (6 == nNumber)
            {
                for (divisor = 2; nNumber > 1; divisor++)
                {
                    while (nNumber % divisor == 0)
                    {
                        result.push_back(divisor);
                        nNumber /= divisor;
                    }
                }
            }
            else if (9 == nNumber)
            {
                result.push_back(3);
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