#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int h, count = 0;
	int nums[12] = {1,2,3,4,5,6,7,8,9,10,12};

    for (int i=1; i<=3000; i++){
        h= i * ( 2 * i -1);
		
		for(int j=0; j<12; j++){
			if(h%nums[j]==0){
				count++;
			}			
		}
    }

    cout << "Of the first 3000 hexagonal #'s " << count << " are divisble by integers form 1 to 12.";

    system("PAUSE");
    return 0;
}
