# League_of_Legends_Champ_Select

Este projeto consiste no desenvolvimento de um programa em linguagem C que simula, via terminal, a busca e seleção de campeões do jogo League of Legends. A aplicação permite que o usuário digite parte do nome de um campeão, e, com base nessa entrada, exibe todos os nomes que contenham a sequência informada, independentemente de letras maiúsculas, minúsculas ou espaços.

Funcionalidades Implementadas:

- Busca parcial: Permite localizar campeões digitando apenas parte de seus nomes (por exemplo: a, ka, vie).

- Ignora espaços em branco no início da entrada.

- Não diferencia maiúsculas de minúsculas (case-insensitive).

- Leitura automatizada da lista de campeões a partir de um arquivo externo (champ_list.txt).

- Saída formatada: Os nomes encontrados são apresentados entre colchetes e com a capitalização correta.

Estrutura de Arquivos:

champ_select.h – Cabeçalho com declarações de funções e estruturas utilizadas.

champ_find.c – Arquivo principal, responsável pela leitura da entrada e pela busca na lista de campeões.

str_to_lower.c – Implementa a função de conversão para minúsculas, auxiliando na busca insensível a maiúsculas.

champ_list.txt – Contém a lista completa dos campeões, um por linha. (20/11/2025, último campeão lançado : Zaheen)

Compilação:

cc -Wall -Wextra -Werror champ_find.c str_to_lower.c -o champ_select

Testes:

./champ_select -LETRAS SEM ESPAÇO-

🧾 Exemplos de Saída

Entrada:

./champ_select kal


Saída:

[Akali] [Kalista] [Kayle]

Entrada:

./champ_select "   vie"


Saída:

[Viego] [Volibear]

ENGLISH VERSION:

This project involves the development of a C program that simulates, through the terminal, the search and selection of champions from the game League of Legends. The application allows the user to enter part of a champion's name, and based on this input, it displays all champion names that contain the given sequence, regardless of case sensitivity or leading spaces.

Implemented Features:

-Partial search: Allows users to locate champions by entering only part of their names (e.g., a, ka, vie).

-Ignores leading spaces in user input.

-Case-insensitive matching (does not differentiate between uppercase and lowercase letters).

-Automatic reading of the champion list from an external file (champ_list.txt).

-Formatted output: Matching names are displayed enclosed in brackets, with proper capitalization.

File Structure:

-champ_select.h – Header file containing function declarations and necessary structures.

-champ_find.c – Main source file, responsible for input handling and performing the search in the champion list.

-str_to_lower.c – Implements a helper function to convert strings to lowercase, enabling case-insensitive search.

-champ_list.txt – Contains the complete list of champions, one per line. (As of November 20, 2025, the most recently released champion is Zaheen.)

Compilation:

cc -Wall -Wextra -Werror champ_find.c str_to_lower.c -o champ_select

Testing:

Execute the program by providing a search string (without spaces) as an argument:

./champ_select -LETTERS WITHOUT SPACES-

Output Examples

Input:

./champ_select kal


Output:

[Akali] [Kalista] [Kayle]


Input:

./champ_select "   vie"


Output:

[Viego] [Volibear]
