#include "self_recovery.h"
using namespace std; 

#include <iostream>
#include <string>

namespace aic :: recovery 
{
    bool SelfRecovery :: TriggerSelfHealing(
        const string &triggerReason 
    )
    {
        cout << "[AIC Recovery] - Self healing triggered by:" << triggerReason << endl;
        return executeHealingProtocol(); 
    }

    bool SelfRecovery :: executeHealingProtocol()
    {
        cout << "[AIC-Recovery] Executing decentrailized self-healing....\\n"; 
        return true; 
    }
} // namespace aic :: recovery..