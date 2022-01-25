//

#include <iostream>

using namespace std;

int fun(int arr[],int size,int index){

if(index==-1)

return 0;

else if(arr[index]%5==0)

return(1+fun(arr,size,index-1));

else

return(fun(arr,size,index-1));

}
