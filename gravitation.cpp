#include <iostream>
#include "constants.h"
using namespace std;
using namespace my_constants;
int main (){
    float user_height, height1, height2;
    int i = 0;
    cout << "Enter the initial height of the tower in meters: ";
    cin >> user_height;
    
    cout << "At " << i << " seconds, " << "the ball is at height: " << user_height << " meters" << endl;
    for(;;){
        height1 = (my_gravity * i * i) / 2;
        height2 = user_height - height1;
        if(height2 > 0){
            cout << "At " << i << " seconds, " << "the ball is at height: " << height2 << " meters" << endl;
                
        }
        else
            break;
        i++;
    }
    cout << "At " << i << " seconds, " << "the ball is on the ground." << endl;


    return 0;
}
