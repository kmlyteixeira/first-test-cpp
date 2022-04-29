/*
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores
ALUNA: Kemily Teixeira da Rosa
Data Inicio: 04/04/2022
(Altere a data conforme a entrega)
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <conio.h> // Para usar o getch();
#define TAM 10

int i, x = 0, y = 0, op, numero = 0, inicio, fim, contador, aux, nprimo, positivo = 0;
int negativo = 0, braCoo, henCav, ianSom, rodHil, chrPra, priSup, segSup, somVot, sindico, qntEleitor, voto;
float serie, resp;
char escolha, repetir, opcao, respQuest[9];

/*void bubble_sort_desc(int vetor[], int tam)
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
} DEIXAR FUNÇÃO AQUI, CASO EU UTILIZE*/

using namespace std;
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
        cout << "\n [2] Questão 02 - Eleição de Sindico";    // OK PRONTO - VERIFICAR VALIDAÇÃO DO 2º SUPLENTE caso sobre tempo
        cout << "\n [3] Questão 03 - Séries Matemáticas";    // OK PRONTO
        cout << "\n [4] Questão 04 - Será liberada no dia 20/04/2022";
        cout << "\n [5] Questão 05 - Será liberada no dia 20/04/2022";
        cout << "\n [6] Questão 06 - Será liberada no dia 20/04/2022";
        cout << "\n [7] Questão 07 - Números Primos"; // OK PRONTO
        cout << "\n [8] FIM.";
        cout << "\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
        cin >> op;
        switch (op)
        {
        case 1:
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
                cout << "\n\n OK. Vamos continuar: \n\n";
                break;
            } else {
                x=0;
                cout << "\n\n Não reconhecemos sua resposta, tente novamente...\n\n";
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
        case 2:
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

        case 3:
        {
            cout << "\n ===================================";
            cout << "\n == QUESTÃO 03 - SÉRIES NUMERICAS ==";
            cout << "\n ===================================";
            cout << "\n\n [1] - 1/1\xB2 + 1/2\xB2 + 1/3\xB2 + 1/4\xB2... (Denominador de 1 em 1)"; 
            cout << "\n\n [2] - 1/1\xB2 + 1/3\xB2 + 1/5\xB2 + 1/7\xB2... (Denominador de 2 em 2) "; 
            cout << "\n\n [3] - 1/1x3 + 1/2x4 + 1/3x5 + 1/4x6... (Dois elementos do denominador de 1 em 1) "; 
            cout << "\n\n Para começar, escolha qual série deseja calcular >>> \t";
            cin >> op;
            switch (op)
            {
            case 1:
            {
                cout << "\n\nAgora, informe a quantidade de termos que vamos calcular >>> \t";
                cin >> numero;

                for (int i = 1; i <= numero; i++)
                {
                    resp = i*i;
                    serie = serie + (1 / resp);
                }
                
                cout << "\n\nResultado >>> ";
                
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
                cout << "\n\nAgora, informe a quantidade de termos que vamos calcular >>> \t";
                cin >> numero;

                cout << "\n\nResultado >>> ";
               
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
                cout << "\n\nAgora, informe a quantidade de termos que vamos calcular >>> \t";
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

            default:
                break;
            }

            system("\n\npause");
            break;
        }

        case 7:
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
                    if ((i == 0) || (i == 1)) //pre determina que 0 e 1 não são primos 
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

