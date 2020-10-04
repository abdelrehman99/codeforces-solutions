    #include <bits/stdc++.h>
    using namespace std;
     
    int pressed[4][4];
    int toggled[4][4];
     
    int main(){
     
    	for(int i = 1; i <= 3; i++){
    		for(int j = 1; j <= 3; j++){
    			cin >> pressed[i][j];
    			toggled[i][j] = pressed[i][j];
    		}
    	}
     
    	for(int i = 1; i <= 3; i++){
    		for(int j = 1; j <= 3; j++){
    			if(pressed[i][j] != 0){
    				//Added 2 extra rows and columns in toggled[][] to handle edge lamps 
    				//rows and columns 0 and 4 are auxilliary
    				toggled[i][j - 1] += pressed[i][j];
    				toggled[i][j + 1] += pressed[i][j];
    				toggled[i - 1][j] += pressed[i][j];
    				toggled[i + 1][j] += pressed[i][j];
     
    			}
    		}
    	}
     
    	for (int i = 1; i <= 3; i++){
    		for(int j = 1; j <= 3; j++){
    			if(toggled[i][j] % 2) cout << "0";
    			else cout << "1";
    		}
    		cout << '\n';
    	}
     
    	return 0;
    }
