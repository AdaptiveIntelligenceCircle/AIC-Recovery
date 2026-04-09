#pragma once 
#include <string> 

using namespace std;

namespace aic  :: recovery 
{
    class AnomalyDetection 
    {
        public:
        bool detectMaliciousNode(
            const string &nodeId, const string &behavior 
        ); 

        private:
        bool isBehaviorAnomalous(
            const string &behavior
        ) const; 
    }; 
} // namespace aic :: recovery..