#include <iostream>
#include <string>
#include <random>
using namespace std;

class Operations {       
  public:
    int difficult;
    int result_user; 
    int valor, valor2;

    void generate_numbers(){
      random_device dev;
      mt19937 rng(dev());
      uniform_int_distribution<mt19937::result_type> dist6(1, difficult);
      valor = dist6(rng);
      valor2 =  dist6(rng);
    }

    void add(){
      generate_numbers();
      int result_user;
      int resultado = valor+valor2;

      cout << "how much is:  " << valor << "+" << valor2 << endl;
      cin >> result_user;

      string result = resultado_func(result_user, resultado);
      
      cout << result << endl;
    }
    void mult(){
      generate_numbers();
      int result_user;
      int resultado = valor*valor2;

      cout << "how much is:  " << valor << " * " << valor2 << endl;
      cin >> result_user;

      string result = resultado_func(result_user, resultado);
      
      cout << result << endl;
    }
    void sub(){
      generate_numbers();
      int result_user;
      int resultado = valor-valor2;

      cout << "how much is:  " << valor << " - " << valor2 << endl;
      cin >> result_user;

      string result = resultado_func(result_user, resultado);
      
      cout << result << endl;
    }
    void div(){
      generate_numbers();
      int result_user;
      int resultado = valor/valor2;

      cout << "how much is:  " << valor << " / " << valor2 << endl;
      cin >> result_user;

      string result = resultado_func(result_user, resultado);
      
      cout << result << endl;
    }
    string resultado_func(int result_user, int resultado){
      string resultado_soma = (result_user == resultado) ? "acertou" : "errou";  
      return resultado_soma;
    }
    Operations(int mode){
      switch(mode){
        case 1:
        mode = 10; 
        difficult = mode;
        cout << difficult;
        break;
        case 2: 
        mode = 100;
        difficult = mode;
        cout << difficult;
        break;
        case 3:
        mode = 1000; 
        difficult = mode;
        cout << difficult;
        break;
      }
    }
};
int main(void) {
  int mode, op; 
  cout << "Choose the mode:" << endl << "1-easy "  <<  endl << "2-medium "  <<  endl << "3- hard";
  cin >> mode;
  Operations op_Objt(mode);

  cout << "Choose the operations:" << endl << "1-add "  <<  endl << "2-subtracion "  <<  endl << "3- division";
  cin >> op;
  switch(op){
    case 1:

    break; 
    case 2:

    break;
    case 3:

    break;  
  }
} 