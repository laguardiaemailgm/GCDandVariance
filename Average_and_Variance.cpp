
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void printArray(double* arr_test, int size_arr);
void inputArray(double* arr_test, int size_arr);
double calcavg(double* testvals,int size_arr);
double variance(double* testvals,int size_arr,double average);

int main()
{
    int size_arr = 14;
    double testvals[size_arr];
    double average = 0;

    cout<<"Average and Variance Calculator\n";
    //Input Data
    inputArray(testvals,size_arr);

    //Stores the average
    average = calcavg(testvals,size_arr);

    cout<<"\nAverage is: "<< average;
    cout<<"\nVariance is: "<< variance(testvals,size_arr,average);

}
void inputArray(double* arr_test, int size_arr)
{
    cout<<"Input:\n";
    for(int i = 0 ; i < size_arr ; i++)
    {
        cout<< "R[" << i << "]"<<": ";
        cin >> arr_test[i];
    }
}
//Returns the variance of the array
double variance(double* testvals,int size_arr, double average)
{
    double variance = 0;
    for(int i = 0 ; i < size_arr ; i++)
    {
            testvals[i] -= average;
            testvals[i] = pow(testvals[i],2);

            //Accumulator
            variance += testvals[i];
    }
    return variance/size_arr;
}

double calcavg(double* testvals,int size_arr)
{
    double average = 0;
    for(int i = 0 ; i < size_arr ; i++)
    {
            average += testvals[i];
    }
    return average/size_arr;
}

void printArray(double* arr_test, int size_arr)
{
    cout<<"Result:\n";
    for(int i = 0 ; i < size_arr ; i++)
    {
        cout<< "R[" << i << "]"<<": "<<setw(3)<<arr_test[size_arr] << " ";
    }
}
