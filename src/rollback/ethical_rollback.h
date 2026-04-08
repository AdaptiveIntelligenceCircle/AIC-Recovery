#pragma once 
#include <string> 

#include <iostream> 
using namespace std ;

namespace aic :: recovery 
{
    class EthicalRollback 
    {
        public: 
        bool safeRollback(const string &nodeId, const string &compromisedState); 
        
        private: 
        bool validateLastGoodState(const string &state) const; 
    }; 
} // namespace aic :: recovery.. 