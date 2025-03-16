#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char codigo1[20], codigo2[20];
    int populacao1,populacao2, turismo1, turismo2;
    char nome1[50],nome2[50], estado1[50], estado2 [50];
    float PIB1,PIB2,Area1,Area2; 
                        
                             
      // Entrada para o cartão 1
                                                
           printf("Carta 1 \n \n"); 
          
           printf("Digite o código da Cidade: \n"); //Código da cidade
           scanf("%s", codigo1); //Aqui está trazendo o código da cidade,
                              
           printf("Nome da cidade \n");//Digite o Nome da Cidade exemplo sao paulo
           scanf(" %[^\n]s", nome1); //O [^] está sendo usado para leitura do espaço antes no entender 
                                                               
           printf("Digite o estado:\n");//Digite o Estado
           scanf("%s", estado1); // Apresenta o estado
                                                                                                       
           printf("Digite a População da cidade: \n"); // Quantidade da populacao
           scanf("%u", &populacao1);
                                                                                                                      
           printf("Digite a área: \n"); //População do estado
           scanf("%f", &Area1);
                                                                                                                                     
           printf("Digite o PIB da cidade: \n"); // PIB produto Interno Bruto da cidade
           scanf("%f", &PIB1);
                                                                                                                                                    
           printf("Digite a quantidade de pontos turistico:  \n"); //Quantidade de pontos turísticos
           scanf("%u", &turismo1);
                                                                                                                                                                   
                                                                                                                                                                        
           printf("\n \n"); // Pula duas linhas 
                                                                                                                                                                                  
                                                                                                                                                                                       
    // Entrada carta 2
                                                                                                                                                                                                                 
          
          printf("Carta  2 \n \n");   //Essa sa mensagem que o usuário irá ver para saber diferenciar cara 1 e 2
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                          
          printf("Digite o código da Cidade: \n"); //Código da cidade
          scanf("%s", codigo2); //Aqui está trazendo o código da cidade,
                                                                                                                                                                                                                                                         
          printf("Nome da cidade \n");//Digite o Nome da Cidade exemplo sao paulo
          scanf(" %[^\n]s", nome2); //O [^] está sendo usado para leitura do espaço antes no entender 
                                                                                                                                                                                                                                                                        
          printf("Digite o estado:\n");//Digite o Estado
          scanf("%s", estado2); // Apresenta o estado
                                                                                                                                                                                                                                                                                       
          printf("Digite a População da cidade: \n"); // Quantidade da populacao
          scanf("%u", &populacao2);
                                                                                                                                                                                                                                                              
          printf("Digite a área: \n"); //População do estado
          scanf("%f", &Area2);
                                                                                                                                                                                                                                                                                                                     
          printf("Digite o PIB da cidade: \n"); // PIB produto Interno Bruto da cidade
          scanf("%f", &PIB2);
                                                                                                                                                                                                                                                                                                                                    
          printf("Digite a quantidade de pontos turistico:  \n"); //Quantidade de pontos turísticos
          scanf("%u", &turismo2);
                                                                                                                                                                                                                                                                                                                                                   
          //Saída das carta 1 e 2
                                                                                                                                                                                                                                                                                                                                                             
           printf("\n \n \n"); // Pular 3 linha e aparece a informavaoda carta 1
                                                                                                                                                                                                                                                                                                                                                                       
         
           //Carta1
                                                                                                                                                                                                                                                                                                                                                                                 
           printf("Carta 1 \n"); //Nome da carta que irá aparecer
           printf("Estado: %s \n", estado1); // Sigla do estado
           printf("Código da cidade: %s \n", codigo1); //Trás o código da cidade digitada
           printf("Nome da Cidade: %s \n", nome1); //Nome da cidade
           printf("População: %u \n", populacao1); 
           printf("Área: %.2f m² \n", Area1); //usando o ponto dois para especifivar a casa decimal
           printf("PIB %.2f bilhões em reais; \n", PIB1);
           printf("Números de pontos turísticos: %u \n", turismo1);
        
                                                                                                                                                                                                                                                                                                                                                                                                                
           printf("\n \n \n");  //pular 3 linha para apresentar carta 2
                    
           //Carta 2
                                                                                                                                                                                                                                                                                                                                                                                                                                             
           
           printf("Carta 2 \n"); //Nome da carta que irá aparecer
           printf("Estado: %s \n", estado2); // Sigla do estado
           printf("Código da cidade: %s \n", codigo2); //Trás o código da cidade digitada
           printf("Nome da Cidade: %s \n", nome2); //Nome da cidade
           printf("População: %u \n", populacao2); 
           printf("Área: %.2f m² \n", Area2); //usando o ponto dois para especifivar a casa decimal
           printf("PIB %.2f bilhões em reais; \n", PIB2);
           printf("Números de pontos turísticos: %u \n", turismo2);
   
           // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
