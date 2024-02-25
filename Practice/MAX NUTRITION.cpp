#include <iostream>
using namespace std;

int main() {
	
	int t, n, t;
	int ftype[n], nvalue[n];
	
	while (t--) {
	    
	    for (int i = 0; i < n; i++) {   // Fruit type
	        
	        cin >> ftype[i];
	        
	    }
	    
	    for (int i = 0; i < n; i++) {   // Nutrition value
	        
	        cin >> nvalue[i];
	        
	    }
	    
	    for (int i = 0; i < n; i++) {
	        
	        if(nvalue[i] > 0) {
	            
	            for (int i = 0; i < n-1; i++) {
	                
	                if(ftype[i] == ftype[i+1]) {
	                    
	                    if(nvalue[i] > nvalue[i+1]) {
	                        
	                        nvalue[i+1] = nvalue[i];
	                    }
	                    
	                }
	                
	                a += nvalue[i+1];
	                
	                
	                
	                
	            }
	            
	            
	        }
	        
	    }
	}
	
	
	return 0;
}
