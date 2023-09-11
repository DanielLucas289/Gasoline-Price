#include <stdio.h>
#include <math.h>

void EntradaDados();
void CalculaLitros();

int main()
{
    EntradaDados();
    return 0;
}

void EntradaDados()
{
    int ConsumoAlcool, ConsumoGasolina, PrecoGasolina, PrecoAlcool, Distancia;

    printf("Bem vindo ao app\n");
    printf("\n Digite o valor da Distancia aproximada que voce vai percorrer: \n");
    scanf("%d", &Distancia);

    printf("\n Digite o valor do consumo medio da gasolina de seu carro: \n");
    scanf("%d", &ConsumoGasolina);

    printf("\n Digite o valor do consumo medio do alcool de seu carro: \n");
    scanf("%d", &ConsumoAlcool);

    printf("\n Digite o preco da gasolina do posto: \n");
    scanf("%d", &PrecoGasolina);

    printf("\n Digite o preco do Alcool do posto: \n");
    scanf("%d", &PrecoAlcool);

    CalculaLitros(Distancia, ConsumoGasolina, ConsumoAlcool, PrecoGasolina, PrecoAlcool);
  
}

void CalculaLitros(int Distancia, int ConsumoGasolina, int ConsumoAlcool, int PrecoGasolina, int PrecoAlcool)
{
   double LitrosAlcool, LitrosGasolina;

   LitrosGasolina = Distancia / ConsumoGasolina;

   LitrosAlcool =  Distancia / ConsumoAlcool;

   printf("\n \n Serao necessarios %.2lf litros de gasolina para chegar ao seu destino \n", ceil(LitrosGasolina));
   
   printf("\n \n Serao necessarios %.2lf litros de alcool para chegar ao seu destino \n", ceil(LitrosAlcool));
}
