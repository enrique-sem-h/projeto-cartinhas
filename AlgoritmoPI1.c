#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, voltar = 0;
    char nomeCrianca[30], sexo, nomeMae[30], endereco[50];
        char nomePad[30], sexoPad, cpfPad[20], telefonePad[20];
            char nomeVol[30], sexoVol, telefoneVol[14];
            int idade;

    while(voltar == 0){
    printf("Digite o numero para a opção desejada:\n1. Cadastrar criança\n2. Cadastrar padrinho/madrinha\n3. Cadastrar voluntário\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("CADASTRO DA CRIANÇA\n");

            printf("Digite o nome da criança: ");
            scanf(" %[^\n]s", &nomeCrianca); 

            printf("Informe o sexo(M ou F): ");
            fflush(stdin);
	        scanf("%c",&sexo);

            printf("Informe o nome da mae: ");
            scanf(" %[^\n]s", &nomeMae);

            fflush(stdin);
            printf("Informe o endereco: ");
	        scanf(" %[^\n]s", &endereco);          
            
    
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("\tDADOS INFORMADOS\n");
        
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("Nome da criança: %s\n", nomeCrianca);
            if(sexo == 'm' || sexo == 'M')
                printf("Sexo: Masculino\n");
            else if(sexo == 'f' || sexo == 'F')
                printf("Sexo: Feminino\n");
            printf("Nome da mãe: %s\n", nomeMae);
            printf("Endereço: %s\n", endereco);


            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
            printf("Digite 0 para repetir\n");
            scanf("%d", &voltar);
            break;
        case 2:
            printf("CADASTRO DE PADRINHO/MADRINHA\n");

            printf("Insira o nome do padrinho: ");
            scanf(" %[^\n]s", &nomePad);

            printf("Informe o sexo(M ou F): ");
            fflush(stdin);
            scanf("%c", &sexoPad);

            printf("Informe o CPF: ");
            scanf("%s", &cpfPad);

            printf("Informe o telefone para contato: ");
            scanf(" %[^\n]s", &telefonePad);
            
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("\tDADOS INFORMADOS\n");
        
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("Nome do padrinho/madrinha: %s\n", nomePad);
            if(sexoPad == 'm' || sexoPad == 'M')
                printf("Sexo: Masculino\n");
            else if(sexoPad == 'f' || sexoPad == 'F')
                printf("Sexo: Feminino\n");
            printf("CPF: %s\n", cpfPad);
            printf("Telefone: %s\n", telefonePad);


            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
            printf("Digite 0 para repetir\n");
            scanf("%d", &voltar);
            break;
        case 3:
            printf("CADASTRO DE VOLUNTÁRIO\n");

            printf("Digite o nome o voluntário: ");
            scanf(" %[^\n]s", &nomeVol); 

            printf("Informe o sexo(M ou F): ");
            fflush(stdin);
	        scanf("%c",&sexoVol);

            printf("Informe um telefone para contato: ");
            scanf(" %[^\n]s", &telefoneVol);

            printf("Informe a idade: ");
	        scanf(" %d", &idade);          
            
    
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("\tDADOS INFORMADOS\n");
        
            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
        
            printf("Nome do voluntátio: %s\n", nomeVol);
            if(sexoVol == 'm' || sexoVol == 'M')
                printf("Sexo: Masculino\n");
            else if(sexoVol == 'f' || sexoVol == 'F')
                printf("Sexo: Feminino\n");
            printf("Telefone: %s\n", telefoneVol);
            printf("Idade: %d\n", idade);


            printf("-=-=-=-=-=-=-=--=-=-=-=-=-=-=-\n");
            printf("Digite 0 para repetir\n");
            scanf("%d", &voltar);
            break;
        default:
            printf("Opção invalida");
            printf("Digite 0 para repetir\n");
            scanf("%d", &voltar);
            break;
    }
    }

}
