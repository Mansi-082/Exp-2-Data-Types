//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;
void staticExample(){
    //int z=0;
    static int z=0;
    z++;
    cout<< "The value of z is: "<<z<<endl;
}

int main(){
    staticExample();
    staticExample();
    staticExample();    
    return 0;
}
