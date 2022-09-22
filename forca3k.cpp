#include <iostream>
#include <string>
#include <cstring>
#include <locale.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std; //observações abaixo

struct temas  //struct de temas com 5 strings com vetor 20 || e sim, eu já fui otaku sem vida                                                              //, não julgue
{                                                             //social, não julgue
    string animes[20]={"one piece","jojo","naruto","dragon ball","hellsing","gurren lagann","kill la kill",
    "mob psycho","monogatari","kimetsu no yaiba","evangelion","pokemon","tokyo ghoul","vinland saga",
    "k on","sailor moon","shingeki no kyojin","death note","chainsaw man","school days"}; //1
    string jogos[20]={"celeste","mount and blade","ocolast","doom","dark souls","elden ring","touhou",
    "hollow knight","cry of fear","helltaker","fallout","darkwood","saiko no sutoka","pathologic",
    "hello charlotte","yume nikki","devil may cry","devour","shadow of mordor","gris"}; //2
    string nomes[20]={"frederick","jonas","paulo","bruno","jonisvaldo","gabriel","eduardo","karen",
    "mariana","sofia","ester","juliana","juliano","marco","raimundo","cleiton","marshall","robson",
    "gustavo henrique","ana maria"}; //3
    string series[20]={"dark","peaky blinders","the boys","impuros","barry","search party",
    "game of thrones","the house of dragon","mr robot","the big bang theory","two and a half man",
    "o pacificador","the office","the purge","o gambito da rainha","watchmen","cavaleiro da lua",
    "demolidor","justiceiro","alice in borderland"}; //4
    string personagens[20]={"guts","marshall d teach","grey","victor stone","clark kent","john constantine",
    "capuz vermelho","slade wilson","rei ayanami","trafalgar law","miles morales","blade","mefisto",
    "gandalf","frodo baggins","isildur","paarthurnax","miraak","azura"}; //5
};
int main(void)
{  
    temas tema;
    int novo=0; //a variável que vai determinar se você ganhou ou não, se o valor dela for igual a
    unsigned int escolhatema; //quantidade de linhas da palavra escolhida, você ganhou!
  setlocale(LC_ALL, "Portuguese"); //pior que nem usei acento no codigo...
    int x = 0; //quantidade de erros. acumula até 6
    unsigned int seed = time(0);  //semente pra gerar um número aleatório
    srand(seed); 
    for(int i=0;i<5;i++)
     escolhatema=1+rand()%5;  //fiz isso pra ver se muda alguma coisa da ale pro escolhatema.
    unsigned int ale=1+rand()%20;  //se nao... kkkkk
    string nome1[20]; //a palavra que será escolhida
    if(escolhatema==1)  //se for 1, a variavel nome1 vai ter os valores do tema.animes
     for (int i=0;i<20;i++)
        swap(nome1[i],tema.animes[i]);
    if(escolhatema==2)
     for (int i=0;i<20;i++)
        swap(nome1[i],tema.jogos[i]); //assim segue pros outros
    if(escolhatema==3)
     for (int i=0;i<20;i++)
        swap(nome1[i],tema.nomes[i]);
     if(escolhatema==4)
     for (int i=0;i<20;i++)
        swap(nome1[i],tema.series[i]);
    if(escolhatema==5)
     for (int i=0;i<20;i++)
        swap(nome1[i],tema.personagens[i]);        
    int y = nome1[ale].size(); //tamanho da palavra aleatoria escolhida
    char* escolhas;  //o char que você vai chutar as letras
    escolhas = (char*)malloc(sizeof(char)+1); //alloc dinamica 
   char resultado [y]; //o resultado, se você acertar.
    for (int i = 0; i < y; i++)
    {
   if(isspace(nome1[ale][i]))  //se tiver espaço, a variavel novo vai ser acrescentada em 1
    {                    //ja que espaço ocupa espaço (entendeu?) porque o user não vai usar espaço né
      resultado[i]='-';
      novo=novo+1;
    }
    else
    resultado[i]='_';   
    }
cout<<"     F O R K                                    \n";                                                        
cout<<"   G A M E                                      \n";   //sim, eu sou um artista
cout<<"   ______                                       \n";                                                           
cout<<"  |     |       pe     <- 0         Bom Jogo!   \n";                      
cout<<"  |             ta        |/                    \n";                       
cout<<"  |            torto     /|                     \n";                     
cout<<"  |                      _/\\_                  \n\n";       
 if(escolhatema==1)
 cout<<"tema: animes"<<endl; 
 if(escolhatema==2)
 cout<<"tema: jogos"<<endl;        //só pra deixar um pouco mais fácil...
 if(escolhatema==3)
 cout<<"tema: nomes"<<endl;      
 if(escolhatema==4)
 cout<<"tema: series"<<endl;      
 if(escolhatema==5)
 cout<<"tema: personagens gerais"<<endl;                      
    cout<<"letra: ";
    for (int i = 0; i < y; i++)  //aqui a mágica acontece.
    {
        
            cin >> escolhas[i]; //note que pedimos o ingresso da variavel escolhas
            for (int l = 0; l < i; l++)
            while (escolhas[i] == escolhas[l])        //usei 2 vezes isso, 1 agora e outra depois de
            {                                        //um outro while
                cout<<"palavra ja inserida, insira outra: ";
            cin>>escolhas[i];
            }
        if(y==4)  //y=tamanho da palavra
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3])  //só achei essa maneira
        {
            x = x + 1;  //1 erro é acrescentado
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. "; //vá para a linha 390

            cin >> escolhas[i];

        }
        }   
        if(y==5)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4])
        {
            x = x + 1;
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
        }
        if(y==6)
        {          
              while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
              && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5])
        {
              x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];

        }
        }
        if(y==7)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];


        }
 
        }
        if(y==8)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] && 
            escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
        }
        if(y==9)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
              && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
 
        }
        if(y==10)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
              && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              && escolhas[i]!=nome1[ale][9])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
     
        }
        if(y==11)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
              && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10])
        {
            x = x + 1;            
         if (x >= 6)
               break;           
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }       
        }
        if(y==12)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
             && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
       
        }
        if(y==13)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
             && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
       
        }
        if(y==14)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2]
             && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
              && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13])
        {
            x = x + 1;            
            if (x >= 6)
               break;            
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
     
        }
        if(y==15)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14])
        {
            x = x + 1;            
           if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];


        }

        }
        if (y==16)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14]&&escolhas[i]!=nome1[ale][15])
        {
            x = x + 1;            
            if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];


        }

        }
        if(y==17)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14]&&escolhas[i]!=nome1[ale][15]&&escolhas[i]!=nome1[ale][16])
        {
            x = x + 1;            
            if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";

            cin >> escolhas[i];


        }
       
        }
        if(y==18)
        {
           while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
           && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5]
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14]&&escolhas[i]!=nome1[ale][15]&&escolhas[i]!=nome1[ale][16]
              &&escolhas[i]!=nome1[ale][17])
        {
            x = x + 1;            
            if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];

            

        }
 
        }
        if(y==19)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14]&&escolhas[i]!=nome1[ale][15]&&escolhas[i]!=nome1[ale][16]
              &&escolhas[i]!=nome1[ale][17]&&escolhas[i]!=nome1[ale][18])
        {
            x = x + 1;            
           if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];

      
        } 
        }
        if(y==20)
        {
            while (escolhas[i] != nome1[ale][0] && escolhas[i] != nome1[ale][1] && escolhas[i] != nome1[ale][2] 
            && escolhas[i] != nome1[ale][3] && escolhas[i] != nome1[ale][4] && escolhas[i] != nome1[ale][5] 
            && escolhas[i] != nome1[ale][6] && escolhas[i] != nome1[ale][7]&&escolhas[i]!=nome1[ale][8]
              &&escolhas[i]!=nome1[ale][9]&&escolhas[i]!=nome1[ale][10]&&escolhas[i]!=nome1[ale][11]&&escolhas[i]!=nome1[ale][12]
              &&escolhas[i]!=nome1[ale][13]&&escolhas[i]!=nome1[ale][14]&&escolhas[i]!=nome1[ale][15]&&escolhas[i]!=nome1[ale][16]
              &&escolhas[i]!=nome1[ale][17]&&escolhas[i]!=nome1[ale][18]&&escolhas[i]!=nome1[ale][19])
        {
            x = x + 1;            
           if (x >= 6)
               break;
            cout << "palavra errada. Insira novamente, maximo de 6 erros. ";
            cin >> escolhas[i];

      
        } 
        }  //aqui estou, pra finalizar com chave de ouro
        for (int l = 0; l < i; l++)
            while (escolhas[i] == escolhas[l])   //a dupla condição que eu disse que fiz
            {
                cout<<"palavra ja inserida, insira outra: ";
            cin>>escolhas[i];
            }
        for (int j = 0; j < y; j++)  //se liga aqui
        {
            if (escolhas[i] == nome1[ale][j])  //se a letra que você ingressou for igual a letra do nome1
            {                           //da mesma posição ou em outra posição (repetida)
                resultado[j] = escolhas[i]; //é acrescentado e você ganha 2 pontos 
            novo=novo+1;
            }
        }
        if(x==0) //se você tiver 0 erros, o bixin nem tá com a cabeça lá
        {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
        }
        if(x==1)  //agora começou a esquentar
        {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                    0        \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
        }
        if(x==2) //criativo? eu sei que sim...
        {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                    0        \n";
    cout<<"|                    |        \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
        }
        if(x==3)   //pra você usar contra barra em cout, basta usar 2 vezes que só mostra 1
        {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                    0        \n";
    cout<<"|                    |        \n";
    cout<<"|                     \\      \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
        }
        if(x==4) 
        {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                    0        \n";
    cout<<"|                    |        \n";
    cout<<"|                   / \\      \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
        }
      if(x==5) //coitado do cara, você vai matar ele
      {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|      coe mlk <--   0        \n";
    cout<<"|      me mata       |--      \n";
    cout<<"|       não         / \\      \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
      }
      if(x==6)    //naooooooooooooo
      {
    cout<<"______________________        \n";
    cout<<"|                    |        \n";
    cout<<"|                    |        \n";
    cout<<"|                    0        \n";
    cout<<"|                  --|--        \n";
    cout<<"|                   / \\      \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";
    cout<<"|                             \n";

cout<<"    _____                         ____                  \n";
cout<<"   / ____|                       / __ \\                 \n";
cout<<"  | |  __  __ _ _ __ ___   ___  | |  | |_   __________  \n";
cout<<"  | | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__| \n";  //olha que lindo
cout<<"  | |_|  | | | | | | | | |  __/ \\ |__| /\\  _/  __/ |\n";
cout<<"   \\_____|\\__,_|_| |_| |_|\\___|  \\____/  \\_/ \\___|_|    \n";
      }
       if(x<6)      //pra n mostrar isso quando vc deu game over né, fica feio
       {
        cout << "palavra: ";
       }
        for (int q = 0; q < y; q++)
        {
            if(x<6)
            cout << resultado[q] << " "; //pra mostrar sua jornada
        }
        cout<<"\n\n\n";

       
       if(x>=6)  
       {
        break;  //eu jurava q break só usava em switch, mas eu fui colocar mesmo assim pra ver se ía
       }   //e voí lá (n sei francês), funcionou!
       if(novo!=y)
       cout<<"\t\t\t letra: ";  //pra mostrar enquanto vc n ganhou
        if(novo==y)  //eu poderia ter colocado else, mas não vou 
       { 
        cout<<endl;
cout<<"                                                   __ \n";
cout<<"                                    _             |  |\n";
cout<<" _ _ ___ ___ ___        ___ ___ ___| |_ ___ _ _   |  |\n";
cout<<"| | | . |  _| -_|      | . | .'|   |   | . | | |  |__|\n";  //sim, eu sou um artista
cout<<" \\_/|___|___|___|      |_  |__,|_|_|_|_|___|___|  |__|\n";
cout<<"                       |___|                          \n\n";
cout<<"   ⠀⠀⣴⠉⡙⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠤⣚⡯⠴⢬⣱⡀⠀     \n";
cout<<"⠀⠀⠀⠀⢰⡇⣷⡌⢲⣄⡑⢢⡀⠀⠀⠀⠀⠀⢠⠾⢋⠔⣨⣴⣿⣷⡌⠇⡇     \n";
cout<<"⠀⠀⠀⠀⢸⢹⣿⣿⣄⢻⣿⣷⣝⠷⢤⣤⣤⡶⢋⣴⣑⠟⠿⠿⠿⣿⣿⡀⡇⠀    \n";                                          
cout<<"⠀⠀⠀⠀⢸⢸⣿⡄⢁⣸⣿⣋⣥⣶⣶⣶⣶⣶⣶⣿⣿⣶⣟⡁⠚⣿⣿⡇⡇⠀    \n";                                     
cout<<"⢀⣠⡤⠤⠾⡘⠋⢀⣘⠋⠉⠉⠉⠉⢭⣭⣭⣭⣍⠉⢩⣭⠉⠉⠂⠙⠛⠃⣇⡀    \n";                                   
cout<<"⠏⠀⠀⢿⣿⣷⡀⠀⢿⡄⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣆⠀⢿⣇⠀⠀⠀⠀⠀⠀⠈⢱  \n"; 
cout<<"⣦⠀⠀⠈⢿⣿⣧⠀⠘⣿⠀⠀⠀⡀⠀⠀⠘⣿⣿⣿⣿⡆⠀⢻⡆⠀⠀⠀⠀⠀⠀⢸  \n";
cout<<"⢻⡄⠀⠀⠘⠛⠉⠂⠀⠙⠁⠀⣼⣧⠀⠀⠀⠈⠀⠀⠈⠙⠀⠘⠓⠀⠀⠀⠀⠀⢀⡟  \n";
cout<<"⠀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⣏⠀ \n";
cout<<"⠀⠀⠛⢶⢰⣶⢢⣤⣤⣄⠲⣶⠖⠀⣙⣀⠀⠀⠀⠤⢤⣀⣀⡀⣀⣠⣾⠟⡌⠀     \n";
cout<<"⠀⠀⠀⠘⢄⠃⣿⣿⣿⣿⠗⠀⠾⢿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⠸⠟⣡⣤⡳⢦     \n";
cout<<"⠀⠀⠀⠀⠀⢻⡆⣙⡿⢷⣾⣿⣶⣾⣿⣿⣿⣿⣿⣿⣿⡿⠟⢡⣴⣾⣿⣿⣿⣦     \n";
cout<<"⠀⠀⠀⠀⠀⡼⢁⡟⣫⣶⣍⡙⠛⠛⠛⠛⠛⣽⡖⣉⣠⣶⣶⣌⠛⢿⣿⣿⣿⣿     \n";
cout<<"⠀⠀⠀⢀⠔⢡⢎⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠹⣿⣿⣿     \n";
cout<<"⠀⢠⠖⢁⣴⡿⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⣿     \n";       
        break; //breiq
       }
    }
    cout<<endl<<endl<<"                                   feito por um iniciante em c++"<<endl;
    return 0;                                         //eu mesmo, Frederico.
    //adieu amigos, se tiver algum bug aí, eu não percebi. tmj!
}

