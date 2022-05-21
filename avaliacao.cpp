/*
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores
ALUNA: Kemily Teixeira da Rosa
Entrega: 21/05/2022
(Altere a data conforme a entrega)
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <unistd.h>
#include <conio.h> // Para usar o getch();
#define TAM 10
#define NUM 500

using namespace std;

//definição variaveis 

//gerais
int op, i, x = 0, y = 0, numero = 0, aux;
char opcao;

//Questão 01
int positivo = 0, negativo = 0;
char respQuest[9];

//Questão 02
int braCoo, henCav, ianSom, rodHil, chrPra, priSup, segSup, somVot, sindico, qntEleitor, voto; 

// Questão 03
float serie, resp;

// Questão 04
int number[NUM], numeroMenor, numeroMaior, menorMedia, maiorMedia, impares, pares, soma, media;

//Questão 05
char codCpf[10],aposta, numHex[2];
float a,b, result;
int qtdGiros, numSorte, acumSorte, retornoF, numBin[2];

// Questão 07 
int inicio, fim, contador, nprimo;
char escolha, repetir;

/*
		FUNÇÕES UTILIZADAS NA QUESTÃO 05
*/
void validaCpf(char codCpf[10]){
	int  div, verificador1, verificador2, aux[10], aux2[10], mult;
	//Transformando valor recebido em int
    for(int i=0; i<11;i++){
        aux[i] = codCpf[i] - '0';
        cout << " " << aux[i];
    }
    
    //DEFININDO 1º DIG VERIFICADOR
    //Primeiro passo: multiplica-se cada um dos numeros, da direita para a esquerda por numeros crescentes a partir de 2
    //e armazena os resultador em uma soma 
	int j=10;
    for(int i=0; i<9; i++){
    	mult = aux[i]*j;
    	j--;
    	soma = soma + mult;
	}
    //Segundo passo: pega o modulo da soma por 11
        div = soma%11;
        
    //Verificação para deterinar 1º dig verificador, se menor que 2 --> 0, se não ---> 11 - resultado anterior
        if(div<2){
            verificador1 = 0;
        } else if (div>=2){
            verificador1 = 11-div;
        }
        
    //penultima posição do vetor recebe o 1º digito verificador
    for(int i=0; i<11;i++){
    	if(i==9){
        	aux2[9] = verificador1;
		} else
			aux2[i] = codCpf[i] - '0';
    }
	
	mult=0;
	soma=0;
	div = 0;
	
    //DEFININDO 2º DIG VERIFICADOR
    j=11;
    for(int i=0; i<10; i++){
    	mult = aux2[i]*j;
    	j--;
    	soma = soma + mult;
	}
	div = soma%11;
	
	if(div<2){
            verificador2 = 0;
        } else if (div>=2){
            verificador2 = 11-div;
        }
        
    aux2[10] = verificador2;

	if((aux[9] == aux2[9])&&(aux[10] == aux2[10]))
	    cout << "\n CPF VÁLIDO!";  
	else if ((aux[9] != aux2[9])&&(aux[10] != aux2[10]))
	    cout << "\n CPF INVÁLIDO!";
}

float Equacao1Grau (float a, float b){
    float solucao;

    solucao = -b/a;

    return solucao;
}

int CaraOuCoroa (int qtdGiros, int numSorte, char aposta){
    char sort;
    int acumSorte;

    for(int i=1; i<=qtdGiros; i++){
        acumSorte = acumSorte + ((i*numSorte)-qtdGiros);
    }

    if(acumSorte%2==0){
        sort = 'A'; //CARA
    } else if (acumSorte%2!=0){
        sort = 'C'; //COROA
    }

    if(sort == aposta){
        return 0;
    } else if (sort != aposta){
        return 1;
    }
}

void bubble_sort_cresc(int vetor[], int tam) //--------FUNCAO BUBBLE SORT ORDEM CRESCENTE
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void bubble_sort_desc(int vetor[], int tam) //-------FUNCAO BUBBLE SORTE ORDEM DECRESCENTE
{
    int aux;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}


main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    system("cls");
    cout << fixed << setprecision(2);

    cout << "ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
    cout << "INDICADORES: \n";
    cout << "1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
    cout << "2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
    cout << "3. Utiliza operações aritméticas em programas.\n";
    cout << "4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
    cout << "5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
    cout << "6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
    cout << "7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";

    do
    {
        system("cls");
        cout << "\n ====================================================================================";
        cout << "\n [1] Questão 01 - Investigação Criminal"; // OK PRONTO 
        cout << "\n [2] Questão 02 - Eleição de Sindico";    // OK PRONTO
        cout << "\n [3] Questão 03 - Séries Matemáticas";    // OK PRONTO
        cout << "\n [4] Questão 04 - Vetor de Números Aleatórios"; // OK PRONTO
        cout << "\n [5] Questão 05 - Menu de Opções - Funções"; // OK PRONTO
        cout << "\n [6] Questão 06 - Desenho Utilizando Tabela ASCII"; // ENTREGA SEPARADA
        cout << "\n [7] Questão 07 - Números Primos"; // OK PRONTO
        cout << "\n [8] FIM.";
        cout << "\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
        cin >> op;
        switch (op)
        {
        case 1: /*--------------------------- QUESTÃO 01 ---------------------------*/
        {
            cout << "\n ========================================";
            cout << "\n == QUESTÃO 01 - INVESTIGAÇÃO CRIMINAL ==";
            cout << "\n ========================================";
            cout << "\n\n Você está pronto para responder ao questionário? [S]SIM [N]NÃO >>>\t ";
            do{
            cin >> opcao;
            opcao = toupper(opcao);
            if (opcao == 'N')
            {
                x=1;
                cout << "\n\n OK. Volte quando estiver pronto. Até mais!\n\n";
                system("pause");
                break;
            } else if (opcao == 'S')
            {   
                x=1;
                cout << "\n OK. Vamos continuar: \n";
                break;
            } else {
                x=0;
                cout << "\n\n Não reconhecemos sua resposta, tente novamente...\t";
            }
            } while (x==0);
            do
            {
                cout << "\n\n >>> INVESTIGAÇÃO Assassinato na Casa Branca <<<";
                cout << "\n RESPONDA AS PERGUNTAS APENAS COM [S]SIM ou [N]NÃO";
                do
                {
                    cout << "\n\n >>> Trocou mensagens com a vítima? <<<";
                    cin >> respQuest[0];
                    respQuest[0] = toupper(respQuest[0]);

                    if ((respQuest[0] == 'S') || (respQuest[0] == 'N'))
                    {
                        x = 1;

                        if (respQuest[0] == 'S')
                        {
                            positivo++;
                        } else if (respQuest[0] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Esteve no local do crime? <<<";
                    cin >> respQuest[1];
                    respQuest[1] = toupper(respQuest[1]);

                    if ((respQuest[1] == 'S') || (respQuest[1] == 'N'))
                    {
                        x = 1;

                        if (respQuest[1] == 'S')
                        {
                            positivo++;
                        } else if (respQuest[1] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> É parente ou reside perto da vítima? <<<";
                    cin >> respQuest[2];
                    respQuest[2] = toupper(respQuest[2]);

                    if ((respQuest[2] == 'S') || (respQuest[2] == 'N'))
                    {
                        x = 1;

                        if (respQuest[2] == 'S')
                        {
                            positivo++;
                        } else if (respQuest[2] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Devia algum valor para a vítima? <<<";
                    cin >> respQuest[3];
                    respQuest[3] = toupper(respQuest[3]);

                    if ((respQuest[3] == 'S') || (respQuest[3] == 'N'))
                    {
                        x = 1;

                        if (respQuest[3] == 'S')
                        {
                            positivo++;
                        } else if (respQuest[3] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Trabalha ou trabalhou com a vítima? <<<";
                    cin >> respQuest[4];
                    respQuest[4] = toupper(respQuest[4]);

                    if ((respQuest[4] == 'S') || (respQuest[4] == 'N'))
                    {
                        x = 1;

                        if (respQuest[4] == 'S')
                        {
                            positivo++;
                        }else if (respQuest[4] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Possui algum tipo de relacionamento amoroso com a vítima? <<<";
                    cin >> respQuest[5];
                    respQuest[5] = toupper(respQuest[5]);

                    if ((respQuest[5] == 'S') || (respQuest[5] == 'N'))
                    {
                        x = 1;

                        if (respQuest[5] == 'S')
                        {
                            positivo++;
                        }else if (respQuest[5] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Ficou feliz pelo destino fatídico da vítima? <<<";
                    cin >> respQuest[6];
                    respQuest[6] = toupper(respQuest[6]);

                    if ((respQuest[6] == 'S') || (respQuest[6] == 'N'))
                    {
                        x = 1;

                        if (respQuest[6] == 'S')
                        {
                            positivo++;
                        }else if (respQuest[6] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                do
                {
                    cout << "\n\n >>> Possui algum tipo de arma de fogo? <<<";
                    cin >> respQuest[7];
                    respQuest[7] = toupper(respQuest[7]);

                    if ((respQuest[7] == 'S') || (respQuest[7] == 'N'))
                    {
                        x = 1;

                        if (respQuest[7] == 'S')
                        {
                            positivo++;
                        }else if (respQuest[7] == 'N')
                        {
                            negativo++;
                        }
                    }
                    else
                    {
                        x = 0;
                        cout << "\n\n RESPONDA SOMENTE COM [S]SIM ou [N]NÃO! Tente novamente >>>";
                    }
                } while (x == 0);

                cout << "\n\n Com base em suas respostas, você foi classificado como...";

                if (positivo < 4)
                {
                    cout << "\n\n===============================================";
                    cout << "\n== INOCENTE... Até que se prove ao contrário ==";
                    cout << "\n===============================================\n\n";
                    positivo = 0;
                    negativo = 0;
                }
                else if ((positivo >= 5) && (positivo <= 7))
                {
                    cout << "\n\n========================";
                    cout << "\n== POSSÍVEL CRIMINOSO ==";
                    cout << "\n========================\n\n";
                    positivo = 0;
                    negativo = 0;
                }
                else if ((positivo == 8) && (negativo == 0))
                {
                    cout << "\n\n===========================";
                    cout << "\n==========ASSASSINO========";
                    cout << "\n===========================\n\n";
                    positivo = 0;
                    negativo = 0;
                }
                else if ((positivo == 4) && (negativo == 4))
                {
                    cout << "\n\n========================";
                    cout << "\n======= SUSPEITO =======";
                    cout << "\n========================\n\n";
                    positivo = 0;
                    negativo = 0;
                }
                opcao = 'N';
            } while (opcao == 'S');
            system("pause");
            break;
        }
        case 2: /*--------------------------- QUESTÃO 02 ---------------------------*/
        {
            cout << "\n =====================================";
            cout << "\n == QUESTÃO 02 - ELEIÇÃO de SINDICO ==";
            cout << "\n ======= Edificio Cordas Bambas ======";
            cout << "\n\n Insira a quantidade de ELEITORES: ";
            cin >> qntEleitor;

            cout << "\n >>> Edificio Cordas Bambas apresenta seus Candidatos <<< ";
            cout << "\n\t [1] - Henry Cavill";
            cout << "\n\t [2] - Ian Somerhalder";
            cout << "\n\t [3] - Rodrigo Hilbert";
            cout << "\n\t [4] - Chris Pratt";
            cout << "\n\t [5] - Bradley Cooper";

            for (i = 1; i <= qntEleitor; i++)
            {
                do
                {
                    cout << "\n\n Eleitor de número [" << i << "] >> Insira o número que corresponde ao seu candidato. VOTE CONSIENTE! >> \t";
                    cin >> voto;
                    if (voto == 1)
                    {
                        y = 1;
                        henCav++;
                    }
                    else if (voto == 2)
                    {
                        y = 1;
                        ianSom++;
                    }
                    else if (voto == 3)
                    {
                        y = 1;
                        rodHil++;
                    }
                    else if (voto == 4)
                    {
                        y = 1;
                        chrPra++;
                    }
                    else if (voto == 5)
                    {
                        y = 1;
                        braCoo++;
                    }
                    else if ((voto < 1) || (voto > 5) || (voto = 0))
                    {
                        y = 0;
                        i = i - 1;
                        cout << "\n\n VOTO INVÁLIDO! Não são permitidos votos NULOS ou EM BRANCO! Tente novamente...";
                    }
                } while (y = 0);

                if (henCav > ianSom && henCav > rodHil && henCav > chrPra && henCav > braCoo)
                {
                    sindico = 1;
                }
                else if (ianSom > henCav && ianSom > rodHil && ianSom > chrPra && ianSom > braCoo)
                {
                    sindico = 2;
                }
                else if (rodHil > henCav && rodHil > ianSom && rodHil > chrPra && rodHil > braCoo)
                {
                    sindico = 3;
                }
                else if (chrPra > henCav && chrPra > ianSom && chrPra > rodHil && chrPra > braCoo)
                {
                    sindico = 4;
                }
                else if (braCoo > henCav && braCoo > ianSom && braCoo > rodHil && braCoo > chrPra)
                {
                    sindico = 5;
                }
            }
            switch (sindico)
            {
            case 1:
            {
                cout << "\n\n O NOVO SINDICO ELEITO É: Henry Cavill";
                if (ianSom > rodHil && ianSom > chrPra && ianSom > braCoo)
                {
                    priSup = 2;
                }
                else if (rodHil > ianSom && rodHil > chrPra && rodHil > braCoo)
                {
                    priSup = 3;
                }
                else if (chrPra > ianSom && chrPra > rodHil && chrPra > braCoo)
                {
                    priSup = 4;
                }
                else if (braCoo > ianSom && braCoo > rodHil && braCoo > chrPra)
                {
                    priSup = 5;
                }
                break;
            }
            case 2:
            {
                cout << "\n\n O NOVO SINDICO ELEITO É: Ian Somerhalder";
                if (henCav > rodHil && henCav > chrPra && henCav > braCoo)
                {
                    priSup = 1;
                }
                else if (rodHil > henCav && rodHil > chrPra && rodHil > braCoo)
                {
                    priSup = 3;
                }
                else if (chrPra > henCav && chrPra > rodHil && chrPra > braCoo)
                {
                    priSup = 4;
                }
                else if (braCoo > henCav && braCoo > rodHil && braCoo > chrPra)
                {
                    priSup = 5;
                }
                break;
            }

            case 3:
            {
                cout << "\n\n O NOVO SINDICO ELEITO É: Rodrigo Hilbert";
                if (henCav > ianSom && henCav > chrPra && henCav > braCoo)
                {
                    priSup = 1;
                }
                else if (ianSom > henCav && ianSom > chrPra && ianSom > braCoo)
                {
                    priSup = 2;
                }
                else if (chrPra > henCav && chrPra > ianSom && chrPra > braCoo)
                {
                    priSup = 4;
                }
                else if (braCoo > henCav && braCoo > ianSom && braCoo > chrPra)
                {
                    priSup = 5;
                }
                break;
            }
            case 4:
            {
                cout << "\n\n O NOVO SINDICO ELEITO É: Chris Pratt";
                if (henCav > ianSom && henCav > rodHil && henCav > braCoo)
                {
                    priSup = 1;
                }
                else if (ianSom > henCav && ianSom > rodHil && ianSom > braCoo)
                {
                    priSup = 2;
                }
                else if (rodHil > henCav && rodHil > ianSom && rodHil > braCoo)
                {
                    priSup = 3;
                }
                else if (braCoo > henCav && braCoo > ianSom && braCoo > rodHil)
                {
                    priSup = 5;
                }
                break;
            }

            case 5:
            {
                cout << "\n\n O NOVO SINDICO ELEITO É: Bradley Cooper";
                if (henCav > ianSom && henCav > rodHil && henCav > chrPra)
                {
                    priSup = 1;
                }
                else if (ianSom > henCav && ianSom > rodHil && ianSom > chrPra)
                {
                    priSup = 2;
                }
                else if (rodHil > henCav && rodHil > ianSom && rodHil > chrPra)
                {
                    priSup = 3;
                }
                else if (chrPra > henCav && chrPra > ianSom && chrPra > rodHil)
                {
                    priSup = 4;
                }
                break;
            }

            default:
                break;
            }

            if (priSup == 1)
            {
                cout << "\n O NOVO 1º Suplente ELEITO É: Henry Cavill";
            }
            if (priSup == 2)
            {
                cout << "\n O NOVO 1º Suplente ELEITO É: Ian Somerhalder";
            }
            if (priSup == 3)
            {
                cout << "\n O NOVO 1º Suplente ELEITO É: Rodrigo Hilbert";
            }
            if (priSup == 4)
            {
                cout << "\n O NOVO 1º Suplente ELEITO É: Chris Pratt";
            }
            if (priSup == 5)
            {
                cout << "\n O NOVO 1º Suplente ELEITO É: Bradley Cooper";
            }

            somVot = henCav + ianSom + rodHil + chrPra + braCoo;
            cout << "\n\n ==========================";
            cout << "\n === INDICES DA ELEIÇÃO ===";
            cout << "\n ==========================";
            cout << "\n\n Total de VOTOS: " << somVot;
            cout << "\n Total de ELEITORES: " << qntEleitor;
            if (somVot == qntEleitor)
            {
                cout << " >>> ELEIÇÃO VALIDADA! <<<";
            }
            else
            {
                cout << " >>> ELEIÇÃO ANULADA por DESCONFORMIDADE! <<<";
            }
            cout << "\n\n Total de Votos por Candidato";
            cout << "\n\t [1] - Henry Cavill: " << henCav << " VOTOS";
            cout << "\n\t [2] - Ian Somerhalder: " << ianSom << " VOTOS";
            cout << "\n\t [3] - Rodrigo Hilbert: " << rodHil << " VOTOS";
            cout << "\n\t [4] - Chris Pratt: " << chrPra << " VOTOS";
            cout << "\n\t [5] - Bradley Cooper: " << braCoo << " VOTOS \n\n";
            system("pause");
            break;
        }

        case 3:    /*--------------------------- QUESTÃO 03 ---------------------------*/
        {
            cout << "\n ===================================";
            cout << "\n == QUESTÃO 03 - SÉRIES NUMERICAS ==";
            cout << "\n ===================================";
            cout << "\n\n [1] - 1/1\xB2 + 1/2\xB2 + 1/3\xB2 + 1/4\xB2... (Denominador de 1 em 1)"; 
            cout << "\n\n [2] - 1/1\xB2 + 1/3\xB2 + 1/5\xB2 + 1/7\xB2... (Denominador de 2 em 2) "; 
            cout << "\n\n [3] - 1/1x3 + 1/2x4 + 1/3x5 + 1/4x6... (Dois elementos do denominador de 1 em 1) "; 
            cout << "\n\n Para começar, escolha qual série deseja calcular >>> \t";
            x=0;
            do{
            cin >> op;
            switch (op)
            {
            case 1:
            {
                cout << "\n\n Agora, informe a quantidade de termos que vamos calcular >>> \t";
                cin >> numero;

                for (int i = 1; i <= numero; i++)
                {
                    resp = i*i;
                    serie = serie + (1 / resp);
                }
                
                cout << "\n\n Resultado >>> ";
                
                for(int i = 1; i < numero; i++)
                {
            		cout<< "1/" <<i<<"\xB2";
            		cout<< " + ";			
				}
				cout<< "1/" <<numero<<"\xB2 = ";
                cout << serie << "\n\n";
                break;
            }

            case 2:
            {
                cout << "\n\n Agora, informe a quantidade de termos que vamos calcular >>> \t";
                cin >> numero;

                cout << "\n\n Resultado >>> ";
               
                for (int i = 1; i <= numero; i += 2)
                {
                    resp = i*i;
                    serie = serie + (1 / resp);
                }

                for (int i = 1; i < (numero*2)-1; i += 2)
                {
                    cout<< "1/" <<i<<"\xB2 + ";
                }

				cout<< "1/" <<(numero*2)-1<<"\xB2 = ";
            	cout << serie << "\n\n";
                break;
            }

            case 3:
            {
                cout << "\n\n Agora, informe a quantidade de termos que vamos calcular >>> \t";
                cin >> numero;
                aux = 3;
                for (int i = 1; i <= numero; i++)
                {
                    resp = i * aux;
                    aux++;
                    serie = serie + (1 / resp);
                }
                
                aux = 3;
                for(int i = 1; i < numero; i++)
                {
            		cout<< "1/" <<i<<"x" <<aux << " + ";
					aux++;			
				}
				cout<< "1/" <<numero<<"x"<<numero+1 << " = ";
                
                cout << serie<< "\n\n";

                break;
            }

            default:{
                cout << "\n Opção inválida! Escolha entre [1] [2] ou [3] >>> \t";
                x = 1;
                break;
            } 
            }
            } while (x==1);
            system("\n\npause");
            break;
        }
        
        case 4:  /*---------------------- QUESTÃO 04 ----------------------------*/
        {
        	cout << "\n =====================================";
            cout << "\n == QUESTÃO 04 - VALORES ALEATÓRIOS ==";
            cout << "\n =====================================\n\n";
            
            for (int i = 0; i < NUM; i++)
		    {
		        number[i] = (rand() % 5000) + 1;
		        soma = soma + number[i];
		    }
		    media = soma/500;
		    
		    for (int i = 0; i < NUM; i++)
		    {
		        if(number[i]>media)
		        	maiorMedia++;
		        else if (number[i]<media)
		        	menorMedia++;
		        	
		        if(number[i]%2==0)
		        	pares++;
		        else if(number[i]%2!=0)
		        	impares++;
		    }
		    
		    for (int i = 0; i < NUM; i++)
		    {
		        if (i == 0)
		        {
		            numeroMaior = number[i];
		            numeroMenor = number[i];
		        }
		        else if (number[i] > numeroMaior)
		        {
		            numeroMaior = number[i];
		        }
		        else if (number[i] < numeroMenor)
		        {
		            numeroMenor = number[i];
		        }
		    }
		    
		    cout << "\n\n O maior numero é >>> " << numeroMaior;
			cout << "\n O menor número é >>> " << numeroMenor;
			cout << "\n A média dos numeros aleatórios é >>> " << media;
			cout << "\n A quantidade de números maiores que a média é >>> " << maiorMedia;
			cout << "\n A quantidade de números menores que a média é >>> " << menorMedia;
			cout << "\n A quantidade de números pares é >>> " << pares;
            cout << "\n A quantidade de números impares é >>> " << impares;
            
			cout << "\n >>> Agora vamos escolher como ordenar os numeros [D]DESCRESCENTE [C]CRESCENTE <<<";
            cout << "\n Insira sua opção >>> ";
            cin >> opcao; 
            opcao = toupper(opcao);
            	if(opcao == 'D')
				{
					cout << "\n ORDEM DECRESCENTE >>> ";
            		bubble_sort_desc(number, NUM);
            		for (int i = 0; i < NUM; i++)
				    {
				        cout << " | " << number[i];
				    }
				    cout << "\n\n";
				} else if (opcao == 'C')
				{
					cout << "\n ORDEM CRESCENTE >>> ";
					bubble_sort_cresc(number, NUM);
					for (int i = 0; i < NUM; i++)
				    {
				        cout << " | " << number[i];
				    }
				    cout << "\n\n";
				}	
            
            system("pause");
            break;
		}

        case 5:   /*--------------------------- QUESTÃO 05 ---------------------------*/
        {
            cout << "\n =================================";
            cout << "\n == QUESTÃO 05 - MENU DE OPÇÕES ==";
            cout << "\n =================================";
            x=0;
            do{
            system("cls");
            cout << "\n [1] Função Void: VERIFICAÇÃO DE CPF";
            cout << "\n [2] Função Int: JOGO CARA ou COROA";
            cout << "\n [3] Função Float: EQUAÇÃO DE 1º GRAU";
            cout << "\n [4] Função Livre: CONVERSOR HEXADECIMAL p BINARIO";
            cout << "\n [5] Fim";
            cout << "\n Insira sua opção >> ";
            cin >> op;
            switch (op){
                case 1:{ //verifica de CPF é válido
                    cout << "\n ======= VALIDAÇÃO DE CPF =======";
                    cout << "\n Insira o Nº do CPF, sem caracteres especiais ou espaços >>>";
                    //RECEBENDO NUMEROS DO CPF
                    fflush(stdin);
					gets(codCpf);
					fflush(stdin);
                 	
            		validaCpf(codCpf);
				
				getch();
				break;
				}
                case 2:{ //jogo Cara ou coroa
                
                x=0;
                cout << "\n ======= JOGO CARA ou COROA =======";
                cout << "\n Insira a quantidade de vezes que deseja rodar a moeda >> ";
                cin >> qtdGiros;
                cout << "\n Para deixarmos o jogo interessante, gostaria de informar seu número da SORTE? [S]SIM [N]NÃO";
                cin >> opcao;
                opcao = toupper(opcao);
                if(opcao == 'S'){
                    cout << "\n Digite o número da SORTE >>> ";
                    cin >> numSorte;
                } else {
                    cout << "\n OK. Sem seu número da Sorte desta vez.";
                    numSorte = 13;
                }
                cout << "\n Nos diga qual a sua aposta: [A]CARA [C]COROA ";
                do{
                cin >> aposta;
                aposta = toupper(aposta);
                if (aposta == 'A' || aposta =='C')
                    x=0;
                else {
                    cout << "\n Resposta inválida. Tente novamente [A]CARA [C]COROA >> ";
                    x=1;
                }

                } while (x=0);

                cout << "\n Tudo pronto! VAMOS COMEÇAR! Aperte qualquer tecla para continuar...";
                getch();

                cout << "\n Preparando moeda...";
                sleep (2);
                cout << "\n Jogando moeda...";
                sleep (2);
                cout << "\n Moeda retornando...";
                sleep (2);
                cout << "\n E então...";
                sleep (3);

                //função
                retornoF = CaraOuCoroa(qtdGiros,numSorte,aposta);

                if (retornoF == 0 && aposta == 'A'){
                   cout << "\n\n UAU! CARA! Você é uma pessoa de sorte! ";
                   getch(); 
                } 

                if (retornoF == 0 && aposta == 'C'){
                   cout << "\n\n UAU! COROA! Você é uma pessoa de sorte! ";
                   getch(); 
                }

                if (retornoF == 1 && aposta == 'A'){
                   cout << "\n\n QUE PENA! Virou COROA! Quem sabe na próxima! ";
                   getch(); 
                } 

                if (retornoF == 1 && aposta == 'C'){
                   cout << "\n\n QUE PENA! Virou CARA! Quem sabe na próxima! "; 
                   getch();
                }
            
                getch();
                break;
                }

                case 3:{ // resultado formula de baskhara float

                cout << "\n ======= Resolvendo uma Equação de 1ª Grau =======";
                cout << "\n ================= f(x) = ax + b =================";
                cout << "\n Insira o 1º Coeficiente >> ";
                cin >> a;
                cout << "\n Insira o 2º Coeficiente >> ";
                cin >> b;
                

                 // função equação de 1º grau 
                result = Equacao1Grau(a,b);

                cout << "\n RESOLUÇÃO >>> f(x) = ax + b ";
                sleep (2);
                cout << "\n "<<a<<"x + "<<b;
                sleep (2);
                cout << "\n "<<a<<"x = -"<<b;
                sleep (2);
                cout << "\n x = -"<<b<<"/"<<a;
                sleep (2);
                cout << "\n RESULTADO >>> ";
                cout << " x = " << result;
                
                system("pause");
                break;
                }

                case 4:{ //hexadecimal para binario
                
                cout << "\n ======= CONVERSOR DE HEXADECIMAL p/ BINARIO =======";
                cout << "\n Insira o nº Hexadecimal >>>";
                fflush(stdin);
				gets(numHex);
				fflush(stdin);
				
				for(int i=0;i<2; i++){
					numHex[i] = toupper(numHex[i]);
				}
				
                for(int i=0; i<2; i++){
                	if (numHex[i] == '0'){
                		numBin[i] = 0000;
					} else if (numHex[i] == '1'){
						numBin[i] =  0001;
					} else if (numHex[i] == '2'){
						numBin[i] =  0010;
					} else if (numHex[i] == '3'){
						numBin[i] =  0011;
					} else if (numHex[i] == '4'){
						numBin[i] =  0100;
					} else if (numHex[i] == '5'){
						numBin[i] =  0101;
					} else if (numHex[i] == '6'){
						numBin[i] =  0110;
					} else if (numHex[i] == '7'){
						numBin[i] =  0111;
					} else if (numHex[i] == '8'){
						numBin[i] =  1000;
					} else if (numHex[i] == '9'){
						numBin[i] =  1001;
					} else if (numHex[i] == 'A'){
						numBin[i] =  1010;
					} else if (numHex[i] == 'B'){
						numBin[i] =  1011;
					} else if (numHex[i] == 'C'){
						numBin[i] =  1100;
					} else if (numHex[i] == 'D'){
						numBin[i] =  1101;
					} else if (numHex[i] == 'E'){
						numBin[i] =  1110;
					} else if (numHex[i] == 'F'){
						numBin[i] =  1111;
					} 
				}
				 cout << " Hexacimal: "<<numHex[0] << numHex[1] << " convertido para Binário: ";
				 cout << numBin[0] << " ";
				 cout << numBin[1];
				
				getch();
				break;
                }

                case 5:{
                    cout << "\n Finalizando Questão 05. Obrigada por usar até aqui! See you later ;) ";
                    getch();
                    break;
                }
                default:{
                   x=1;
                   cout << "\n Opção Inválida. Vamos tentar novamente...>> "; 
                   getch();
                   break;
                }
            
        	}
            } while ((op!=5)||(x==1));

            cout << "\n\n";
            system("pause");
            break;
        		
		}

        case 6:
        {
            cout << "\n\n DESENHO ENTREGUE SEPARADAMENTE";

            getch();
            break;
        }
        case 7:   /*--------------------------- QUESTÃO 07 ---------------------------*/
        {
            cout << "\n =================================";
            cout << "\n == QUESTÃO 07 - NÚMEROS PRIMOS ==";
            cout << "\n =================================";
            cout << "\n\n [P] - Verificar se é um Número Primo";
            cout << "\n [L] - Mostrar os Numeros Primos entre determinado intervalo";
            cout << "\n\n Selecione uma das opções acima >>>> \t";
            cin >> escolha;
            escolha = toupper(escolha);
            switch (escolha)
            {
            case 'P':
            {
                x = 0;
                do
                {
                    cout << "\n\n Insira um número para iniciarmos a verificação >>> \t";
                    cin >> numero;
                    for (int i = 1; i <= numero; i++)
                    {
                        if (numero % i == 0)
                        {
                            contador++;
                        }
                    }
                    if (contador == 2)
                    {
                        cout << "\n\n\t" << numero << " é um número PRIMO. \t";
                    }
                    else if (contador != 2)
                    {
                        cout << "\n\n\t" << numero << " não é um número PRIMO. \t";
                    }

                    cout << "\n\n >> Deseja verificar outro número? [S]SIM  [N]NÃO \t";
                    cin >> repetir;
                    repetir = toupper(repetir);
                    if (repetir == 'S')
                    {
                        contador = 0;
                        x = 1;
                    }
                    else if (repetir == 'N')
                    {
                        x = 2;
                    }
                    else
                    {
                        cout << "\n\n >> OPÇÃO INVÁLIDA! << Finalizando programa...";
                    }
                } while ((x == 0) || (x == 1));
                system("pause");
                break;
            }

            case 'L':
            {
                cout << "\n\n Insira um número para iniciar a seleção >>> \t";
                cin >> inicio;
                cout << "\n\n Agora defina um limite para sua seleção >>> \t";
                cin >> fim;
                for (int i = inicio; i <= fim; i++)
                {
                    if ((i == 0) || (i == 1)) //pre determino que 0 e 1 não são primos 
                    {
                        nprimo = 1; 
                    }
                    else if ((i != 0) || (i != 1))
                    {
                        for (int j = 2; j < i; j++)
                        {
                            if (i % j == 0)
                            {
                                nprimo = 1;
                            }
                        }
                        if (nprimo == 0)
                        {
                            cout << " | " << i;
                        }
                    }
                    nprimo = 0;
                }
                break;
            }
            }
            cout << "\n\n";
            system("pause");
            break;
        }
        case 8:
        {
            system("color 8");
            cout << "\n\n Finalizando seu PROGRAMA! See you later :) \n ";
            getch();
            break;
        }
        default:
        {
            cout << "\n Escolha Inválida! Aperte qualquer tecla para tentar novamente >>> ";
            x=1;
            getch();
            break;
        }
        
		}
    } while ((op != 8)||(x==1));
}
