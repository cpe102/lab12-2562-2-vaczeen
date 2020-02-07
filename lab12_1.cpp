#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
   
    return 0;
}
void stat(const double A[],int N,double B[]){
	double x=0;
	double y=0;
	double sum=0;
	B[3]=A[0];
	B[2]=A[1];
	for(int i=0;i<N;i++){
		x=x+A[i];
		B[0]=x/N;
	}
	for(int j=0;j<N;j++){
		y=y+pow(A[j],2);
		sum=pow((x/N),2);
		B[1]=sqrt((1.0/N*y)-sum);
    }
	for(int k=0;k<N;k++){
		
		if(A[k]>B[2]){
			B[2]=A[k];
		}
	}
	for(int l=0;l<N;l++){
		if(A[l]<B[3]){
			B[3]=A[l];
		}
	}


}
//Write definition of stat() here 