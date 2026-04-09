#include "anomaly_detection.h"
#include <iostream>

using namespace std; 

namespace aic :: recovery 
{
    bool AnomalyDetection :: detectMaliciousNode(
        const string &nodeId, const string &behavior 
    )
    {
        cout << "[AIC-Recovery] - Checking Node" << nodeId << "for anomalies...." << endl; 
        return isBehaviorAnomalous(behavior);
    }

    bool AnomalyDetection :: isBehaviorAnomalous(const string &behavior ) const 
    {
        return behavior.find("MALICIOUS") != string ::npos or behavior.find("BACKUP") !=string::npos; 
    }

    // namespace aic :: recovery..
}