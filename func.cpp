#include<iostream>
using namespace std;
                             //sum of two numbers
  /* int sum(int a, int b)
   {
     int s = a + b ;
    return s;
}
int main()
{
    cout<<sum(10,5);
    return 0 ;
} */
                          //sum of N numbers
/* int SumofN(int n ){
     int sum = 0;
     for(int i = 0 ; i <=n; i++)
     {
        sum+=i;
     }
     return sum ;
}
int main()
{
    cout<<SumofN(7);
    return 0 ;
} */
                   //calculate N fictorial
/* int fictorial(int n)
{
   int fact = 1 ;
   for(int i = 1 ; i <=n; i++)
     {
        fact   *= i;
     }
     return fact ;
}
int main()
{
    cout<<fictorial(5);
    return 0 ;
} */
                        //calculate the sum of the digits of the number
/*int sumofdigits(int num )
{
    int digsum = 0 ;
    while(num>0){
   int lastdig = num%10;
   num/=10;
   digsum += lastdig;
    }
    return digsum;
}

 int main(){
 cout<<sumofdigits(1234);
 return 0 ;
 }      */
                      //calculate nCr of binomial coeffient of n and r
 /* int fictorial(int n)
{
   int fact = 1 ;
   for(int i = 1 ; i <=n; i++)
     {
        fact   *= i;
     }
     return fact ;
}
int nCr(int n , int r){
    int fact_n = fictorial(n);
     int fact_r = fictorial(r);
      int fact_nr = fictorial(n-r);
      return fact_n/(fact_r * fact_nr) ;
}
int main()
{
    int n =8 ,  r=4 ;
   cout<<nCr(n , r);

    return 0 ;
    }                                       */
                  //function to check if a number is prime of not 

/*bool Nprime(int n) {
    if (n <= 1) return false;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= n-1; i++) {  // Check up to n-1
        if (n % i == 0) {
            return false;  // If divisible by any number other than 1 and itself, not prime
        }
    }
    return true;  // If no divisors found, the number is prime
}

int main() {
    int num = 6;  // You can change this to test with different numbers
    if (Nprime(num)) {
        cout << "The number is prime" << endl;
    } else {
        cout << "The number is not prime" << endl;
    }
    return 0;
} */
             //function to print all prime number from 2 to n
/*bool isPrime(int num) {
    if (num <= 1) return false;  
    for (int i = 2; i <= num-1 ; i++) {  
        if (num % i == 0) {
            return false;  
        }
    }
    return true;  
}
void Allprime(int n) {
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) {  
            cout << i << " "; 
        }
    }
    cout << endl;  
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;  
    cout << "Prime numbers from 2 to " << n << ": ";
    Allprime(n);  // Call the function to display all prime numbers up to n
    return 0;
} */