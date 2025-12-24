void menu(){
 printf("\n========OPÇÕES========\n");
 printf("1 - Ver saldo\n");
 printf("2 - Fazer depósito\n");
 printf("3 - Fazer saque\n");
 printf("4 - Sair\n");
 printf("=====================\n");

}

int main(){

    int escolha;
    
    float 
    saldo,
    deposito,
    saque;
    
    do{
    menu();
    
    printf("Escolha:");
    scanf("%d", &escolha);
   
        switch (escolha){
            case 1:
                printf("\nSeu saldo é:%.2f\n", saldo);
            break;
          case 2:

                float
                deposito;
    
                printf("\nQual o valor do depósito?:\n");
                scanf("%f", &deposito);

                saldo = saldo + deposito;
                printf("\nSeu saldo novo é:%.2f\n", saldo);
            break;
          case 3:
                printf("\nQuanto gostaria de sacar?:\n");
                scanf("%f", &saque);
                
                saldo = saldo - saque;
                printf("\nSeu saldo novo é:%.2f\n", saldo);
            break;
          case 4:
                printf("\n Você escolheu sair\n");
            break;

           default:
                printf("\nEscolha inválida\n");
            break;
        }
    
    } while (escolha!=4);
    
  return 0;
}