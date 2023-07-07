#include <stdio.h>
int gcd(int a, int b) //function nsd
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) //function nsk 2 numbers
{
    return (a * b) / gcd(a, b);
}
int moreLCM(int arr[], int n) //function to find nsk several numbers
{   int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);}
        return result; }

int main() {
    int n; //declaration of variable n
    printf("enter how many numbers (2 <= p <= 20): ");
    scanf("%d", &n);
    if (n < 2 || n > 20) { //limit on the number of numbers
        printf("error.\n");
        return 0;}

    int arr[n]; //creation of an array with the size specified earlier
    printf(" ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    int lcmResult = moreLCM(arr, n); //performs function more LCM
    printf("%d\n", lcmResult);//displays information
return 0;
}