#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
     char codigo1[20], codigo2[20];
     unsigned long int populacao1,populacao2, turismo1, turismo2;
     char nome1[50],nome2[50], estado1[50], estado2 [50];
     double PIB1,PIB2,Area1,Area2,pibper1, pibper2,densidade_invertida1,densidade_invertida2;
     double densidade1, densidade2,pibreais1, pibreais2;
     double super_poder,resultadosuper1,resultadosuper2;
     
     
             // Entrada para o cartão 1
      
     printf("************* Carta 1 ***********\n \n"); 
     
     printf("Digite o código da Cidade: \n"); //Código da cidade
     scanf("%s", codigo1); //Aqui está trazendo o código da cidade,
     
     printf("Nome da cidade \n");//Digite o Nome da Cidade exemplo sao paulo
     scanf(" %[^\n]s", nome1); //O [^] está sendo usado para leitura do espaço antes no entender 
     
     printf("Digite o estado:\n");//Digite o Estado
     scanf("%s", estado1); // Apresenta o estado
     
     printf("Digite a População da cidade: \n"); // Quantidade da populacao
     scanf("%lu", &populacao1);
     
     printf("Digite a área: \n"); //População do estado
     scanf("%lf", &Area1);
     
     printf("Digite o PIB da cidade: \n"); // PIB produto Interno Bruto da cidade
     scanf("%lf", &PIB1);
     
     printf("Digite a quantidade de pontos turistico:  \n"); //Quantidade de pontos turísticos
     scanf("%lu", &turismo1);
     
     
     printf("\n \n");
     
     
     //Entrada carta 2
      
     printf("************* Carta 2 ***********\n \n"); 
     
     printf("Digite o código da Cidade: \n"); //Código da cidade
     scanf("%s", codigo2); //Aqui está trazendo o código da cidade,
     
     printf("Nome da cidade \n");//Digite o Nome da Cidade exemplo sao paulo
     scanf(" %[^\n]s", nome2); //O [^] está sendo usado para leitura do espaço antes no entender 
     
     printf("Digite o estado:\n");//Digite o Estado
     scanf("%s", estado2); // Apresenta o estado
     
     printf("Digite a População da cidade: \n"); // Quantidade da populacao
     scanf("%lu", &populacao2);
     
     printf("Digite a área: \n"); //População do estado
     scanf("%lf", &Area2);
     
     printf("Digite o PIB da cidade: \n"); // PIB produto Interno Bruto da cidade
     scanf("%lf", &PIB2);
     
     printf("Digite a quantidade de pontos turistico:  \n"); //Quantidade de pontos turísticos
     scanf("%lu", &turismo2);
     
     printf("\n \n \n"); // Pular 3 linha e aparece a informavaoda carta 1
     
     
     
     //Saídas cartas 1 e 2
     
     //Carta1
     
     printf("Carta 1 \n"); //Nome da carta que irá aparecer
     printf("Estado: %s \n", estado1); // Sigla do estado
     printf("Código da cidade: %s \n", codigo1); //Trás o código da cidade digitada
     printf("Nome da Cidade: %s \n", nome1); //Nome da cidade
     printf("População: %lu \n", populacao1); 
     printf("Área: %.2f km² \n", Area1); //usando o ponto dois para especifivar a casa decimal
     printf("PIB %.2f bilhões em reais; \n", PIB1);
     printf("Número de pontos turísticos: %lu \n", turismo1);
     
     densidade1 = populacao1 / Area1; //Calculo densidade 1
     
     printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
     
     
     pibreais1 = PIB1 * 1e9; //conversão PIB1 de bilhoespara reais
     pibper1 = pibreais1 / populacao1; //Calculo PIB per capital
     
     printf("PIB per Capita: %.2f reais:  \n", pibper1); //aparece o resultado
     
     /*Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos 
     numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e 
     o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
     Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao
      somar valores de tipos diferentes! */
     
     densidade_invertida1 = 1 / densidade1; // Inverte a densidade2 
     
     resultadosuper1 = (float)populacao1 + Area1 + PIB1 + (float)turismo1 + pibper1 + densidade_invertida1;
     
     printf("\n \n O super poder da carta 1 representa %2.f \n", resultadosuper1);
     
     
     
     //saída carta2
     
     printf("Carta 2 \n"); //Nome da carta que irá aparecer
     printf("Estado: %s \n", estado2); // Sigla do estado
     printf("Código da cidade: %s \n", codigo2); //Trás o código da cidade digitada
     printf("Nome da Cidade: %s \n", nome2); //Nome da cidade
     printf("População: %lu \n", populacao2); 
     printf("Área: %.2f km² \n", Area2); //usando o ponto dois para especifivar a casa decimal
     printf("PIB %.2f bilhões em reais; \n", PIB2);
     printf("Número de pontos turísticos: %lu \n", turismo2);
     
     densidade2 = populacao2 / Area2; //Calculo densidade 2
     
     printf("Densidade Populacional: %.2f hab/km² \n", densidade2); //aparece o resultado
    
     pibreais2 = PIB2 * 1e9; //conversão PIB2 de bilhoespara reais
     pibper2 = pibreais2 / populacao2; //Calculo PIB per capital
     
     printf("PIB per Capita: %.2f reais:  \n", pibper2); //aparece o resultado
     
     densidade_invertida2 = 1 / densidade2; // Inverte a densidade2 
     
     resultadosuper2 = (float)populacao2 + Area2 + PIB2 + (float)turismo2 + pibper2 + densidade_invertida2;
     
     printf("\n \n O super poder da carta 2 representa %2.f \n", resultadosuper2);
     
     
     printf(" \n \n");
     
     // Comparação cartas
      printf("************  Comparação poder ************ \n \n");
     
     
     printf("A população vencedora é %lu habitantes (da %s) \n",
           (populacao1 > populacao2) ? populacao1 : populacao2, // faz o calculo
           (populacao1 > populacao2) ? "carta 1" : "Carta 2"); // apresenta a carta 
           
     
     printf("A area vencedora é %.2f km² (da %s) \n",
           (Area1 > Area2) ? Area1 : Area2,  // faz o calculo
           (Area1 > Area2) ? "Carta 1" : "Carta 2"); // apresenta a carta 
           
           
     printf("O PIB vencedor é %lf (da %s) \n",
           (PIB1 > PIB2) ? PIB1 : PIB2, // faz o calculo
           (PIB1 > PIB2) ? "Carta 1" : "Carta 2");// apresenta a carta 


     printf("O ponto turístico vencedor é %lu  (da %s) \n",
           (turismo1 > turismo2) ? turismo1 : turismo2,// faz o calculo
           (turismo1 > turismo2) ? "Carta 1" : "Carta 2");// apresenta a carta 
           
           
     printf("A Densidade vencedora é %.2f hab/km² (da %s) \n",
           (densidade1 > densidade2) ? densidade1 : densidade2,// faz o calculo
           (densidade1 > densidade2) ? "Carta 1" : "Carta 2");// apresenta a carta 
      
      
           
     printf("O PIB per capita vencedor é %.2f (da %s) \n",
           (pibper1 > pibper2) ? pibper1 : pibper2,// faz o calculo
           (pibper1 > pibper2) ? "Carta 1" : "Carta 2");// apresenta a carta 
                 
           
     printf("O super poder vencedor é %2.f  (da %s) \n",
           (resultadosuper1 > resultadosuper2) ? resultadosuper1 : resultadosuper2, // faz o calculo
           (resultadosuper1 > resultadosuper2) ? "Carta 1" : "Carta 2"); // apresenta a carta 
                 
           
           
    return 0;
}