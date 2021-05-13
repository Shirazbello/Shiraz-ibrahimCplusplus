
#include <iostream>

using namespace std;

int main()
{
    //Arrays and its calls
    int arr[5]={1,2,3,4,5};
    int*pp=arr;
    cout<<"size of array is: "<<sizeof(arr)<<endl;
    cout<<"Arrays calls\n";
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
     cout<<arr[i]<<"\t"<< *(pp+i)<<endl; 
     
    }
    cout<<endl;
    
    //Matrix and its calls 2D
    int mat[3][3]={
       { 1,2,3},
       { 4,5,6},
        {7,8,0}
        
    };
    
    cout<<"Matix calls\n";
    for(int x=0;x<3;x++)
    {
    	for(int y=0;y<3;y++ )
		{
			cout<<mat[x][y] <<"\t";
		}
		cout<<endl;
	}
    
    cout<<"\n3-D Matrix\n";
    
    //Matrix and its calls 3D
    //int x[arrays][Rows][Columns]
    int three_D[2][3][4] = 
    { 
     { {0,1,2,3},
	   {4,5,6,7},
	   {8,9,10,11} 
	 },
     { {12,13,14,15},
	   {16,17,18,19}, 
	   {20,21,22,23} }
    };
    //Accesing a single elemnt of 3D .i.e element 17
    cout<<three_D[1][1][1]<<endl<<"\n";
    
    //Accessing all the Arrays of the 3D  		
    	for(int rw=0;rw<3;rw++)
		{
		    cout<<"[";
			for(int col=0;col<4;col++)
			{
				
				cout<<three_D[0][rw][col]<<"\t";
				
			}
			cout<<"]";
			cout<<"\t";
			 cout<<"[";
			for(int col=0;col<4;col++)
			{
				
				cout<<three_D[1][rw][col]<<"\t";
				
			}
			cout<<"]";
			cout<<endl;
		}
	cout<<endl;
	
	
    
    
    return 0;
}

