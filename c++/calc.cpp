#include <iostream>
#include <string>
#include <random>
void add();
using namespace std;

class MyClass {       
  public:             
    int myNum;       
    string myString; 
};

string resultado_func(int result_user, int resultado){
  string resultado_soma = (result_user == resultado) ? "acertou" : "errou";  
  return resultado_soma;
}

int main() {
  add();
  return 0;
} 

void add(){
  random_device dev;
  mt19937 rng(dev());
  uniform_int_distribution<mt19937::result_type> dist6(1,10); // distribution in range [1, 6]
  int valor = dist6(rng);
  int valor2 =  dist6(rng);

  int result_user;
  int resultado = valor + valor2;

  cout << "how much is:  " << valor << "+" << valor2 << endl;
  cin >> result_user;

  string result = resultado_func(result_user, resultado);
  
  cout << result << endl;

  main();
}

