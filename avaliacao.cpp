/*
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores
ALUNA: Kemily Teixeira da Rosa
Data: 04/04/2022
(Altere a data conforme a entrega)
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <conio.h> // Para usar o getch();
#define TAM 10


int i, x = 0, y = 0, op, numero = 0, inicio, fim, contador, aux, nprimo, positivo=0; 
int negativo=0, braCoo, henCav, ianSom, rodHil, chrPra, priSup,somVot, sindico, qntEleitor;
char escolha, repetir, um, dois, tres, quatro, cinco, seis, sete, oito, opcao;

void bubble_sort_desc(int vetor[], int tam)
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

using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color B");
    system("cls");
    srand(time(NULL));
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
        cout << "\n [1] Questão 01 - Investigação Criminal";
        cout << "\n [2] Questão 02 - Eleição de Sindico";
        cout << "\n [3] Questão 03 - Será liberada no dia 11/04/2022";
        cout << "\n [4] Questão 04 - Será liberada no dia 11/04/2022";
        cout << "\n [5] Questão 05 - Será liberada no dia 13/04/2022";
        cout << "\n [6] Questão 06 - Será liberada no dia 13/04/2022";
        cout << "\n [7] Questão 07 - Números Primos";
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
            cin >> opcao;
            opcao = toupper(opcao);
            if (opcao == 'N')
            {
                cout << "\n\n OK. Volte quando estiver pronto. Até mais!\n\n";
                system("pause");
                break;
            }
            do
            {
                cout << "\n\n >>> INVESTIGAÇÃO Assassinato na Casa Branca <<<";
                cout << "\n RESPONDA AS PERGUNTAS APENAS COM [S]SIM ou [N]NÃO";
                do
                {
                    cout << "\n\n >>> Trocou mensagens com a vítima? <<<";
                    cin >> um;
                    um = toupper(um);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> dois;
                    dois = toupper(dois);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> tres;
                    tres = toupper(tres);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> quatro;
                    quatro = toupper(quatro);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> cinco;
                    cinco = toupper(cinco);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> seis;
                    seis = toupper(seis);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> sete;
                    sete = toupper(sete);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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
                    cin >> oito;
                    oito = toupper(oito);

                    if ((um == 'S') || (um == 'N'))
                    {
                        x = 1;

                        if (um == 'S')
                        {
                            positivo++;
                        }
                        else if (um == 'N')
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

                if (positivo<4)
                {
                    cout << "\n\n===============================================";
                    cout << "\n== INOCENTE... Até que se prove ao contrário ==";
                    cout << "\n===============================================\n\n";
                }
                else if ((positivo >= 5) && (positivo <= 7))
                {
                    cout << "\n\n========================";
                    cout << "\n== POSSÍVEL CRIMINOSO ==";
                    cout << "\n========================\n\n";
                }
                else if ((positivo == 8)&&(negativo == 0))
                {
                    cout << "\n\n===========================";
                    cout << "\n==========ASSASSINO========";
                    cout << "\n===========================\n\n";

                }
                else if ((positivo == 4)&&(negativo == 4))
                {
                    cout << "\n\n========================";
                    cout << "\n======= SUSPEITO =======";
                    cout << "\n========================\n\n";
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

           /* cout << "\n >>> Edificio Cordas Bambas apresenta seus Candidatos <<< ";
            cout << "\n\t [1] - Henry Cavill";
            cout << "\n\t [2] - Ian Somerhalder";
            cout << "\n\t [3] - Rodrigo Hilbert";
            cout << "\n\t [4] - Chris Pratt";
            cout << "\n\t [5] - Bradley Cooper";*/

            int voto[TAM];

            for (int i = 0; i < qntEleitor; i++)
            {
                voto[i] = (rand()%5) + 1;
            }

            /*for (int i = 0; i < qntEleitor; i++)
            {
                cout << " | " << voto[i];
            }*/

            for (int i = 0; i < qntEleitor; i++)
            {
                if (voto[i]==1)
                {
                    henCav++;
                } else if (voto[i]==2)
                {
                    ianSom++;
                } else if (voto[i]==3)
                {
                    rodHil++;
                } else if (voto[i]==4)
                {
                    chrPra++;
                } else if (voto[i]==5)
                {
                    braCoo++;
                }
            }

            int aux[5]{henCav,ianSom,rodHil,chrPra,braCoo};

            bubble_sort_desc(aux,5);

            for (int i = 0; i < 5; i++)
            {
                cout << " | " << aux[i];
            }

            for (i=0;i<qntEleitor;i++)
            {
                if (i==0)
                {
                    sindico = aux[i];
                }
                if (aux[i]>sindico)
                {
                    sindico = aux[i];
                }
            }
            
            if(aux[0]==1){
                cout << "\n\n O novo sindico é Henry Cavill com " <<henCav<< " votos!";
            } else if (aux[0]==2){
                cout << "\n\n O novo sindico é Ian Somerhalder com " <<ianSom<< " votos!";
            } else if (aux[0]==3){
                cout << "\n\n O novo sindico é Rodrigo Hilbert com " <<rodHil<< " votos!";
            } else if (aux[0]==4){
                cout << "\n\n O novo sindico é Chris Pratt com " <<chrPra<< " votos!";
            } else if (aux[0]==5){
                cout << "\n\n O novo sindico é Bradley Cooper com " <<braCoo<< " votos!";
            }

          /*  if (aux[1]==1){
                cout << "\n\n O novo primeiro suplente é Henry Cavill com " <<henCav<< " votos!";
            } else if (aux[1]==2){
                cout << "\n\n O novo primeiro suplente é Ian Somerhalder com " <<ianSom<< " votos!";
            } else if (aux[1]==3){
                cout << "\n\n O novo primeiro suplente é Rodrigo Hilbert com " <<rodHil<< " votos!";
            } else if (aux[1]==4){
                cout << "\n\n O novo primeiro suplente é Chris Pratt com " <<chrPra<< " votos!";
            } else if (aux[1]==5){
                cout << "\n\n O novo primeiro suplente é Bradley Cooper com " <<braCoo<< " votos!";
            }

            if (aux[2]==1){
                cout << "\n\n O novo segundo suplente é Henry Cavill com " <<henCav<< " votos!";
            } else if (aux[2]==2){
                cout << "\n\n O novo segundo suplente é Ian Somerhalder com " <<ianSom<< " votos!";
            } else if (aux[2]==3){
                cout << "\n\n O novo segundo suplente é Rodrigo Hilbert com " <<rodHil<< " votos!";
            } else if (aux[2]==4){
                cout << "\n\n O novo segundo suplente é Chris Pratt com " <<chrPra<< " votos!";
            } else if (aux[2]==5){
                cout << "\n\n O novo segundo suplente é Bradley Cooper com " <<braCoo<< " votos!";
            }*/
            

            /*bubble_sort_cresc(voto,qntEleitor);*/

                /*for(i=1;i<=qntEleitor;i++){
                    do{
                        cout << "\n\n Eleitor de número ["<<i<<"] >> Insira o número que corresponde ao seu candidato. VOTE CONSIENTE! >> \t";
                        cin >> voto;
                            if(voto == 1){
                                y = 1;
                                henCav++;
                            } else if(voto == 2){
                                y = 1;
                                ianSom++;
                            } else if(voto == 3){
                                y = 1;
                                rodHil++;
                            } else if (voto == 4){
                                y = 1;
                                chrPra++;
                            } else if (voto == 5){
                                y = 1;
                                braCoo++;
                            }
                            else if ((voto <1)||(voto>5)||(voto=0)){
                                y = 0;
                                cout << "\n\n VOTO INVÁLIDO! Não são permitidos votos NULOS ou EM BRANCO! Tente novamente...";
                            }
                    } while (y = 0);

                    if (henCav>ianSom&&henCav>rodHil&&henCav>chrPra&&henCav>braCoo){
                        sindico = 1;
                    }
                        else if (ianSom>henCav&&ianSom>rodHil&&ianSom>chrPra&&ianSom>braCoo){
                            sindico = 2;
                        }
                            else if (rodHil>henCav&&rodHil>ianSom&&rodHil>chrPra&&rodHil>braCoo){
                                sindico = 3;
                            }
                                else if (chrPra>henCav&&chrPra>ianSom&&chrPra>rodHil&&chrPra>braCoo){
                                    sindico = 4;
                                }
                                    else if (braCoo>henCav&&braCoo>ianSom&&braCoo>rodHil&&braCoo>chrPra){
                                        sindico = 5;
                                    }         
                }
            switch (sindico)
            {
            case 1:
                cout << "\n\n O NOVO SINDICO ELEITO É: Henry Cavill" ;
                break;
            case 2:
                cout << "\n\n O NOVO SINDICO ELEITO É: Ian Somerhalder" ;
                break;
            case 3:
                cout << "\n\n O NOVO SINDICO ELEITO É: Rodrigo Hilbert" ;
                break;
            case 4:
                cout << "\n\n O NOVO SINDICO ELEITO É: Chris Pratt" ;
                break;
            case 5:
                cout << "\n\n O NOVO SINDICO ELEITO É: Bradley Cooper" ;
            default:
                break;
            }

            somVot = henCav+ianSom+rodHil+chrPra+braCoo;

            cout << "\n\n ==========================";
            cout << "\n === INDICES DA ELEIÇÃO ===";
            cout << "\n ==========================";
            cout << "\n\n Total de VOTOS: " <<somVot;
            cout << "\n Total de ELEITORES: " <<qntEleitor;
                if(somVot == qntEleitor){
                   cout << " >>> ELEIÇÃO VALIDADA! <<<";
                } else {
                   cout << " >>> ELEIÇÃO ANULADA por DESCONFORMIDADE! <<<"; 
                }
            cout << "\n\n Total de Votos por Candidato";
            cout << "\n\t [1] - Henry Cavill: " << henCav << " VOTOS";
            cout << "\n\t [2] - Ian Somerhalder: " << ianSom << " VOTOS";
            cout << "\n\t [3] - Rodrigo Hilbert: " << rodHil << " VOTOS";
            cout << "\n\t [4] - Chris Pratt: " << chrPra << " VOTOS";
            cout << "\n\t [5] - Bradley Cooper: " << braCoo << " VOTOS \n\n";*/
            system("pause");
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
                    } else {
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
                    if ((i == 0) || (i == 1))
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
            cout << "\n Escolha Inválida! Tente novamente >>> ";
            cin >> op;
            getch();
            break;
        }
        }

    } while (op != 8);
}
