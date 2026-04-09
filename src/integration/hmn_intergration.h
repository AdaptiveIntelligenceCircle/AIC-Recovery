#pragma once 
#include <string>

#include <iostream> 
using namespace std; 

namespace aic :: recovery 
{
    class HMNIntegration 
    {
        public: 
        bool integrateWithHMN(const string &recoveryEvent);

        private:
        bool notifyMeaningNetwork(
            const string &event
        ); 
    }; 
} // namespace aic :: recovery..
