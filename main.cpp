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
            cout<<endl<< " Voc� fala com o l�der da guilda e aceita a miss�o de ca�ar os esp�ritos da neve. Ele\nte orienta dizendo que a montanha guarda diversos perigos e � dif�cil saber quando voc�\npode correr perigo ou n�o. Voc� vai at� o p� das montanhas g�lidas. Se depara com dois caminhos: ";
            cout<<endl<< " Na op��o 1 tem um terreno irregular, e na op��o 2 um terreno mais plano, por�m ambas t�m placas de perigo.";
            cout<<endl<< "\nDigite a op��o: ";
            cin>> num;

        if (num==1){
            cout<<endl<<" Voc� escolhe ir pelo terreno irregular. Seguindo em dire��o at� a parte alta da montanha.";
            cout<<endl<<" Voc� tem um pouco de dificuldade na subida ent�o acaba ficando cada vez mais \ntarde, o frio no da montanha n�o � nem um pouco aconchegante, por�m quanto \nmais voc� demorar, mais ficar� escasso os mantimentos. Ent�o voc� deve fazer uma dif�cil decis�o:";
            cout<<endl<<"A op��o 1 � armar abrigo e repousar at� a manh� seguinte. E a op��o 2 voc� continua para poupar mantimentos.";
            cout<<endl<<"\nDigite a op��o: ";
            cin>> num;

            if (num==1){
                cout<<endl<<" Voc� escolhe montar um abrigo e repousar at� a manh� seguinte.";
                cout<<endl<<" A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante \npr�ximo ao topo da montanha. Voc� chega pr�ximo ao topo da montanha e \nfinalmente encontra um montante de esp�ritos da nave. S�o como bolas de neves \nflutuantes, seu valor prov�m da baixa temperatura que emite de seu corpo. No ver�o \ncustam fortunas para resfriar os lares. Voc� coleta algumas dezenas e coloca em \nalgumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma \navalanche vinda em sua dire��o. Voc� pode escolher entre:";
                cout<<endl<<"A op��o 1 que � correr ou a op��o 2 ficar e utilizar magia de fogo para conter a neve.";
                cout<<endl<<"\nDigite a op��o: ";
                cin>> num;
                if (num==1){
                    cout<<endl<<" Voc� escolhe correr o mais r�pido poss�vel.";
                    cout<<endl<<" Ao correr o mais r�pido poss�vel, o estrondo se aproximou rapidamente. No meio da sua corrida voc� � apunhalado nas costas.";
                    cout<<endl<<"\nVoc� morreu.";
                    return 0;
                }
                 else {
                    cout<<endl<<" Voc� escolhe utilizar sua magia de fogo para conte a neve.";
                    cout<<endl<<" Voc� utiliza a magia de fogo para conter a neve. Voc� conseguiu conter \na avalanche, em meio ao vapor criado do calor e do frio surge uma figura com uma ,presen�a inabal�vel. Amedrontado voc� tem duas op��es: ";
                    cout<<endl<<"A op��o 1 � se reverenciar, pedir perd�o por qualquer coisa que tenha feito\ne pedir permiss�o para ir embora. A op��o 2 � levantar o seu cajado e atacar com sua magia poderosa.";
                    cout<<endl<<"\nDigite a op��o: ";
                    cin>> num;

                    if (num==1){
                        cout<<endl<<" Voc� escolhe se reverenciar, pedir perd�o por qualquer coisa que tenha feito e pedir permiss�o para ir embora.";
                        cout<<endl<<" Ele aceita sua reverencia como pedido de desculpas, pede para soltar os esp�ritos e o permite ir embora apenas com o que � seu. Voc� desce a montanha em dire��o a cidade da casa da guilda. Voc� continua vivo, mas sem os esp�ritos para vender.";
                        cout<<endl<<"\nVoc� vence por conseguir sair vivo.";
                        return 0;
                    }

                    else {
                        cout<<endl<<" Voc� escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                        cout<<endl<<" Voc� ataca com uma poderosa magia de fogo, em meio as labaredas surgem a figura em uma velocidade sobre humana e corta sua cabe�a.";
                        cout<<endl<<"\nVoc� morre decapitado.";
                        return 0;
                        }
                    }
                }
            }
            else{
                cout<<endl<<" Voc� escolher seguir viajem e poupar os seus mantimentos.";
                cout<<endl<<" Em meio a noite voc� ouve alguns uivos vindo em sua dire��o, quando avista com a \nluz do luar uma alcateia de lobos, vindo em sua dire��o. Voc� tem que rapidamente decidir: ";
                cout<<endl<<" A op��o 1 � pegar seu cajado e utilizar magia para enfrent�-los, a op��o 2 � se esconder embaixo da neve.";
                cout<<endl<<"\nDigite a op��o: ";
                cin>> num;
                if (num==1){
                    cout<<endl<<" Voc� escolhe utilizar se cajado para atacar os lobos.";
                    cout<<endl<<" Voc� derrota alguns lobos, mas s�o muito, depois do primeiro lobo te alcan�ar fica\ndif�cil lutar ent�o voc� n�o resiste as mordidas.";
                    cout<<endl<<"\nVoc� foi devorado.";
                    return 0;
                        }
                else {
                    cout<<endl<<" Voc� escolhe se esconder embaixo da neve.";
                    cout<<endl<<" Voc� escolhe se esconder embaixo da neve. Voc� comeu pouco pela falta de mantimentos\ne nem se quer parou para descansar. A fraqueza o levou a um choque t�rmico.";
                    cout<<endl<<"\nVoc� morre soterrado onde se escondeu.";
                    return 0;
                    }
                }

    if (num==2){
        cout<<endl<<" Voc� escolhe ir pelo terreno plano. Seguindo em dire��o at� a parte alta da montanha.";
        cout<<endl<<" Voc� segue tranquilamente em um caminho quase que esculpido pelos ventos das \nmontanhas. E de enquanto caminhava encontra um pequeno vilarejo. Os morados \nos avistam de longe, por�m n�o parecem ser muito agrad�veis. Voc� tem apenas \nalguns mantimentos:";
        cout<<endl<<"A op��o 1 seria pegar alguns mantimentos e se informar no vilarejo. A op��o 2 seria seguir direto por conta da hostilidade dos moradores.";
        cout<<endl<<"\nDigite a op��o: ";
        cin>> num;}
    return 0;
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
