// N = no of students
// X = no of boys
// K = no of members in grps

#include <iostream>
using namespace std;

int main() {
	
	int g, t, rg, rb;
	
	long long int n, x, k;
	
	cin >> t;
	
	while(t > 0){
	    
	    cin >> n >> x >> k;
	    
	    g = n - x;
	
    	int bg = x / k;
    	int gg = g / k;
    	
    	if(x%k != 0){
    	    
    	    rb = x - (bg * k);
    	    
    	}
    	
    	else{
    	    
    	    rb = 0;
    	}
    	
    	
    	if(g != 0){
    	
        	if(g%k != 0){
        	    
        	    rg = g - (gg * k);
                cout << rg - rb << endl;
        	    
        	}
        	
        	else{
        	    
        	    rg = 0;

                cout << rb << endl;

        	}
        	
    	    
	    
    	}

        else{
            cout << rb << endl;
        }
    
	    t--;
	}
	
	
	
	
	return 0;
}