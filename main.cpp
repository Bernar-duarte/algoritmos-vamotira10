#include <iostream>
using namespace std;

int main()
{
    int num;

    //INTRO
    cout<<"enter number";
    cin>>num;


   //In�cio hist�ria 1:
    if (num == 1){
        cout<<"missao facil";
    }

    //In�cio hist�ria 2:
    if (num == 2){
        cout<<"missao SSS";
    }

    //Inicio hist�ria 3:
    if (num == 3){
        cout<<"Ap�s escolher a miss�o para resgatar a princesa, voc� l�: 'Presa em Ascalack' ,nas informa��es do contrato.";
        cout<<"/nAscalack, � a ilha mais distante de todo o reino, al�m de ser uma viagem longa e rigorosa com dificuldades pelo caminho, a princesa era guardada por um antigo Mago Ascalackiano";
        cout<<"\n(Ascalackianos eram os magos mais experientes do reino).";
        cout<<"Todos os magos do reino t�m um ponto fraco e esta � a �nica maneira de derrotar um mago mais experiente.";
        cout<<"Para descobrir o ponto fraco de um mago, basta fazer um feiti�o que tem os seguintes requisitos para ser feito:";
        //REQUISITOS PARA FAZER O FEITI�O:
        cout<<"\n1-Nome do Mago\n2-Olho de Mercus (Material mais poderoso do reino)\n3-Ser feito pela Bruxa Suprema\n4-Ser feito Pr�ximo ao Mago";
        cout<<"\nEscolha o n�mero do requisito o qual voc� deseja usar para fazer o feiti�o";
        cin>>num;
        //NOME
        if(num==1){
            cout<<"\nO nome de um mago � algo secreto muito secreto";
            cout<<"\nPor�m os nomes e as posi��es de todos os habitantes do reino est�o escritos no livro do espa�o/tempo, que � guardado por Osceles";
            cout<<"\n(um veterano de batalha que possui muita for�a f�sica)";
            cout<<"\nCom isso em mente, voc� vai at� Bulfrock, o dono da Guilda, para perguntar sobre o livro.";
            cout<<"\n-Onde fica o livro do espa�o tempo Bulfrock?";
            cout<<"\nEspantado, Bulfrock responde:";
            cout<<"\nH� um veterano de batalha neste local, sair de l� com o livro ser� um trabalho dif�cil, mas posso lhe dar um mapa com as coordenadas para o local";
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
        //SER FEITO PR�XIMO AO MAGO
        if(num==4){
            cout<<"Ser Feito Pr�ximo Ao Mago";
        }

    }
    return 0;
}
