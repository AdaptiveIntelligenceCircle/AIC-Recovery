#include "distributed_backup.h"
#include <iostream>

namespace aic :: recovery 
{
    bool DistributedBackup :: createDistributeBackup(const string &nodeId)
    {
        cout << "AIC-Recovery : Creating distributed backup for node" << nodeId << endl; 
        return true; 
    }

    bool DistributedBackup :: restoreFromBackup(const string &nodeId)
    {
        cout << "AIC-Recovery: Restoring Node" << nodeId << "from distributed backup...\\n"; 
        return true; 
    }

    vector<string> DistributedBackup :: getHealthyNodes() const 
    {
        return {"node-001" , "node-002", "node-157"};
    }
}