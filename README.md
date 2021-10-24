# Noughts and Crosses
 **_Projeto de jogo da velha._**


## Regras do jogo:
- O jogo ocorre em um tabuleiro 3x3;
- O jogo será para duas pessoas jogarem, alternadamente;
- O jogador 1, sempre será o X e sempre iniciará o jogo;
- O jogador 2, sempre será a O e sempre será o segundo a jogar;
- O jogo pode ter 3 resultados: vitória do jogador 1, vitória do jogador 2 ou empate;
- Ganha o jogador que primeiro formar uma reta na diagonal, vertical ou horizontal do tabuleiro.



To do:
- [x] Criar uma matriz para representar o tabuleiro.
    - A Matriz deverá conter 9 posições, 3 linhas e 3 colunas
    - Deverá ser criado um tipo de interface gráfica para representar o tabuleiro
- [x] Criar o jogador 1(X) e 2(O), e preparar de forma intuitiva cada tentativa de jogada deles.
    - O sistema deve gerenciar cada rodada até o final do jogo
    - Sempre que o jogo terminar, perguntar se quer iniciar o jogo novamente.
- [ ] Adicionar validações para jogadas inválidas.
    - Só permitir inserção de números.
    - Só pode escolher posições de 1 a 9.
    - Só pode inserir uma jogada em um número de posição que não estiver ocupada.
    - Se houver um vencedor as jogadas terminam.
- [x] O jogo se encerra quando houver um ganhador ou empate.
    - o primeiro jogador que conseguir fechar uma posição de sequência de 3 ícones (X ou O) vence.
    - o empate acontece se todas as posições forem preenchidas e ninguém conseguir fechar a sequência de 3 posições conforme regras.