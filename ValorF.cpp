#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void EntradaDados();
void CalculaLitros(double Distancia, double ConsumoGasolina, double ConsumoAlcool, double PrecoGasolina, double PrecoAlcool);
void CalculaValor(double PrecoGasolina, double PrecoAlcool, double LitrosGasolina, double LitrosAlcool);
void ValeMais(double ValorGasolina, double ValorAlcool);

int main()
{
    EntradaDados();
    return 0;
}


void EntradaDados()
{
    double ConsumoAlcool, ConsumoGasolina, PrecoGasolina, PrecoAlcool, Distancia;

    cout << "Bem vindo ao app" << endl;
    cout << "\n Digite o valor da Distancia aproximada que voce vai percorrer: " << endl;
    cin >> Distancia;

    cout << "\n Digite o valor do consumo medio da gasolina de seu carro: " << endl;
    cin >> ConsumoGasolina;

    cout << "\n Digite o valor do consumo medio do alcool de seu carro: " << endl;
    cin >> ConsumoAlcool;

    cout << "\n Digite o preco da gasolina do posto: " << endl;
    cin >> PrecoGasolina;

    cout << "\n Digite o preco do Alcool do posto: " << endl;
    cin >> PrecoAlcool;

    CalculaLitros(Distancia, ConsumoGasolina, ConsumoAlcool, PrecoGasolina, PrecoAlcool);
  
}


void CalculaLitros(double Distancia, double ConsumoGasolina, double ConsumoAlcool, double PrecoGasolina, double PrecoAlcool)
{
   double LitrosAlcool, LitrosGasolina;

   LitrosGasolina =  Distancia / ConsumoGasolina;

   LitrosAlcool = Distancia / ConsumoAlcool;

   cout << "\n \n Serao necessarios " << ceil(LitrosGasolina) << " litros de gasolina para chegar ao seu destino" << endl;
   
   cout << "\n Serao necessarios " << ceil(LitrosAlcool) << " litros de alcool para chegar ao seu destino" << endl;

   CalculaValor(LitrosGasolina, LitrosAlcool, PrecoGasolina, PrecoAlcool);
}


void CalculaValor(double PrecoGasolina, double PrecoAlcool, double LitrosGasolina, double LitrosAlcool)
{
  double ValorGasolina, ValorAlcool;

  ValorGasolina = PrecoGasolina * LitrosGasolina;

  ValorAlcool = PrecoAlcool * LitrosAlcool;

  cout << "\n \n O valor gasto se colocar gasolina sera de: R$" << setprecision(4) << ValorGasolina << endl;
  cout << "\n O valor gasto se colocar alcool sera de: R$" << setprecision(4) <<  ValorAlcool << endl;

  ValeMais(ValorGasolina, ValorAlcool);
}

void ValeMais(double ValorGasolina, double ValorAlcool)
{
  if(ValorGasolina < ValorAlcool)
    cout << "\n \n Nesse caso vale mais a pena abastecer com Gasolina" << endl;
  else if(ValorGasolina == ValorAlcool)
    cout << "\n Nesse caso o valor de abastecer com gasolina ou alcool sao iguais" << endl;
  else
    cout << "\n Nesse caso compensa mais abastecer com Alcool" << endl;

}