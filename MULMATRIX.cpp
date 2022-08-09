#include<iostream>

using namespace std;

int main()
{
   int A[5][5];
   int B[5][5]; 
   
   int rA,cA; 
   int rB,cB;
   int i,j,k;
   
   int C[5][5];
   
   cout<<"This program solves  matrix multiplication\n";
   cout<<endl;
   cout<<"Enter the number of rows for Matrix A = ";
   cin>>rA;
   cout<<"Enter the number of columns for Matrix A = ";
   cin>>cA; 
   cout<<"Enter the number of rows for Matrix B = ";
   cin>>rB;
   cout<<"Enter the number of columns for Matrix B =";
   cin>>cB; 
   cout<<endl;
   
      if(cA != rB){
            cout<<"Error :";
          cout<<"The row of Matrix A  is not equal to " ;
          cout<<"the column of Matrix B \n";     
            
     } 
    
    /*   if(cA != rB){      
       cout<<"Error :";      
       cout<<"The row of Matrix A  is not equal to " ;
       cout<<"the column of Matrix B \n"; 
       }*/
      else{   
      
      for(i=0;i<rA;i++){
         for(j=0;j<cA;j++)
         {
           cout<<"Enter values for Matrix A ["<<i+1<<"]"<<"["<<j+1<<"]"<<" = ";
           cin>>A[i][j];                    
         }
      }
      for(i=0;i<rB;i++){
         for(j=0;j<cB;j++)
         {
           cout<<"Enter values for Matrix B ["<<i+1<<"]"<<"["<<j+1<<"]"<<" = ";
           cin>>B[i][j];                    
         }
       }
       
       for(i=0;i<rA;i++){
         for(j=0;j<cB;j++){
       
          
          C[i][j] = 0;
         for(k=0;k<cA;k++) 
         {
             //sum  =  sum + A[rA][k]*B[k][cB];  
             
             C[i][j] = C[i][j] + A[i][k]*B[k][j];			                     
         }
        }
      }
      cout<<endl;
      cout<<"The multiplication of Matrix A and Matrix B: "<<endl;
      
      for(i=0;i<rA;i++){              
         for(j=0;j<cB;j++){
            cout<<"\t"<<C[i][j]<<" ";
           // cout<<"\t"<<sum<<" ";                       
        }
        cout<<endl;
      } 
    }    
 system("pause");
  return 0;    
}
