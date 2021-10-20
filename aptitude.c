#include<stdio.h>
#include<ctype.h>
//ctype header is using for separate the interger and character from the string;

#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))
//here LEN is assigned for finding the length of the array;


#define M 2
//defining the M value as 2

#define Max 1000
//defining the Max value as 1000


//finding the co primes of the factor
int coprime(int n, int arr[n]){
    	 int hcf,i,j,arr1[M][n],arr2[M][n],c=0,num1,num2;
    	 
    	//making an array to 2d array with factors and reverse of factor
    	 for(i=0;i<n;i++){
    	     arr1[0][i]=arr[i];
    	 }
    	 for(i=n-1,j=0;i>=0;--i){
    	     arr1[1][j]=arr[i];
    	     j++;
    	 }
    	 
    	 //finding co prime factors
    	 for(int j=0;j<n/2;j++){
    	     num1=arr1[0][j];
    	     num2=arr1[1][j];
    	     for(i=1;i<=num1;i++){
    	         if(num1%i==0 && num2%i==0){
    	             hcf=i;
    	         }
    	     }
    	     if(hcf == 1){
    	         arr2[0][c]=num1;
    	         arr2[1][c]=num2;
    	         c++;
    	         
    	     }
    	     else{
    	         continue;
    	     }
    	     printf("\n");
    	 }
    	 for(int i=0;i<2;i++){
    	     for(int j=0;j<c;j++){
    	         printf("%d\t",arr2[i][j]);
    	     }
    	     printf("\n");
    	 }
    	 return 0;	
}


//finding factors of the given  number
int factor(int num){
int i,j=0,h,n=0;
int arr[Max];

//finding the factors using for loop
for(i = 1,j=0;i <= num; i++)
{
if(num % i == 0)
{
arr[j]=i;
j++;
n++;
//getting the factors and store it in the array(arr);
//and counting the no of factors using n increment;
}
}
//after getting the factors then pass the size and array to finding co prime factors;
coprime(n,arr);
return 0;
}


//switch case for the divisibility rule
int switchcase(int n){
    switch(n){
	case 1:
	       break;
	 
	case 2:
	
	       break;
	       
	case 3:
	
	       break;
	       
	case 4:
	
	       break;
	       
	case 5:
	
	       break;
	       
	case 6:
	
	       break;
	       
	case 7:
	
	       break;
	
	case 8:
	
	       break;
	       
	case 9:
	
	       break;
	       
	case 11:
	
	        break;
	 default :
	       printf("Not valid");
	       break;
    }
return 0;
}

// main function
int main(){
int n,arr[50],pos=0,sum=0;
char s[100];

//getting the value as integer with alphabets;
printf("Enter the value : ");
scanf("%s",s);

//getting the divisibility number
printf("Enter the divisibility number: ");
scanf("%d",&n);

//if the divisibility is greater than 11 then calling the function factor
if(n>11){
	factor(n);
}
else {
    switchcase(n);
}


return 0;
}





// divisibility problem upto getting divisibility value and finding the co prime factor and stored in array;