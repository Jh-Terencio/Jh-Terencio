#include<stdio.h>

int main()
{
    float salario, imposto, salLqd;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if(salario <= 1903.99)
    {
        imposto = 0;
    }
    else
        if(salario <= 2826.66)
        {
            imposto = (salario*0.075) - 142.8;
        }
        else
            if(salario <= 3751.06)
            {
                imposto = (salario*0.15) - 354.8;
            }
            else
                if(salario <= 4664.69)
                {
                    imposto = (salario*0.225) - 636.13;
                }
                else
                {
                    imposto = (salario*0.275) - 869.36;
                }
    salLqd = salario - imposto;
    printf("Salario bruto: %.2f\t\tImposto: %.2f\tSalario liquido: %.2f", salario, imposto, salLqd);
}
