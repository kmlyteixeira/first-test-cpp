# first-test-cpp
repositório reservado para a avaliação da 1º fase de ADS - Prof. Claudia Werlich

~~~cpp
#include <iostream> 
#include <iomanip>
using namespace std; 

main()
{		
    setlocale(LC_ALL, "Portuguese");
    cout << "INDICADORES que foram utilizados para avaliação: \n";
    cout << "1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
    cout << "2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
    cout << "3. Utiliza operações aritméticas em programas.\n";
    cout << "4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
    cout << "5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
    cout << "6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
    cout << "7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";
    
	/*
		Propostas Questões Professora - Switch Case estrutura de Menu
	*/
	
    cout << "\n [1] Questão 01 - Investigação Criminal"; //Exerc. Questionário - Utilizando IF para armazenar respostas e DO WHILE para as validações de resposta (lin 213 - 480)
    cout << "\n [2] Questão 02 - Eleição de Sindico";    // Exerc. Votação - Utilizada basicamente estrutura IF, também utilizado switch case para separar os cases (lin 481 - 713)
    cout << "\n [3] Questão 03 - Séries Matemáticas";    // Exerc. Repetição - Utilizado o laço de repetição for para cálculo e impressão das expressões (lin 716 - 809)
    cout << "\n [4] Questão 04 - Vetor de Números Aleatórios";  //Exerc. Aleatorizador - Utilizada função números randômicos, vetores e laço FOR (lin 812 - 888) 
    cout << "\n [5] Questão 05 - Menu de Opções - Funções";     //Exerc. Funções - Funções alocadas no inicio do código 
      //1 - VOID:: Valida CPF utilizando algoritimo padrão de verificação (lin 52 - 112) --> chamada da função lin 914
      //2 - INT:: Jogo Cara ou Coroa - cálculo aleatório conforme dados recebidos (lin 122 - 141) --> chamada lin 961
      //3 - FLOAT:: Equação do 1º grau - formula básica (lin 114 - 120) --> chamada da função lin 998
      //4 - VOID:: Conversor de decimal para binário --> (lin 1015 - 1068)
    cout << "\n [6] Questão 06 - Desenho Utilizando Tabela ASCII"; //avaliacaoDesenho.cpp - extra criativo
    cout << "\n [7] Questão 07 - Números Primos"; // Exerc. Num Primos - Utilizado principalmente IF e FOR para repetição, também DO WHILE para validações de entrada (lin 1098 - 1188)
    cout << "\n [8] FIM.";
	
}
~~~
