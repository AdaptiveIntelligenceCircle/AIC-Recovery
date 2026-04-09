#pragma once 
#include <string> 
using namespace std; 

namespace aic :: recovery 
{
    class SelfRecovery 
    {
        public:
        bool TriggerSelfHealing(const string &triggerReason); 

        private: 
        bool executeHealingProtocol(); 
    }; 
}// namespace aic :: recovery..