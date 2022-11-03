#include <cstdlib>
#include <iostream>
 
using namespace std;

void soma(int n1, int n2) 
{
    n1 = 0;
    n2 = 0;

    return n1 + n2;
    
}

 
int main()
{
   int n1;
   int n2;

   std::cout << "Digite dois números: ";
   std::cin >> n1 >> n2;

   std::cout << "A soma dos números é: " << soma(n1,n2) << std::endl;
   
 
    return EXIT_SUCCESS;
}