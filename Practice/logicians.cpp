#include <iostream>
using namespace std;

int main() {
	
	int t, n;
	int bstring[100];
	
	cin >> t;
	
	while(t--) {
	    
	    cin >> n;
	    
	    for(int i = 0; i < n; i++) {
	        
	        cin >> bstring[i];
	    }
	    
	    if(n>1) {
	        
            for(int i = 0; i < n; i++) {
        
    	        if(bstring[i] == 1 && i != n-1) {
    	            
    	            cout << "IDK" << endl;
    	            
    	        }
    	        
    	        else if(bstring[i] == 0) {
    	            
    	            cout << "NO" << endl;
    	            
    	        }
    	        
    	        else if(i == n-1 && bstring[i] == 1) {
    	            
    	            cout << "YES" << endl;
    	            
    	        }
    	        
    	        
    	    }
	        
	    }
	    
	    
	}
	
	return 0;
}
