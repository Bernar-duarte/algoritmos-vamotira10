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
            cout<<endl<< " Você fala com o líder da guilda e aceita a missão de caçar os espíritos da neve. Ele\nte orienta dizendo que a montanha guarda diversos perigos e é difícil saber quando você\npode correr perigo ou não. Você vai até o pé das montanhas gélidas. Se depara com dois caminhos: ";
            cout<<endl<< " Na opção 1 tem um terreno irregular, e na opção 2 um terreno mais plano, porém ambas têm placas de perigo.";
            cout<<endl<< "\nDigite a opção: ";
            cin>> num;

        if (num==1){
            cout<<endl<<" Você escolhe ir pelo terreno irregular. Seguindo em direção até a parte alta da montanha.";
            cout<<endl<<" Você tem um pouco de dificuldade na subida então acaba ficando cada vez mais \ntarde, o frio no da montanha não é nem um pouco aconchegante, porém quanto \nmais você demorar, mais ficará escasso os mantimentos. Então você deve fazer uma difícil decisão:";
            cout<<endl<<"A opção 1 é armar abrigo e repousar até a manhã seguinte. E a opção 2 você continua para poupar mantimentos.";
            cout<<endl<<"\nDigite a opção: ";
            cin>> num;

            if (num==1){
                cout<<endl<<" Você escolhe montar um abrigo e repousar até a manhã seguinte.";
                cout<<endl<<" A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante \npróximo ao topo da montanha. Você chega próximo ao topo da montanha e \nfinalmente encontra um montante de espíritos da nave. São como bolas de neves \nflutuantes, seu valor provém da baixa temperatura que emite de seu corpo. No verão \ncustam fortunas para resfriar os lares. Você coleta algumas dezenas e coloca em \nalgumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma \navalanche vinda em sua direção. Você pode escolher entre:";
                cout<<endl<<"A opção 1 que é correr ou a opção 2 ficar e utilizar magia de fogo para conter a neve.";
                cout<<endl<<"\nDigite a opção: ";
                cin>> num;
                if (num==1){
                    cout<<endl<<" Você escolhe correr o mais rápido possível.";
                    cout<<endl<<" Ao correr o mais rápido possível, o estrondo se aproximou rapidamente. No meio da sua corrida você é apunhalado nas costas.";
                    cout<<endl<<"\nVocê morreu.";
                    return 0;
                }
                 else {
                    cout<<endl<<" Você escolhe utilizar sua magia de fogo para conte a neve.";
                    cout<<endl<<" Você utiliza a magia de fogo para conter a neve. Você conseguiu conter \na avalanche, em meio ao vapor criado do calor e do frio surge uma figura com uma ,presença inabalável. Amedrontado você tem duas opções: ";
                    cout<<endl<<"A opção 1 é se reverenciar, pedir perdão por qualquer coisa que tenha feito\ne pedir permissão para ir embora. A opção 2 é levantar o seu cajado e atacar com sua magia poderosa.";
                    cout<<endl<<"\nDigite a opção: ";
                    cin>> num;

                    if (num==1){
                        cout<<endl<<" Você escolhe se reverenciar, pedir perdão por qualquer coisa que tenha feito e pedir permissão para ir embora.";
                        cout<<endl<<" Ele aceita sua reverencia como pedido de desculpas, pede para soltar os espíritos e o permite ir embora apenas com o que é seu. Você desce a montanha em direção a cidade da casa da guilda. Você continua vivo, mas sem os espíritos para vender.";
                        cout<<endl<<"\nVocê vence por conseguir sair vivo.";
                        return 0;
                    }

                    else {
                        cout<<endl<<" Você escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                        cout<<endl<<" Você ataca com uma poderosa magia de fogo, em meio as labaredas surgem a figura em uma velocidade sobre humana e corta sua cabeça.";
                        cout<<endl<<"\nVocê morre decapitado.";
                        return 0;
                        }
                    }
                }
            }
            else{
                cout<<endl<<" Você escolher seguir viajem e poupar os seus mantimentos.";
                cout<<endl<<" Em meio a noite você ouve alguns uivos vindo em sua direção, quando avista com a \nluz do luar uma alcateia de lobos, vindo em sua direção. Você tem que rapidamente decidir: ";
                cout<<endl<<" A opção 1 é pegar seu cajado e utilizar magia para enfrentá-los, a opção 2 é se esconder embaixo da neve.";
                cout<<endl<<"\nDigite a opção: ";
                cin>> num;
                if (num==1){
                    cout<<endl<<" Você escolhe utilizar se cajado para atacar os lobos.";
                    cout<<endl<<" Você derrota alguns lobos, mas são muito, depois do primeiro lobo te alcançar fica\ndifícil lutar então você não resiste as mordidas.";
                    cout<<endl<<"\nVocê foi devorado.";
                    return 0;
                        }
                else {
                    cout<<endl<<" Você escolhe se esconder embaixo da neve.";
                    cout<<endl<<" Você escolhe se esconder embaixo da neve. Você comeu pouco pela falta de mantimentos\ne nem se quer parou para descansar. A fraqueza o levou a um choque térmico.";
                    cout<<endl<<"\nVocê morre soterrado onde se escondeu.";
                    return 0;
                    }
                }

    if (num==2){
        cout<<endl<<" Você escolhe ir pelo terreno plano. Seguindo em direção até a parte alta da montanha.";
        cout<<endl<<" Você segue tranquilamente em um caminho quase que esculpido pelos ventos das \nmontanhas. E de enquanto caminhava encontra um pequeno vilarejo. Os morados \nos avistam de longe, porém não parecem ser muito agradáveis. Você tem apenas \nalguns mantimentos:";
        cout<<endl<<"A opção 1 seria pegar alguns mantimentos e se informar no vilarejo. A opção 2 seria seguir direto por conta da hostilidade dos moradores.";
        cout<<endl<<"\nDigite a opção: ";
        cin>> num;}
    return 0;
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
