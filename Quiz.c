#include <stdio.h>

void PerguntaNumero1();
int  RespostaPergunta1(char *resposta,int *pontos, int *fim);
void PerguntaNumero2();
int  RespostaPergunta2(char *resposta,int *pontos, int *fim);
void PerguntaNumero3();
int  RespostaPergunta3(char *resposta,int *pontos, int *fim);
void PerguntaNumero4();
int  RespostaPergunta4(char *resposta,int *pontos, int *fim);
void PerguntaNumero5();
int  RespostaPergunta5(char *resposta,int *pontos, int *fim);
void PerguntaNumero6();
int  RespostaPergunta6(char *resposta,int *pontos, int *fim);
void PerguntaNumero7();
int  RespostaPergunta7(char *resposta,int *pontos, int *fim);
void PerguntaNumero8();
int  RespostaPergunta8(char *resposta,int *pontos, int *fim);
void PerguntaNumero9();
int  RespostaPergunta9(char *resposta,int *pontos, int *fim);
void PerguntaNumero10();
int  RespostaPergunta10(char *resposta,int *pontos, int *fim);

int main()
{
    char resposta;  //nome[10] se eu quiser bota nome dps
    int pontos = 0; //ver o por que dos pontos nao funcionarem
    int fim;
    
    printf(" ________________\n");
    printf("| ---QuizGame--- |\n");
    printf("|________________|\n");
    printf("Acertando a resposta correta, o jogador avanca para o proximo nivel.\n");
    //printf("Nome do Jogador: ");
    //scanf("%s", &nome);
    printf("SCORE: %d\n", pontos);

    while (fim != 0)
    {
        printf("_________________________________________________________________________________\n");

        PerguntaNumero1();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta1(&resposta, &pontos, &fim);
        
        printf("_________________________________________________________________________________\n");

        PerguntaNumero2();
        printf("Resposta: ");
        scanf("%s", &resposta);

        RespostaPergunta2(&resposta, &pontos, &fim);
        
        printf("_________________________________________________________________________________\n");

        PerguntaNumero3();
        printf("Resposta: ");
        scanf("%s", &resposta);

        RespostaPergunta3(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero4();
        printf("Resposta: ");
        scanf("%s", &resposta);

        RespostaPergunta4(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero5();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta5(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero6();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta6(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero7();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta7(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero8();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta8(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero9();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta9(&resposta, &pontos, &fim);

        printf("_________________________________________________________________________________\n");

        PerguntaNumero10();
        printf("Resposta: ");
        scanf("%s", &resposta);
        
        RespostaPergunta10(&resposta, &pontos, &fim);
    }
    return 0;
}

void PerguntaNumero1()
{
    printf("\n-Pergutna Numero 1-\n");
    printf("\nDe quem e a famosa frase 'Penso, logo existo'?\n");
    printf(" A) Platao\n");
    printf(" B) Galileu Galilei\n");
    printf(" C) Descartes\n");
    printf(" D) Socrates\n");
    printf(" E) Francis Bacon\n");
}

void PerguntaNumero2()
{
    printf("\n-Pergutna Numero 2-\n");
    printf("\nQual o nome do presidente do Brasil que ficou conhecido como Jango?\n");
    printf(" A) Janio Quadros\n");
    printf(" B) Jacinto Anjos\n");
    printf(" C) Getulio Vargas\n");
    printf(" D) Joao Figueiredo\n");
    printf(" E) Joao Goulart\n");
}

void PerguntaNumero3()
{
    printf("-Pergutna Numero 3-\n");
    printf("\nQuantos bracos tem um polvo?\n");
    printf(" A) Seis\n");
    printf(" B) Oito\n");
    printf(" C) Dez\n");
    printf(" D) Sete\n");
    printf(" E) Tres\n"); 
}

void PerguntaNumero4()
{
    printf("-Pergutna Numero 4-\n");
    printf("\nComo se chamam os dois melhores amigos do personagem Harry Potter?\n");
    printf(" A) Minerva e Albus\n");
    printf(" B) Dolores e Rubeo\n");
    printf(" C) Gimna e Fred\n");
    printf(" D) Hermione e Rony.\n");
    printf(" E) Dobby e Luna\n"); 
}

void PerguntaNumero5()
{
    printf("-Pergutna Numero 5-\n");
    printf("\nQual foi a fruta envenenada que a Branca de Neve comeu?\n");
    printf(" A) Pera\n");
    printf(" B) Maca\n");
    printf(" C) Mamao\n");
    printf(" D) Melancia\n");
    printf(" E) Laranja\n"); 
}

void PerguntaNumero6()
{
    printf("-Pergutna Numero 6-\n");
    printf("\nQual e o ponto turistico mais famoso de Paris?\n");
    printf(" A) Cristo Redentor\n");
    printf(" B) Prisao De Alcatraz\n");
    printf(" C) Torre Eiffel\n");
    printf(" D) Coliseu.\n");
    printf(" E) Museu Do Louvre\n"); 
}

void PerguntaNumero7()
{
    printf("-Pergutna Numero 7-\n");
    printf("\nEm qual cidade dos Estados Unidos fica a famosa Estatua da Liberdade?\n");
    printf(" A) Nova York\n");
    printf(" B) California\n");
    printf(" C) Los Angeles\n");
    printf(" D) Miami\n");
    printf(" E) Las Vegas\n"); 
}

void PerguntaNumero8()
{
    printf("-Pergutna Numero 8-\n");
    printf("\nQual e o livro mais vendido do mundo, depois da Biblia?\n");
    printf(" A) O Pequeno Principe, Antoine de Saint-Exupery\n");
    printf(" B) Dom Quixote, Miguel De Cervantes\n");
    printf(" C) Harry Potter e a Pedra Filosofal, J.K. Rowling\n");
    printf(" D) O Leao, a Feiticeira e o Guarda-Roupa, C.S. Lewis\n");
    printf(" E) O Codigo de Vinci, Dan Brown\n"); 
}

void PerguntaNumero9()
{
    printf("-Pergutna Numero 9-\n");
    printf("\nQuantos campeonatos de Formula 1 o piloto brasileiro Ayrton Senna venceu?\n");
    printf(" A) 4\n");
    printf(" B) 2\n");
    printf(" C) 3\n");
    printf(" D) 5\n");
    printf(" E) 1\n"); 
}

void PerguntaNumero10()
{
    printf("-Pergutna Numero 10-\n");
    printf("\nEm que ano o Gremio ganhou o Mundial de Clubes ?\n");
    printf(" A) 1982\n");
    printf(" B) 1983\n");
    printf(" C) 0980\n");
    printf(" D) 1985\n");
    printf(" E) 1984\n"); 
}

int  RespostaPergunta1(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'c' || *resposta == 'C')
        {
            *pontos =+ 10;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta2(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'e' || *resposta == 'E')
        {
            *pontos =+ 20;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 10;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta3(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'b' || *resposta == 'B')
        {
            *pontos =+ 30;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 20;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta4(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'd' || *resposta == 'D')
        {
            *pontos =+ 40;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 30;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta5(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'b' || *resposta == 'B')
        {
            *pontos =+ 50;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 40;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta6(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'c' || *resposta == 'C')
        {
            *pontos =+ 60;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 50;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta7(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'a' || *resposta == 'A')
        {
            *pontos =+ 70;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 60;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta8(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'b' || *resposta == 'B')
        {
            *pontos =+ 80;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 70;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta9(char *resposta,int *pontos, int *fim)
{
    if (*resposta == 'c' || *resposta == 'C')
        {
            *pontos =+ 20;
            printf("\nVoce Acertou!!!, Proxima Fase...\n");
            printf("SCORE: %d\n", *pontos);

        }
        else
        {
            *pontos =+ 80;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            fim = 0;
            return *fim;
        }
}

int  RespostaPergunta10(char *resposta, int *pontos, int *fim)
{
    if (*resposta == 'b' || *resposta == 'B')
        {
            *pontos =+ 100;
            printf("\nParabens voce Ganhou!!!!!\n");
            printf("SCORE: %d\n", *pontos);
            
            *fim = 0;
            return *fim;
        }
        else
        {
            *pontos =+ 90;
            printf("O Jogo Acabou, Voce Errou!\n");
            printf("Seu SCORE: %d\n", *pontos);

            *fim = 0;
            return *fim;
        }
}