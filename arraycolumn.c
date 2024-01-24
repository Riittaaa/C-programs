#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {3,2,4},
        {7,6,4},
        {9,2,8}
    };
    int i,j;
    for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
	    {
            printf("arr[%i][%i]:%i\n",i,j,arr[i][j]);
        }
    }
    return 0;
}

