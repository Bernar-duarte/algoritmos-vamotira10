#include <iostream>
using namespace std;

int main()
{
    int num;

    //INTRO
    cout<<"enter number";
    cin>>num;


   //Início história 1:
    if (num == 1){
        cout<<"missao facil";
    }

    //Início história 2:
    if (num == 2){
        cout<<"missao SSS";
    }

    //Inicio história 3:
    if (num == 3){
        cout<<"Após escolher a missão para resgatar a princesa, você lê: 'Presa em Ascalack' ,nas informações do contrato.";
        cout<<"/nAscalack, é a ilha mais distante de todo o reino, além de ser uma viagem longa e rigorosa com dificuldades pelo caminho, a princesa era guardada por um antigo Mago Ascalackiano";
        cout<<"\n(Ascalackianos eram os magos mais experientes do reino).";
        cout<<"Todos os magos do reino têm um ponto fraco e esta é a única maneira de derrotar um mago mais experiente.";
        cout<<"Para descobrir o ponto fraco de um mago, basta fazer um feitiço que tem os seguintes requisitos para ser feito:";
        //REQUISITOS PARA FAZER O FEITIÇO:
        cout<<"\n1-Nome do Mago\n2-Olho de Mercus (Material mais poderoso do reino)\n3-Ser feito pela Bruxa Suprema\n4-Ser feito Próximo ao Mago";
        cout<<"\nEscolha o número do requisito o qual você deseja usar para fazer o feitiço";
        cin>>num;
        //NOME
        if(num==1){
            cout<<"\nO nome de um mago é algo secreto muito secreto";
            cout<<"\nPorém os nomes e as posições de todos os habitantes do reino estão escritos no livro do espaço/tempo, que é guardado por Osceles";
            cout<<"\n(um veterano de batalha que possui muita força física)";
            cout<<"\nCom isso em mente, você vai até Bulfrock, o dono da Guilda, para perguntar sobre o livro.";
            cout<<"\n-Onde fica o livro do espaço tempo Bulfrock?";
            cout<<"\nEspantado, Bulfrock responde:";
            cout<<"\nHá um veterano de batalha neste local, sair de lá com o livro será um trabalho difícil, mas posso lhe dar um mapa com as coordenadas para o local";
            cout<<"digite num =2";
            cin>>num;
         }
        //OLHO DE MERCUS
        if(num==2){
            cout<<"Olho de Mercus";
        }
        //SER FEITO PELA BRUXA SUPREMA
        if(num==3){
            cout<<"Ser Feito Pela Bruxa Suprema";
        }
        //SER FEITO PRÓXIMO AO MAGO
        if(num==4){
            cout<<"Ser Feito Próximo Ao Mago";
        }

    }
    return 0;
}
