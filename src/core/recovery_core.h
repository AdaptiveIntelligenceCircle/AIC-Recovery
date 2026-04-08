#pragma once 
#include <string> 
#include <iostream> 

using namespace std;

#include <cmath> 

namespace aic :: recovery 
{
    class RecoveryCore 
    {
        public: 
        RecoveryCore(); 
        ~RecoveryCore(); 

        // Kiem tra trạng thái hệ thống va quyet dinh hanh dong recovery.. 
        bool performEthicalCheck(const string &node_id, const string &stateHash);
        
        // Khoi tao recovery cho toan mang luoi.. 
        bool initializeRecovery();

        // Tra ve trang thai hien tai cua ethical kernel.. 
        string getEthicalStatus() const; 

        private:
        bool isEthicalCompliant(const string &stateHash) const; 
    }; 
} // namespace aic :: recovery.. 