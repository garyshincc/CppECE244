#include <iostream>
#include <vector>


using namespace std;

int main(){
	vector < vector < int > > matrix(6, vector<int>(6));

	for (int i = 0; i < 6; i++){
		for ( int j = 0; j < 6; j++){
			cin >> matrix[i][j];
		}
	}
	
	int maxheight = 0;
	int maxCol = 0;
	for (int col = 0; col < 6; col++){
		for (int row = maxheight; row < 6; row++){
			if( matrix[row][col] == 0)
				break;
			// means met a column that is lower than me
			else{
				// met a higher one
				maxCol = col;
				maxheight = row;
			}    
		}
		maxheight ++;
		
	}
	cout << "at: " << maxCol+1 << endl; 
	return 0;
}
