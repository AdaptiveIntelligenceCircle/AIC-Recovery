#pragma once 
#include <string> 

#include <vector>
using namespace std; 

namespace aic :: recovery 
{
    class DistributedBackup 
    {
        public:
        bool createDistributeBackup(const string &nodeId); 

        bool restoreFromBackup(const string &nodeId); 

        private: 
        vector<string> getHealthyNodes() const; 
    }; 
} // namespace aic :: recovery//