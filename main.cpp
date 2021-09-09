#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, ajudar=false,ferramenta=false,luva=false,trocar=false, expulso=false,cajado_fogo_verdadeiro,escolha1, escolha2, escolha3, escolha4, escolha5;;


//INTRODU��O
    cout<<"Em uma realidade medieval de feiticeiros e seres desconhecidos, voc� � um misterioso e poderoso mago de uma grande guilda. ";
    cout<<"\nSentado na taberna da guilda em mais um dia frio do rigoroso inverno de Freljord, sem dinheiro para sobreviver, o implac�vel mago vai at� o mural de miss�es e se depara com miss�es de diferentes n�veis.";
    cout<<"\nUma f�cil que n�o lhe retornaria muito dinheiro, outra mediana que poderia lhe dar alguns dias de folga e uma a desafiar suas habilidades m�sticas, por�m iria lhe recompensar pela tamanha dificuldade. ";
    cout<<"\nDigite 1 2 ou 3: ";
    cin>>num;
//1 - IN�CIO DA HIST�RIA 1
    if (num == 1){
        cout<<endl<< "  Voc� fala com o l�der da guilda e aceita a miss�o de ca�ar os esp�ritos da neve. Ele\n te orienta dizendo que a montanha guarda diversos perigos, e � dif�cil saber quando voc�\n pode correr perigo ou n�o. Voc� vai at� o p� das montanhas g�lidas. Se depara com dois caminhos: ";
        cout<<endl<< "  Na op��o 1 tem um terreno irregular, e na op��o 2 um terreno mais plano, por�m ambas t�m placas de perigo.";
        cout<<endl<< "\n  Digite a op��o: ";
        cin>> num;
//1.1 - TERRENO IRREGULAR
        if(num==1){
            cout<<endl<<"  Voc� escolhe ir pelo terreno irregular. Seguindo em dire��o at� a parte alta da montanha.";
            cout<<endl<<"  Voc� tem um pouco de dificuldade na subida ent�o acaba ficando cada vez mais \n tarde, o frio da montanha n�o � nem um pouco aconchegante, por�m quanto \n mais voc� demorar,quanto mais tarde, mais perigo voc� corre. Ent�o voc� deve fazer uma dif�cil decis�o:";
            cout<<endl<<"  A op��o 1 � armar abrigo e repousar at� a manh� seguinte. E a op��o 2 voc� continuar em meio a noite.";
            cout<<endl<<"\n  Digite a op��o: ";
            cin>> num;
//2.1 - ARMAR ABRIGO E REPOUSAR
            if(num==1){
                cout<<endl<<"  Voc� escolhe montar um abrigo e repousar at� a manh� seguinte.";
                cout<<endl<<"  A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante \n pr�ximo ao topo da montanha. Voc� chega pr�ximo ao topo da montanha e \n finalmente encontra um montante de esp�ritos da nave. S�o como bolas de neves \n flutuantes, seu valor prov�m da baixa temperatura que emite de seu corpo. No ver�o \n custam fortunas para resfriar os lares. Voc� coleta algumas dezenas e coloca em \n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma \n avalanche vindo em sua dire��o. Voc� pode escolher entre:";
                cout<<endl<<"  A op��o 1 que � correr ou a op��o 2 ficar e utilizar magia de fogo para conter a neve.";
                cout<<endl<<"\n  Digite a op��o: ";
                cin>> num;
//3.1 - CORRER
                if(num==1){
                    cout<<endl<<"  Voc� escolhe correr o mais r�pido poss�vel.";
                    cout<<endl<<"  Ao correr o mais r�pido poss�vel, o estrondo se aproximou rapidamente.\n  No meio da sua corrida voc� � apunhalado nas costas.";
                    cout<<endl<<"\n  Voc� morreu.";
                    return 0;}
//3.2 - UTILIZAR A MAGIA
                else{
                    cout<<endl<<"  Voc� escolhe utilizar sua magia de fogo para conte a neve.";
                    cout<<endl<<"  Voc� utiliza a magia de fogo para conter a neve. Voc� conseguiu conter \n a avalanche, em meio ao vapor criado do calor e do frio surge uma figura\n com uma ,presen�a inabal�vel. Amedrontado voc� tem duas op��es: ";
                    cout<<endl<<"  A op��o 1 � se reverenciar, pedir perd�o por qualquer coisa que tenha feito\n e pedir permiss�o para ir embora. A op��o 2 � levantar o seu cajado e atacar com sua magia poderosa.";
                    cout<<endl<<"\n  Digite a op��o: ";
                    cin>> num;
//4.1 - REVERENCIAR
                    if(num==1){
                        cout<<endl<<"  Voc� escolhe se reverenciar, pedir perd�o por qualquer coisa que tenha feito e pedir permiss�o para ir embora.";
                        cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, pede para soltar\n os esp�ritos e o permite ir embora apenas com o que � seu.\n Voc� desce a montanha em dire��o a cidade da casa da guilda.\n Voc� continua vivo, mas sem os esp�ritos para vender.";
                        cout<<endl<<"\n  Voc� vence por conseguir sair vivo.";
                        return 0;}
//4.2 - ATACAR
                    else{
                        cout<<endl<<"  Voc� escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                        cout<<endl<<"  Voc� ataca com uma poderosa magia de fogo, em meio as labaredas\n surgem a figura em uma velocidade sobre humana e corta sua cabe�a.";
                        cout<<endl<<"\n Voc� morre decapitado.";
                        return 0;}
                    }
                }
//2.2 - SEGUIR VIAGEM
            else{
                cout<<endl<<"  Voc� escolher seguir viajem durante a noite.";
                cout<<endl<<"  Em meio a noite voc� ouve alguns uivos vindo em sua dire��o, quando avista com a \n luz do luar uma alcateia de lobos, vindo em sua dire��o. Voc� tem que rapidamente decidir: ";
                cout<<endl<<"  A op��o 1 � pegar seu cajado e utilizar magia para enfrent�-los, a op��o 2 � se esconder embaixo da neve.";
                cout<<endl<<"\n  Digite a op��o: ";
                cin>> num;
//3.1 - ATACAR
                if(num==1){
                    cout<<endl<<"  Voc� escolhe utilizar seu cajado para atacar os lobos.";
                    cout<<endl<<"  Voc� derrota alguns lobos, mas s�o muito, depois do primeiro lobo\n te alcan�ar fica dif�cil lutar ent�o voc� n�o resiste as mordidas.";
                    cout<<endl<<"\n Voc� foi devorado.";
                    return 0;}
//3.2 - SE ESCONDER
                else{
                    cout<<endl<<"  Voc� escolhe se esconder embaixo da neve.";
                    cout<<endl<<"  Voc� escolhe se esconder embaixo da neve. Voc� comeu pouco pela falta de mantimentos\n e nem se quer parou para descansar. A fraqueza o levou a um choque t�rmico.";
                    cout<<endl<<"\n Voc� morre soterrado onde se escondeu.";
                    return 0;}
                }
            }
//1.2 - TERRENO PLANO
        else{
            cout<<endl<<"  Voc� escolhe ir pelo terreno plano. Seguindo em dire��o at� a parte alta da montanha.";
            cout<<endl<<"  Voc� segue tranquilamente em um caminho quase que esculpido pelos ventos das \n montanhas. E de enquanto caminhava encontra um pequeno vilarejo. Os morados \n os avistam de longe, por�m n�o parecem ser muito agrad�veis. Voc� tem apenas \n alguns mantimentos:";
            cout<<endl<<"  A op��o 1 seria parar e se informar no vilarejo. A op��o 2 seria seguir direto por conta da hostilidade dos moradores.";
            cout<<endl<<"\n Digite a op��o: ";
            cin>> num;
//2.1 - PARA NO VILAREJO
            if (num==1){
                cout<<endl<<"  Voc� escolhe parar no vilarejo e se informar sobre a montanha.";
                cout<<endl<<"  Voc� se engana sobre o povoado do vilarejo, o recebem muito bem. Quando voc� \n pergunta sobre a montanha, eles dizem em meio a algumas antigas hist�rias que o \n esp�rito de um Cavaleiro muito poderoso, O Cavaleiro do Inverno, que defende os \n animais selvagens que ali habitam, e que isso as vezes at� atrapalha eles para \n conseguir alimentos. Ent�o ap�s o l�der ouvir o que voc� buscava ali, oferece a voc� \n uma arma poderosa, forjada com mat�rias conhecidos apenas por eles, O Cajado do Fogo Verdadeiro,\n mas voc� entrar� em divida com eles e futuramente ter� que pagar pelo cajado.";
                cout<<endl<<"  A op��o 1 aceitar a oferta e a op��o 2 recusar a oferta e n�o ter nenhuma d�vida com eles.";
                cout<<endl<<"\n Digite a op��o: ";
                cin>> num;
//3.1 - ACEITAR OFERTA
                if(num==1){
                    cajado_fogo_verdadeiro=true;
                    cout<<endl<<"  Voc� aceita a oferta e ter� que pagar pelo cajado futuramente.";
                    }
// 3.2 - N�O ACEITAR A OFERTA
                else{
                    cajado_fogo_verdadeiro=false;
                    cout<<endl<<"  Voc� escolhe recusar para n�o ter sem nenhuma divida.";
                    }
//SEGUINDO A VIAGEM
                    cout<<endl<<"  Voc� agradece a hospitalidade e segue sua viagem. Revigorado pelo descanso que\n conseguiu ter no vilarejo. Em instantes voc� chega pr�ximo ao topo da montanha e\n finalmente encontra um montante de esp�ritos da nave. S�o como bolas de neves \n flutuantes, seu valor prov�m da baixa temperatura que emite de seu corpo. No ver�o\n custam fortunas para resfriar os lares. Voc� coleta algumas dezenas e coloca em\n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma\n avalanche vindo em sua dire��o. ";
                    cout<<endl<<"\n  Voc� pode escolher a op��o 1 que � ficar e utilizar magia de fogo para conter a neve ou a op��o 2 que � correr.";
                    cout<<endl<<"\n  Digite a op��o: ";
                    cin>> num;
//4.1 - CONTER A NEVE
                    if(num==1){
                        cout<<endl<<"  Voc� escolhe utilizar sua magia de fogo para conter a neve.";
                        cout<<endl<<"  Voc� utiliza a sua magia de fogo para conter a neve. Voc� conseguiu conter \n a avalanche. Em meio ao vapor criado do calor e do frio surge uma figura com uma \npresen�a inabal�vel. � o Cavaleiro do Inverno que as pessoas do vilarejo falaram. \nEle est� protegendo os Esp�ritos da Neve. Voc� sabe o que ele quer, mas tem duas \nop��es: ";
                        cout<<endl<<"  A op��o 1 � levantar o seu cajado e atacar com sua magia poderosa. A op��o 2 � se reverenciar, pedir perd�o por qualquer coisa que tenha feito\ne pedir permiss�o para ir embora.";
                        cout<<endl<<"\n Digite a op��o: ";
                        cin>> num;
//5.1 - LUTAR CONTRA O CAVALEIRO
                        if(num==1){
// COM O CAJADO
                            if(cajado_fogo_verdadeiro==true){
                                cout<<endl<<"  Voc� escolhe levantar o seu Cajado do Fogo Verdadeiro e ataca com sua magia poderosa.";
                                cout<<endl<<"  Voc� ataca com a magia de Fogo Verdadeiro, o Cavaleiro n�o resiste\n ao poder e desaparece em meio ao vapor. Ent�o voc� recolhe um pouco mais\n de espiritos da neve para pagar sua d�vida e desce em dire��o\n ao vilarejo para assim ir para a cidade da casa da guilda. ";
                                cout<<endl<<"\n Voc� vence e consegue dinheiro ao vender os esp�ritos na casa da guilda.";
                                return 0;}
// SEM O CAJADO
                            else{
                                cout<<endl<<"  Voc� escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                                cout<<endl<<"  Voc� ataca com uma poderosa magia de fogo, em meio as labaredas surge\n o Cavaleiro em uma velocidade sobre humana e corta sua cabe�a.";
                                cout<<endl<<"\n Voc� morre decapitado.";
                                return 0;}
                            }
// 5.2 - SE REVERENCIAR
                        else{
                        cout<<endl<<"  Voc� escolhe se reverenciar, pedir perd�o por qualquer coisa que tenha feito e pedir permiss�o para ir embora.";
                        cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, voc� solta os esp�ritos e ele\n permite voc� para ir embora apenas com o que � seu. Voc� desce a montanha em\n dire��o a cidade da casa da guilda. Voc� continua vivo, mas sem os esp�ritos da\n neve para vender.";
                        cout<<endl<<"\n Voc� vence por conseguir sair vivo mas endividado com o povoado do vilarejo.";
                        return 0;}
                        }
//4.2 - CORRER
                    else{
                        cout<<endl<<"  Voc� escolhe correr o mais r�pido poss�vel.";
                        cout<<endl<<"  Ao correr o mais r�pido poss�vel, o estrondo se aproximou rapidamente.\n No meio da sua corrida voc� � apunhalado nas costas.";
                        cout<<endl<<"\n Voc� morreu apunhalado.";
                        return 0;}
                }
//2.2 - N�O PARAR NO VILAREJO
            else{
                cout<<endl<<"  Voc� segue sua viajem sem parar no vilarejo.";
                cout<<endl<<"  Por n�o ter muita comida nem descansar voc� est� um pouco cansado ent�o parece\n que a viajem demora mais, no meio de sua caminhada voc� se depara com gritos de\n socorro, quando avista em meio a neve caindo uma pessoa na beira do penhasco. �\n dif�cil de enxerga qual a situa��o da pessoa, que parece estar pendurada. Voc� tem duas op��es: ";
                cout<<endl<<"  A op��o 1 � seguir sua viajem, a op��o 2 � ent�o ajudar a pessoa que est� a pedindo ajuda.";
                cout<<endl<<"\n Digite a op��o: ";
                cin>> num;
// 3.1 - SEGUIR VIAGEM
                if(num==1){
                    cout<<endl<<"  Voc� escolhe seguir sua viajem.";
                    cout<<endl<<"  Acaba ficando cada vez mais tarde, o frio no da montanha n�o � nem um pouco\n aconchegante, e voc� avista uma cadeia de nuvens que ira se tornar\n uma nevasca. Ent�o o mago deve fazer uma dif�cil decis�o: ";
                    cout<<endl<<"  A op��o 1 � armar abrigo e repousar at� a manh� seguinte. E a op��o 2 � voc� continuar.";
                    cout<<endl<<"\n Digite a op��o: ";
                    cin>> num;
// 4.2 - MONTAR ABRIGO
                    if(num==1){
                        cout<<endl<<"  Voc� escolhe montar um abrigo e repousar at� a manh� seguinte.";
                        cout<<endl<<"  A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante\n pr�ximo ao topo da montanha. Voc� chega pr�ximo ao topo da montanha e\n finalmente encontra um montante de esp�ritos da nave. S�o como bolas de neves\n flutuantes, seu valor prov�m da baixa temperatura que emite de seu corpo. No ver�o\n custam fortunas para resfriar os lares. Voc� coleta algumas dezenas e coloca em\n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma\n avalanche vinda em sua dire��o. Voc� pode escolher entre:";
                        cout<<endl<<"  A op��o 1 que � correr ou a op��o 2 ficar e utilizar magia de fogo para conter a neve.";
                        cout<<endl<<"\n Digite a op��o: ";
                        cin>> num;
// 5.1 - CORRER
                        if(num==1){
                            cout<<endl<<"  Voc� escolhe correr o mais r�pido poss�vel.";
                            cout<<endl<<"  Ao correr o mais r�pido poss�vel, o estrondo se aproximou rapidamente. No meio da sua corrida voc� � apunhalado nas costas.";
                            cout<<endl<<"\n Voc� morreu.";
                            return 0;}
// 5.2 - UTILIZAR MAGIA DE FOGO
                        else{
                            cout<<endl<<"  Voc� escolhe utilizar sua magia de fogo para conte a neve.";
                            cout<<endl<<"  Voc� utiliza a magia de fogo para conter a neve. Voc� conseguiu conter\n a avalanche, em meio ao vapor criado do calor e do frio surge\n uma figura com uma ,presen�a inabal�vel. Amedrontado voc� tem duas op��es: ";
                            cout<<endl<<"  A op��o 1 � se reverenciar, pedir perd�o por qualquer coisa que tenha feito\n e pedir permiss�o para ir embora. A op��o 2 � levantar o seu cajado e atacar com sua magia poderosa.";
                            cout<<endl<<"\n Digite a op��o: ";
                            cin>> num;
// 6.1 - REVERENCIAR
                            if (num==1){
                                cout<<endl<<"  Voc� escolhe se reverenciar, pedir perd�o por qualquer coisa que tenha feito e pedir permiss�o para ir embora.";
                                cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, pede para\n soltar os esp�ritos e o permite ir embora apenas com o que � seu.\n Voc� desce a montanha em dire��o a cidade da casa da guilda.";
                                cout<<endl<<"\n Voc� vence por conseguir sair vivo mas sem esp�ritos da neve para vender.";
                                return 0;}
// 6.2 - LUTAR CONTRA CAVALEIRO
                            else{
                                cout<<endl<<"  Voc� escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                                cout<<endl<<"  Voc� ataca com uma poderosa magia de fogo, em meio as labaredas surgem\n a figura em uma velocidade sobre humana e corta sua cabe�a.";
                                cout<<endl<<"\n Voc� morre decapitado.";
                                return 0;}
                            }
                        }
// 4.2 - CONTINUAR VIAGEM
                    else{
                        cout<<endl<<"  Voc� escolhe continuar.";
                        cout<<endl<<"  Ao continuar iniciou uma forte nevasca, sem conseguir enxergar por conta dos ventos\n cortantes, voc� fica sem conseguir sair de onde est� e o frio o consome por completo.";
                        cout<<endl<<"\n Voc� morre de frio.";
                        return 0;}
                    }
// 3.2 - AJUDAR A PESSOA
                else{
                    cout<<endl<<"  Voc� escolhe ajudar a pessoa.";
                    cout<<endl<<"  � dif�cil enxergar por conta da espessa neve, por�m voc� consegue se guiar pelo grito\n da pessoa por socorro, voc� chega perto, e quando v� j� � tarde demais. S�o\n Sereias das Neves. Utilizam a ideia de ser um chamariz para atrair her�is\n para sua armadilha. Ela o agarra e arranca seus membros com sua boca larga e dentes afiados. ";
                    cout<<endl<<"\n Voc� morreu para uma sereia das neves.";
                    return 0;}
                }
            }
    return 0;
    }


    //IN�CIO DA HIST�RIA 2
    if (num == 2){
        cout << endl << " ---------------------------------------------------------------------------------------------   ";
    cout << endl << " Ap�s selecionar a miss�o m�dia, voc� fala com o l�der da guilda e aceita a miss�o de Escoltar o Marqu�s Eliot de volta ao castelo do Reino de Freljord.";
    cout << endl << " Ele o orienta a ser cauteloso, visto que o Marqu�s de 17 anos � filho de Eratus, um renomado Lorde do reino.";
    cout << endl << " Voc� tamb�m deve concluir a miss�o em um dia, caso contr�rio, receber� metade do valor acordado.";
    cout << endl << " - Alguma vez falhei em alguma miss�o Bjork? - Voc� diz ao chefe da guilda. O mesmo gargalha e concorda com a cabe�a.";
    //come�o da miss�o

    cout << endl << " O dia amanhace, voc� arruma seus mantimentos e parte.";
    cout << endl << " A estrada � calma, e sem imprevistos ou surpresas desagrad�veis, voc� chega ao local marcado no contrato e entrega";
    cout << endl << " uma t�nica ao Marqu�s, que a recebe com relut�ncia.";
    cout << endl << " - Porque eu deveria usar isso? - Pergunta o Marqu�s curioso.";
    cout << endl << " - A estrada de volta � incerta, seja quem formos encontrar no caminho, sabe que o valor agregado a um Marqu�s � alto.";
    cout << endl << " - E o valor agregado a um renomado mago? - Retruca Eliot, que ao ver voc� tamb�m colocando uma t�nica, se cala.";
    cout << endl << " - Preocupe-se consigo e fa�a oque eu mandar, as coisas aqui s�o diferentes do que dentro de um castelo.";
    cout << endl << "  O marqu�s concorda com a cabe�a e veste a t�nica, que o cobre quase por completo.";
    cout << endl << " Voc�s iniciam a viagem, o tempo est� fechado, e o sol em cima de voc�s reluta em aparecer.";
    cout << endl << " Durante todo o percurso o jovem lhe faz v�rias perguntas, das quais voc� desconversa.";
    cout << endl << " - Voc�s s�o todos assim? - Pergunta Eliot, em um tom mais alto do que o usado anteriormente.";
    cout << endl << " - Assim, como? - Voc� responde.";
    cout << endl << " - Poucas palavras, misteriosos, frios... de certa forma. - Responde o Marqu�s.";
    cout << endl << " - N�o somos pagos para conversar.";
    cout << endl << " - � claro que n�o. - Responde o jovem cabisbaixo.";
    cout << endl << " Voc�s caminham por um tempo, at� chegar ao �nicio da Grande Ponte Rinfih, um centro de transa��es e vendas, infestado de mercantes, mercen�rios e pessoas perigosas. Um caminho do qual voc� conhece bem.";
    cout << endl << " Antes mesmo de chegarem a seu in�cio, j� � poss�vel escutar as pessoas gritando, anunciando produtos, rindo e conversando.";
    cout << endl << " - N�o pare de me seguir, n�o converse com ningu�m, e principalmente, n�o retire o capuz da t�nica, n�o importa oque aconte�a. - Voc� fala seriamente, Eliot concorda com a cabe�a.";
    cout << endl << " Nesta ponte sem leis, tudo � comercializado, desde armas e escudos roubados a feiti�os de afei��o.";
    cout << endl << " Voc�s caminham lentamente para n�o levantar suspeitas, com a cabe�a baixa voc� apenas ouve as pessoas anunciando seus produtos ao seu redor e os trov�es acima da sua cabe�a.";
    cout << endl << " - Procurando por algum feiti�o jovem meu jovem? - Anuncia uma mulher em frente a sua tenda.";
    cout << endl << " - Escolha uma espada para se proteger - Comenta outro senhor, t�o magro quanto a espada que anunciar�.";
    cout << endl << " - Gostaria de uma bebida senhor? - Oferece outro mercador.";
    cout << endl << " - Ignore-os. - Voc� comenta a Eliot, em voz baixa.";
    cout << endl << " Voc�s seguem adiante pela ponte, mas voc� se lembra que est� sem po��es de mana, e talvez fosse uma boa ideia reabastecer o estoque.";
    cout << endl << " Voc� deve escolher entre:";
    cout << endl << " Op��o 1: Parar em uma tenda de po��es.";
    cout << endl << " Op��o 2: Continuar a travessia.";
    cout << endl << " Digite a op��o: ";
    cin >> escolha1;
        if (escolha1 == 1) {
            cout << endl << " Voc� segue em dire��o a uma mercadora que anuncia po��es, e faz sinal para Evelot lhe seguir.";
            cout << endl << " - Oque gostaria meu senhor? - Pergunta a velha senhora, cega de um olho e com um estranho sorriso no rosto.";
            cout << endl << " - Uma po��o, apenas.";
            cout << endl << " - E para o jovem? - Pergunta a velha, olhando em dire��o ao jovem Marqu�s.";
            cout << endl << " - A po��o � tudo que buscamos.";
            cout << endl << " A velha ent�o entra na tenda, voltando alguns instantes depois com dois frascos em m�os. Um contendo mana, um l�quido azul escuro;" << endl << " e o outro, contendo um misterioso l�quido vermelho-rubro.";
            cout << endl << " Pegando rapidamente as moedas que voc� deixou em cima da mesa como pagamento, a velha estende o bra�o, lhe entregando os dois frascos.";
            cout << endl << " - Apenas o frasco de mana. - Voc� responde friamente.";
            cout << endl << " - Vamos, n�o se recusa presentes de uma velha senhora. Se provar� de bom uso na hora certa." << endl << " - Suas po��es meu senhor. - Insiste a velha caolha, estendendo novamente o bra�o com os frascos.";
            cout << endl << " Voc� aceita, mas ao tentar pegar os frascos a velha os segura com mais for�a.";
            cout << endl << " - Tome cuidado meu senhor, magos n�o s�o bem vistos por aqui, ainda mais acompanhando pessoas..." << endl << "de tal classe. - Diz ela olhando para o jovem Marqu�s. A velha sorri e volta para dentro de sua tenda.";
            cout << endl << " Voc� entrega o frasco com l�quido vermelho-rubro para o Marqu�s, que o guarda dentro de sua t�nica, voc�s voltam a passar pela ponte.";
            cout << endl << " - Como ela sabia sobre mim? - Sussura Eliot, incr�dulo.";
            cout << endl << " - Magia escura provavelmente, a fez enchergar al�m do que uma simples t�nica cobre. - Voc� responde olhando ao redor para se certificar que ningu�m escutaria.";
            cout << endl << " - Mas magia escura sempre vem com um pre�o, nesse caso, seu olho. - Voc� conclui, chocando ainda mais Eliot.";
            cout << endl << " Voc�s seguem andando, e j� no fim da ponte o tempo se fecha, o vento aumenta e a chuva come�a.";
            cout << endl << " As pessoas rapidamente come�am a recolher seus pertences e itens de venda, voc�s aceleram o passo, por�m, uma forte rajada de vento sopra contra voc�s e ambos os capuzes acabam caindo.";
            cout << endl << " Olhando em dire��o a voc�s, as pessoas come�am a sussurar entre s�.";
            cout << endl << " - Um mago! - Cochicha um comericante.";
            cout << endl << " - Oque este tipo de coisa faz aqui? - Algu�m esbraveja.";
            cout << endl << " - E... o Marqu�s? - Comenta outro comerciante.";
            cout << endl << " Voc� coloca o capuz novamente, Eliot faz o mesmo, acelerando o passo voc�s finalmente concluem a travessia pela ponte, deixando os murmurinhos para tr�s," << endl << " � quando voc� percebe uma suspeita movimenta��o em meio as �rvores da misteriosa Floresta Catherine, que acompanha a estrada.";
            cout << endl << " Voc� tem duas op��es:";
            cout << endl << " Op��o 1: Investigar a estranha movimenta��o.";
            cout << endl << " Op��o 2: Continuar no caminho.";
            cout << endl << " Digite sua op��o: ";
            cin >> escolha2;
                if (escolha2 == 1){
                    cout << endl << " Voc� entra na mata, Eliot ainda com o capuz o segue, voc�s caminham por alguns minutos, a floresta est� inquieta," << endl << " e s� � poss�vel ouvir os sons das gotas da chuva batendo vagamente contra as folhas das �rvores.";
                    cout << endl << " Ap�s alguns minutos de caminhada, o sil�ncio � quebrado quando Eliot � bruscamente puxado para cima, gritando desesperado em seguida.";
                    cout << endl << " Voc� olha para tr�s e se depara com um Knar que espreitava por entre as �rvores. Uma esp�cie de centop�ia gigante, que se enrola em suas v�timas, perfurando os �rg�os e dilacerando impiedosamente a carne.";
                    cout << endl << " O Knar agarra o jovem com uma de suas centenas patas, o levando para o topo da �rvore.";
                    cout << endl << " Rapidamente voc� lan�a sua magia de fogo, queimando a �rvore, mas o Knar � incrivelmente veloz, se movendo habilmente por entre as �rvores.";
                    cout << endl << " O jovem Marqu�s grita desesperado por ajuda, mas n�o h� oque se possa fazer.";
                    cout << endl << " Com um golpe certeiro, o Knar perfura o peito de Eliot com suas presas.";
                    cout << endl << " O Marqu�s est� morto, a miss�o fracassou.";
                return 0;

                }

                if (escolha2 == 2) {
                    cout << endl << " Sem tempo para devaneios voc�s seguem pelo caminho, por�m, ainda com receio sobre a suspeita movimenta��o, voc� acha melhor manterem um passo acelerado.";
                    cout << endl << " - N�o podemos parar agora, continue me seguindo. - Voc� fala, acelerando ainda mais o passo.";
                    cout << endl << " - Porque n�o podemos? Estou exausto. - Indaga o Marqu�s, j� cansado.";
                    cout << endl << " - Acho que estamos sendo seguidos, at� n�o ter certeza, n�o podemos desacelerar.";
                    cout << endl << " Voc�s caminham por mais algum tempo, at� uma esp�cie de clareira, e se sentam embaixo de algumas �rvores com grandes galhos e folhas," << endl << " onde a chuva j� n�o os atinge t�o fortemente.";
                    cout << endl << " Voc� usa uma de suas magias para por fogo em um monte de gravetos empilhados. Eliot se senta para descansar, botando as m�os pr�ximas ao fogo.";
                    cout << endl << " Ap�s alguns minutos de descanso, a chuva antes forte, agora se resume a poucos pingos.";
                    cout << endl << " Voc� retira de sua bolsa duas ma��s e dois p�es, entregando um de cada para o Marqu�s." << endl << " Eliot come ambos os alimentos e volta a se esquentar pr�ximo a fogueira que queima vivamente.";
                    cout << endl << " Pouco tempo depois, voc� sente uma estranha presen�a, vindo por entre as �rvores que os cercam." << endl << " - Levante-se. - Voc� diz bruscamente ao Marqu�s, que rapidamente se p�em de p�. Em um girar de m�os, voc� apaga o fogo.";
                    cout << endl << " - Oque aconteceu? - Pergunta o jovem, preocupado.";
                    cout << endl << " - Nos encontraram, precisamos seguir.";
                    cout << endl << " Antes mesmo que pudesse reagir, voc�s se veem cercados de mercen�rios, surgindo por detr�s das �rvores.";
                    cout << endl << " Eliot se esconde atr�s de voc� e ao todo voc� conta sete homens armados com facas e punhais.";
                    cout << endl << " - Um mago e um marqu�s, parece que procuramos prata e achamos ouro rapazes. - Comenta um dos mercen�rios, com um sorriso no rosto.";
                    cout << endl << " - Se tentar alguma gracinha n�o sobrar�o restos para contar hist�ria. - Grita outro.";
                    cout << endl << " Os homens come�am a se aproximar cada vez mais, rapidamente, prevendo o pior, voc� empurra Eliot no tronco onde antes voc�s repousavam. Usando uma poderosa magia," << endl << " voc� bate no ch�o, fazendo com que todos a sua volta voem com o impacto, Eliot segura-se no tronco, mas acaba atingido por um dos galhos da �rvore, que acaba caindo com seu poder.";
                    cout << endl << " Aproveitando os inimigos atordoados, o Marqu�s corre, ainda desnorteado, por entre as �rvores, sumindo logo em seguida.";
                    cout << endl << " Um dos homens levanta e corre em sua dire��o, e voc� deve agir rapidamente, escolhendo entre:";
                    cout << endl << " Op��o 1: Magia de ricochete: Por um curto per�odo, voc� se torna invulner�vel a ataques de armas brancas.";
                    cout << endl << " Op��o 2: Magia de fogo: Carboniza completamente o corpo dos inimigos, mas demanda tempo para canaliza��o.";
                    cout << endl << " Op��o 3: Correr atr�s de Eliot.";
                    cout << endl << " Digite a op��o: ";
                    cin >> escolha3;
                }
                if (escolha3 == 1) {

                            cout << endl << " Voc� opta por usar a magia de ricochete em s� mesmo. Os mercen�rios tentam lhe acertar, por�m sem sucesso pois sua pele e roupa se tornaram impenetr�veis.";
                            cout << endl << " Ap�s uma grande luta de l�minas e magias, voc� derrota os mercen�rios, que agora mortos, est�o caidos ao seu redor, por�m, voc� acaba esgotado. Usando o resto da mana que lhe resta," << endl << " voc� usa uma magia de rastreamento para encontrar Eliot, que sumiu em meio a mata.";
                            cout << endl << " Ainda ofegante, voc� se concentra, sentindo uma energia fluir por entre as �rvores. Ap�s alguns minutos de caminhada, voc� chega" << endl << " a uma esp�cie de caverna, e sente um pouco da energia de Eliot fluindo la dentro.";
                            cout << endl << " Ao adentrar a caverna, sua mana acaba, o impossibilitando de seguir com o rastreamento, felizmente voc� tem um frasco" << endl << " de mana, que comprou na tenda da velha caolha. Voc� bebe o frasco, e sente sua mana recuperar.";
                            cout << endl << " Acendendo um peda�o de madeira com fogo m�gico, voc� volta ao rastreamento. Ap�s alguns minutos andando dentro da caverna, voc� se depara com Eliot ca�do, mas sente algo estranho." << endl << " As chamas come�am a iluminar cada vez mais o ambiente, e voc� percebe que aquela n�o � uma simples caverna, e sim um ninho de Grogous.";
                            cout << endl << " Pequenos e irritantes monstros que andam em bando, saindo apenas a noite para ca�ar e dormindo durante todo o dia.";
                            cout << endl << " Voc� se mantem em sil�ncio, e caminha lentamente em dire��o ao Marqu�s, que segue desmaiado.";
                            cout << endl << " Ao se aproximar, Eliot acorda bruscamente, e com um grito assustado, acorda o mini ex�rcito de Grogous que ali dormia.";
                            cout << endl << " Os pequenos monstros acordam enfurecidos, e sem mana para outro grande poder, voc� se ve encurralado.";
                            cout << endl << " Eliot levanta rapidamente, e um l�quido espesso avermelhado escorre por entre sua t�nica, mas n�o � sangue, e sim o frasco antes entregue pela velha das po��es.";
                            cout << endl << " Os Grogous farejam o ar, e ap�s sentirem o cheiro do desconhecido l�quido, come�am a gritar, quase como se sentissem dor," << endl << " correndo em seguida em dire��o a sa�da da caverna, que antes clara, agora � iluminada apenas pela lua.";
                            cout << endl << " - Oq-Oque aconteceu? Eu achei que a gente j� era. - Comenta Eliot, ainda espantado.";
                            cout << endl << " - Isso era Espanta Besta, uma po��o dif�cil de ser encontrada, e mais ainda de ser produzida. E se n�o fosse por ela, sim, a gente j� era.";
                            cout << endl << " Voc� est� exaustado e est� escuro la fora agora, talvez seja melhor descansar na caverna at� amanhacer para recuperar as energias, lembrando que" << endl << " caso o Marqu�s seja entregue no dia seguinte, voc� receber� metade do valor acordado.";
                            cout << endl << " Oque voc� deseja fazer?";
                            cout << endl << " Op��o 1: Passar a noite na caverna.";
                            cout << endl << " Op��o 2: Partir agora.";
                            cout << endl << " Digite a op��o: ";
                            cin >> escolha4;

                    }            else if (escolha3 == 2) {

                                    cout << endl << " Voc� opta por usar a magia de fogo, por�m, ao come�ar a canaliza��o, um dos mercen�rios lan�a sua adaga, o acertando em cheio na panturilha";
                                    cout << endl << " fazendo voc� cair de joelhos no ch�o, outro o esfaqueia no ombro, e voc� grita de dor. Voc� tenta voltar atr�s, e lan�ar o feiti�o de ricochete em s� mesmo,";
                                    cout << endl << " por�m ja � tarde. Um dos mercen�rios o chuta no est�mago, voc� cai no ch�o, agonizando.";
                                    cout << endl << " Voc� morreu e Eliot desapareceu.";
                                    cout << endl << " A miss�o fracassou.";

                                    return 0;

                    }            else  {

                                    cout << endl << " Voc� opta por tentar correr atr�s de Eliot, e ao adentrar na mata, o v� cambaleando por entre algumas �rvores.";
                                    cout << endl << " Antes que ele desmaiasse, voc� rapidamente se p�e a sua frente, fazendo com que o mesmo aterrisse em suas costas.";
                                    cout << endl << " Com o Marqu�s desacordado em sua garupa, lutar se torna imposs�vel. Voc� tenta se esconder entre alguns arbustos dos homens que o procuram,";
                                    cout << endl << " mas a floresta molhada deixa evidenciada as pegadas pelos locais passados.";
                                    cout << endl << " N�o demora at� voc�s serem encontrados, um dos homens lan�a v�rias l�minas, uma acerta seu ombro e outra sua perna. Eliot cai, ainda desacordado.";
                                    cout << endl << " Voc� tenta usar um de seus poderes, mas um dos mercen�rios o segura. - Voc� os olha furioso.";
                                    cout << endl << " - Voc� vem conosco, sua sorte � ter certo valor, porque eu adoraria terminar o servi�o aqui. - Um dos mercen�rios fala" << endl << " enquanto usa uma abra�adeira como algema em seus bra�os.";
                                    cout << endl << " - E esse aqui, sem d�vidas ser� de grande valor. - Diz um dos homens enquanto passa a m�o pelo rosto de Eliot.";
                                    cout << endl << " Voc�s foram pegos e o Marqu�s foi levado.";
                                    cout << endl << " A miss�o fracassou.";

                                    return 0;

           }             if (escolha4 == 1) {

                            cout << endl << " Voc� opta por esperar amanhecer. Eliot se aconchega em uma das pedras e dorme, ap�s alguns minutos, voc� faz o mesmo.";
                            cout << endl << " O dia amanhece, e voc�s, com a energia e mana j� respectivamente recuperados, partem novamente.";
                            cout << endl << " - Espera, eu sei onde estamos, estamos nas redondezas do castelo. - Eliot fala animado, correndo em dire��o a sa�da da clareira.";
                            cout << endl << " Voc� segue Eliot, e se depara com o castelo ao longe, caminhando para o fim da jornada. O resto da viagem � tranquila, e sem demora voc�s chegam aos port�es do castelo.";
                            cout << endl << " - Eu falarei com meu pai, sei que no contrato dizia que caso a escolta atrasasse o pagamento seria cortado pela metade.";
                            cout << endl << " - N�o precisa, o contrato era espec�fico e essa foi uma decis�o que eu tomei.";
                            cout << endl << " - Eu vivi mais experi�ncias nesses quase dois dias, do que minha vida toda dentro desse castelo. - Eliot responde, convicto.";
                            cout << endl << " - E voc� quase morreu, v�rias vezes.";
                            cout << endl << " - Sim, foi incr�vel n�o foi?";
                            cout << endl << " - Voc� � doido. - Voc� responde rindo.";
                            cout << endl << " Eliot ri, se despede e entra no castelo.";
                            cout << endl << " A miss�o foi um sucesso e voc� recebeu o pagamento completo.";

                            return 0;



            }               else {

                                cout << endl << " Visando o pagamento cheio da miss�o, voc�s partem na calada da noite e com sua mana esgotada, voc� s� tem for�as para criar uma pequena tocha, que ilumina vagamente o caminho.";
                                cout << endl << " Seus reflexos est�o lentos, e sem conseguir enxergar direito voc�s caminham lentamente, para n�o se perderem um do outro.";
                                cout << endl << " Um som de algo correndo por entre as �rvores o faz parar bruscamente, fazendo com que Eliot esbarre em voc�.";
                                cout << endl << " - Por que paramos? - Reclama Eliot, esfregando o nariz amassado.";
                                cout << endl << " - Quieto. - Voc� responde, fazendo sinal de sil�ncio para o mesmo.";
                                cout << endl << " O barulho se torna cada vez mais alto, e seja l� oque for, esta correndo em c�rculos ao redor de voc�s, quase como se estivesse brincando.";
                                cout << endl << " Voc� joga a tocha para frente, para tentar ver oque se esconde por entre as �rvores, mas oque voc�s veem � assustador, algo que at� mesmo voc�,";
                                cout << endl << " se recusa acreditar, um Licandrogo, o lend�rio ca�ador noturno, poucas pessoas realmente acreditam que ele seja real, e voc�, agora mais que nunca, sabe que sim.";
                                cout << endl << " Com o corpo de tigre, grandes chifres, garras afiadas e uma cauda com espinhos venenosos, a majestosa fera o encara friamente.";
                                cout << endl << " O Licandrogo corre na dire��o de voc�s dois, cravando suas grandes garras em seu peito e injetando toxinas de sua cauda em Eliot. ";
                                cout << endl << " O Marqu�s cai em sua frente, morto, sua vis�o fica turva e tudo se apaga";
                                cout << endl << " Voc�s morreram, a miss�o fracassou.";


                                return 0;
            }
        }




           else {
                cout << endl << " Voc� opta por seguir em frente, mas o fato de estar sem po��es martela na sua cabe�a.";
                cout << endl << " A travessia � calma, mas o tempo segue fechando.";
                cout << endl << " Faltando pouco para o fim da Grande Ponto Rinfih, as nuvens se chocam, o vento aumenta e a chuva come�a.";
                cout << endl << " As pessoas rapidamente come�am a recolher seus pertences e itens de venda, voc�s aceleram o passo, por�m, uma forte rajada de vento sopra contra voc�s e ambos os capuzes acabam caindo.";
                cout << endl << " Olhando em dire��o a voc�s, as pessoas come�am a sussurar entre s�.";
                cout << endl << " - Um mago! - Cochicha um comericante.";
                cout << endl << " - Oque este tipo de coisa faz aqui? - Algu�m esbraveja.";
                cout << endl << " - E... o Marqu�s? - Comenta outro comerciante.";
                cout << endl << " Voc� coloca o capuz novamente, Eliot faz o mesmo, acelerando o passo voc�s finalmente concluem a travessia pela ponte, deixando os murmurinhos para tr�s," << endl << " � quando voc� percebe uma suspeita movimenta��o em meio as �rvores da misteriosa Floresta Catherine, que acompanha a estrada.";
                cout << endl << " Voc� tem duas op��es:";
                cout << endl << " Op��o 1: Investigar a estranha movimenta��o.";
                cout << endl << " Op��o 2: Continuar no caminho.";
                cout << endl << " Digite sua op��o: ";
                cin >> escolha2;



        }          if (escolha2 == 1) {

                    cout << endl << " Voc� entra na mata, Eliot ainda com o capuz o segue, voc�s caminham por alguns minutos, a floresta est� inquieta," << endl << " e s� � poss�vel ouvir os sons das gotas da chuva batendo vagamente contra as folhas das �rvores.";
                    cout << endl << " Ap�s alguns minutos de caminhada, o sil�ncio � quebrado quando Eliot � bruscamente puxado para cima, gritando desesperado em seguida.";
                    cout << endl << " Voc� olha para tr�s e se depara com um Knar que espreitava por entre as �rvores. Uma esp�cie de centop�ia gigante, que se enrola em suas v�timas, perfurando os �rg�os e dilacerando impiedosamente a carne.";
                    cout << endl << " O Knar agarra o jovem com uma de suas centenas patas, o levando para o topo da �rvore.";
                    cout << endl << " Rapidamente voc� lan�a sua magia de fogo, queimando a �rvore, mas o Knar � incrivelmente veloz, se movendo habilmente por entre as �rvores.";
                    cout << endl << " O jovem Marqu�s grita desesperado por ajuda, mas n�o h� oque se possa fazer.";
                    cout << endl << " Com um golpe certeiro, o Knar perfura o peito de Eliot com suas presas.";
                    cout << endl << " O Marqu�s est� morto, a miss�o fracassou.";

                        return 0;

        }               else {

                            cout << endl << " Sem tempo para devaneios voc�s seguem pelo caminho, por�m, ainda com receio sobre a suspeita movimenta��o, voc� acha melhor manterem um passo acelerado.";
                            cout << endl << " - N�o podemos parar agora, continue me seguindo. - Voc� fala, acelerando ainda mais o passo.";
                            cout << endl << " - Porque n�o podemos? Estou exausto. - Indaga o Marqu�s, j� cansado.";
                            cout << endl << " - Acho que estamos sendo seguidos, at� n�o ter certeza, n�o podemos desacelerar.";
                            cout << endl << " Voc�s caminham por mais algum tempo, at� uma esp�cie de clareira, e se sentam embaixo de algumas �rvores com grandes galhos e folhas," << endl << " onde a chuva j� n�o os atinge t�o fortemente.";
                            cout << endl << " Voc� usa uma de suas magias para por fogo em um monte de gravetos empilhados. Eliot se senta para descansar, botando as m�os pr�ximas ao fogo.";
                            cout << endl << " Ap�s alguns minutos de descanso, a chuva antes forte, agora se resume a poucos pingos.";
                            cout << endl << " Voc� retira de sua bolsa duas ma��s e dois p�es, entregando um de cada para o marqu�s." << endl << " Eliot come ambos os alimentos e volta a se esquentar pr�ximo a fogueira que queima vivamente.";
                            cout << endl << " Pouco tempo depois, voc� sente uma estranha presen�a, vindo por entre as �rvores que os cercam." << endl << " - Levante-se. - Voc� diz bruscamente ao Marqu�s, que rapidamente se p�em de p�. Em um girar de m�os, voc� apaga o fogo.";
                            cout << endl << " - Oque aconteceu? - Pergunta o Marqu�s, preocupado.";
                            cout << endl << " - Nos encontraram, precisamos seguir.";
                            cout << endl << " Antes mesmo que pudesse reagir, voc�s se veem cercados de mercen�rios, surgindo de tr�s das �rvores.";
                            cout << endl << " Eliot se esconde detr�s de voc� e ao todo, voc� conta sete homens armados com facas e punhais.";
                            cout << endl << " - Um mago e um marqu�s, parece que procuramos prata e achamos ouro rapazes. - Comenta um dos mercen�rios, com um sorriso no rosto.";
                            cout << endl << " - Se tentar alguma gracinha n�o sobrar�o restos para contar hist�ria. - Grita outro.";
                            cout << endl << " Os homens come�am a se aproximar cada vez mais, rapidamente, prevendo o pior, voc� empurra Eliot no tronco onde antes voc�s repousavam. Usando uma poderosa magia" << endl << " voc� bate no ch�o, fazendo com que todos a sua volta voem com o impacto, Eliot segura-se no tronco, mas acaba atingido por um dos galhos da �rvore, que acaba caindo com seu poder.";
                            cout << endl << " Aproveitando os inimigos atordoados, o Marqu�s corre, ainda desnorteado, por entre as �rvores, sumindo logo em seguida.";
                            cout << endl << " Um dos homens levanta e corre em sua dire��o, e voc� deve agir rapidamente, escolhendo entre:";
                            cout << endl << " Op��o 1: Magia de ricochete: Por um curto per�odo, voc� se torna invulner�vel a ataques de armas brancas.";
                            cout << endl << " Op��o 2: Magia de fogo: Carboniza completamente o corpo dos inimigos, mas demanda tempo para canaliza��o.";
                            cout << endl << " Op��o 3: Correr atr�s de Eliot.";
                            cout << endl << " Digite sua op��o: ";
                            cin >> escolha3;


}                                if (escolha3 == 1) {

                                     cout << endl << " Voc� opta por usar a magia de ricochete em s� mesmo. Os mercen�rios tentam lhe acertar, por�m sem sucesso, pois sua pele e roupa se tornaram impenetr�veis.";
                                     cout << endl << " Ap�s uma grande luta de l�minas e magias, voc� derrota os mercen�rios, que agora mortos, est�o caidos ao seu redor, mas voc� acaba esgotado. Usando o resto da mana que lhe resta," << endl << " voc� usa uma magia de rastreamento para encontrar Eliot, que sumiu em meio a mata.";
                                     cout << endl << " Ainda ofegante, voc� se concentra, sentindo uma energia fluir por entre as �rvores. Ap�s alguns minutos de caminhada, voc� chega" << endl << " a uma esp�cie de caverna, e sente um pouco da energia de Eliot fluindo la dentro.";
                                     cout << endl << " Ao adentrar a caverna, sua mana acaba, o impossibilitando de seguir com o rastreamento. O sol est� se pondo e a lua come�ando a aparecer." << endl << " O resto da pouca luz que ilumina a caverna lhe mostra dois caminhos a seguir.";
                                     cout << endl << " Voc� tem duas op��es:";
                                     cout << endl << " Op��o 1: Tomar o caminho da esquerda.";
                                     cout << endl << " Op��o 2: Tomar o caminho da direita.";
                                     cout << endl << " Digite sua op��o: ";
                                     cin >> escolha4;


                              }       else if (escolha3 == 2) {

                                            cout << endl << " Voc� opta por usar a magia de fogo, por�m, ao come�ar a canaliza��o, um dos mercen�rios lan�a sua adaga, o acertando em cheio na panturilha";
                                            cout << endl << " fazendo voc� cair de joelhos no ch�o, outro o esfaqueia no ombro, e voc� grita de dor. Voc� tenta voltar atr�s, e lan�ar o feiti�o de ricochete em s� mesmo,";
                                            cout << endl << " por�m ja � tarde. Um dos mercen�rios o chuta no est�mago, voc� cai no ch�o, agonizando.";
                                            cout << endl << " Voc� morreu e Eliot desapareceu.";
                                            cout << endl << " A miss�o fracassou.";

                                           return 0;


}                                      else {

                                            cout << endl << " Voc� opta por tentar correr atr�s de Eliot, e ao adentrar na mata, o v� cambaleando por entre algumas �rvores.";
                                            cout << endl << " Antes que ele desmaiasse, voc� rapidamente se p�e a sua frente, fazendo com que o mesmo aterrisse em suas costas.";
                                            cout << endl << " Com o Marqu�s desacordado em sua garupa, lutar se torna imposs�vel. Voc� tenta se esconder entre alguns arbustos dos homens que o procuram,";
                                            cout << endl << " mas a floresta molhada deixa evidenciada as pegadas pelos locais passados.";
                                            cout << endl << " N�o demora at� voc�s serem encontrados, um dos homens lan�a v�rias l�minas, uma acerta seu ombro e outra sua perna. Eliot cai, ainda desacordado.";
                                            cout << endl << " Voc� tenta usar um de seus poderes, mas um dos mercen�rios o segura. - Voc� os olha furioso.";
                                            cout << endl << " - Voc� vem conosco, sua sorte � ter certo valor, porque eu adoraria terminar o servi�o aqui. - Um dos mercen�rios fala" << endl << " enquanto usa uma abra�adeira como algema em seus bra�os.";
                                            cout << endl << " - E esse aqui, sem d�vidas ser� de grande valor. - Diz um dos homens enquanto passa a m�o pelo rosto de Eliot.";
                                            cout << endl << " Voc�s foram pegos e o Marqu�s foi levado.";
                                            cout << endl << " A miss�o fracassou.";

                                                                return 0;




       }                                 if (escolha4 == 1) {

                                            cout << endl << " Voc� toma o caminho da esquerda e retira de sua sacola uma pequena pedra m�gica, que emite uma luz fraca, por�m �til.";
                                            cout << endl << " Ap�s caminhar um pouco pelo caminho da esquerda voc� se depara com um cad�ver que felizmente, n�o � de Eliot.";
                                            cout << endl << " Voc� vasculha o corpo, em busca de mantimentos e fica feliz com oque ali encontra. Um frasco de mana e um Colar de Anatema.";
                                            cout << endl << " Um colar poderoso, que exige um pouco de magia para ativa��o. O mesmo atua como um escudo para quem o usa, contanto que a pessoa que ativou o colar esteja viva.";
                                            cout << endl << " Ao beber o frasco de mana, voc� sente seu corpo ser preenchido de energia, sua mana foi restaurada.";
                                            cout << endl << " Se concentrando no rastreamento, voc� sente uma fraca energia de Eliot fluir por entre a caverna. Com sua magia recuperada, voc� energiza o Colar de Anathema, que agora brilha fortemente.";
                                            cout << endl << " Pegando uma tocha apagada ao lado do corpo, voc� a acende com seu fogo m�gico e volta a vagar pela caverna, encontrando Eliot minutos depois.";
                                            cout << endl << " Voc� o avista de longe, por�m percebe que esta n�o � uma simples caverna, e sim um ninho de Grogous.";
                                            cout << endl << " Pequenos e irritantes monstros parecidos com goblins, que andam em bando, saindo apenas a noite para ca�ar e dormindo durante todo o dia.";
                                            cout << endl << " Eles ainda est�o dormindo, voc� se mantem em sil�ncio e caminha lentamente em dire��o ao Marqu�s, que segue desacordado, por�m antes mesmo de chegar at� ele, os Grougos" << endl << " instintivamente acordam famintos, voc� passou muito tempo dentro da caverna.";
                                            cout << endl << " Voc� grita para Eliot, que acorda assustado.";
                                            cout << endl << " Os pequenos monstros que cercam Eliot est�o de p� e o mini ex�rcito de Grogous se prepara para atacar.";
                                            cout << endl << " Eliot desesperado, corre em sua dire��o, os Grogous o seguem sedentos por carne. Os monstros pulam, se lan�ando na dire��o do Marqu�s, e no momento em que pegariam Eliot," << endl << " voc� coloca o Colar de Anatema no mesmo, repelindo todos os Grogous, que, ao tentar se agarrarem no jovem, voam contra as paredes de pedra da caverna.";
                                            cout << endl << " Os monstros levantam novamente, furiosos e com fome eles correm na dire��o de voc�s dois.";
                                            cout << endl << " Voc� entra na frente de Eliot, canaliza e lan�a sua magia de fogo, carbonizando todos os Grogous que ali estavam.";
                                            cout << endl << " O Marqu�s senta no ch�o, aliviado. Voc� o acompanha, sentando exausto a seu lado.";
                                            cout << endl << " - Essa foi por pouco, muito, muito pouco. - Eliot comenta, ainda ofegante.";
                                            cout << endl << " - Voc� me deu mais trabalho do que eu imaginava. - Voc� responde, t�o ofengante quanto.";
                                            cout << endl << " Voc�s est�o cansados e est� escuro la fora agora, talvez seja melhor descansar na caverna at� amanhacer para recuperar as energias, lembrando que" << endl << " caso o Marqu�s seja entregue no dia seguinte, voc� receber� metade do valor acordado.";
                                            cout << endl << " Voc� deve escolher entre:";
                                            cout << endl << " Op��o 1: Partir agora.";
                                            cout << endl << " Op��o 2: Passar a noite na caverna.";
                                            cout << endl << " Digite sua op��o: ";
                                            cin >> escolha5;


                                    }       else {

                                                cout << endl << " Voc� opta por tomar o caminho da direita, e retira de sua sacola uma pequena pedra m�gica, que emite uma luz fraca, por�m �til.";
                                                cout << endl << " Voc� anda por um bom tempo, mas n�o encontra Eliot, e acaba optando por retornar e tomar o outro caminho. Ao chegar na entrada da caverna" << endl << " voc� percebe que o sol j� se p�s e a lua agora brilha no c�u.";
                                                cout << endl << " Pegando o outro caminho voc� finalmente encontra o jovem Marqu�s, ainda desacordado no fim da caverna, mas percebe que esta n�o � uma simples caverna, e sim um ninho de Grogous.";
                                                cout << endl << " Pequenos e irritantes monstros parecidos com goblins, que andam em bando, saindo apenas a noite para ca�ar e dormindo durante todo o dia.";
                                                cout << endl << " Antes que pudesse fazer qualquer coisa, os Grogous acordam instintivamente, voc� corre em dire��o a Eliot, mas j� � tarde.";
                                                cout << endl << " Voc� perdeu muito tempo tomando o caminho errado e os Grogou devoraram Eliot.";
                                                cout << endl << " O Marqu�s est� morto, a miss�o fracassou.";

                                                return 0;


                 }                    if (escolha5 == 1) {

                                                    cout << endl << " Visando o pagamento cheio da miss�o, voc�s partem na calada da noite e com sua mana esgotada, voc� s� tem for�as para criar uma pequena tocha, que ilumina vagamente o caminho.";
                                                    cout << endl << " Seus reflexos est�o lentos, e sem conseguir enxergar direito voc�s caminham lentamente para n�o se perderem um do outro.";
                                                    cout << endl << " Um som de algo correndo por entre as �rvores o faz parar bruscamente, fazendo com que Eliot esbarre em voc�.";
                                                    cout << endl << " - Por que paramos? - Reclama Eliot, esfregando o nariz amassado.";
                                                    cout << endl << " - Quieto. - Voc� responde, fazendo sinal de sil�ncio para o mesmo.";
                                                    cout << endl << " O barulho se torna cada vez mais alto, e seja l� oque for, esta correndo em c�rculos ao redor de voc�s, quase como se estivesse brincando.";
                                                    cout << endl << " Voc� joga a tocha para frente, para tentar ver oque se esconde por entre as �rvores, mas oque voc�s veem � assustador, algo que at� mesmo voc�,";
                                                    cout << endl << " se recusa acreditar, um Licandrogo, o lend�rio ca�ador noturno, ser cujo poucas pessoas realmente acreditam ser real, e voc� agora, sabe que sim.";
                                                    cout << endl << " Com o corpo de tigre, grandes chifres, garras afiadas e uma cauda com espinhos venenosos, a majestosa fera o encara friamente.";
                                                    cout << endl << " O Licandrogo corre na dire��o de voc�s dois, cravando suas grandes garras em seu peito e injetando toxinas de sua cauda em Eliot. ";
                                                    cout << endl << " O Marqu�s cai em sua frente, morto, sua vis�o fica turva e tudo se apaga.";
                                                    cout << endl << " Voc�s morreram, a miss�o fracassou.";

                                                    return 0;


                                        }               else {

                                                            cout << endl << " Voc� opta por esperar amanhecer. Eliot se aconchega em uma das pedras e dorme, ap�s alguns minutos, voc� faz o mesmo.";
                                                            cout << endl << " O dia amanhece, e voc�s, com a energia e mana j� respectivamente recuperados, partem novamente.";
                                                            cout << endl << " - Espera, eu sei onde estamos, estamos nas redondezas do castelo. - Eliot fala animado, correndo em dire��o a sa�da da clareira.";
                                                            cout << endl << " Voc� segue Eliot, e se depara com o castelo ao longe, caminhando para o fim da jornada. O resto da viagem � tranquila, e sem demora voc�s chegam aos port�es do castelo.";
                                                            cout << endl << " - Eu falarei com meu pai, sei que no contrato dizia que caso a escolta atrasasse o pagamento seria cortado pela metade.";
                                                            cout << endl << " - N�o precisa, o contrato era espec�fico e essa foi uma decis�o que eu tomei.";
                                                            cout << endl << " - Eu vivi mais experi�ncias nesses quase dois dias, do que minha vida toda dentro desse castelo. - Eliot responde, convicto.";
                                                            cout << endl << " - E voc� quase morreu, v�rias vezes.";
                                                            cout << endl << " - Sim, foi incr�vel n�o foi?";
                                                            cout << endl << " - Voc� � doido. - Voc� responde rindo.";
                                                            cout << endl << " Eliot ri, se despede e entra no castelo.";
                                                            cout << endl << " A miss�o foi um sucesso e voc� recebeu o pagamento completo.";

                                                            return 0;


                    }



    }

//IN�CIO DA HIST�RIA 3
    if (num == 3){
//INTRODU��O DA MISS�O
        cout<<"Ap�s escolher a miss�o para resgatar a princesa, voc� l� nas informa��es do contrato: 'Presa em Ascalack'.";
        cout<<"\nAscalack, � a ilha mais distante de todo o reino, al�m de ser uma viagem longa e rigorosa com dificuldades pelo caminho, a princesa era guardada por um antigo mago Ascalackiano (Ascalackianos eram os magos mais experientes do reino).";
        cout<<"\nTodos os magos do reino t�m um ponto fraco e esta � a �nica maneira de derrotar um mago mais experiente.";
        cout<<"\nPara descobrir o ponto fraco de um mago, basta fazer um feiti�o que tem os seguintes requisitos para ser feito:";
        cout<<"\n1-Nome do Mago\n2-Ser feito pela Bruxa Suprema";
        cout<<"\nEscolha o n�mero do requisito o qual voc� deseja usar para fazer o feiti�o:  ";
        cin>>num;
// OP��O 1 - NOME
        if(num==1){
            cout<<"\nO nome de um mago � algo secreto muito secreto.";
            cout<<"\nPor�m todos os nomes e posi��es dos habitantes do reino est�o escritos no livro do espa�o/tempo, que � guardado por Osceles";
            cout<<"\n(um veterano de batalha que possui muita for�a f�sica)";
            cout<<"\nCom isso em mente, voc� vai at� Bulfrock, o dono da Guilda, para perguntar sobre o livro.";
            cout<<"\n-Onde fica o livro do espa�o/tempo Bulfrock?";
            cout<<"\nEspantado, Bulfrock responde:";
            cout<<"\n-H� um veterano de batalha neste local, sair de l� com o livro ser� um trabalho dif�cil, mas posso lhe dar um mapa com as coordenadas para o local.";
            cout<<"\nDigite 1 se deseja usar o mapa de bulfrock e 2 se deseja trocar de miss�o:";
            cin>>num;
// 1.1 -  PEGAR O MAPA
            if (num==1){
                cout<<"\nBulfrock lhe entrega um mapa com o local e voc� parte para a jornada. ";
                cout<<"\nChegando no local, voc� v� uma gruta com uma passagem escura e muitos restos mortais ao lado. ";
                cout<<"\nAo entar na gruta, uma pedra rola e fecha a �nica passagem que a gruta tem, obrigando voc� a seguir.";
                cout<<"\nAp�s um tempo de caminhada dentro da gruta um esqueleto com 2 metros de altura e uma armadura poderosa te aborda:";
                cout<<"\n- Bem-vindo a gruta do espa�o tempo, meu nome � Osceles, sou o Guardi�o da gruta. ";
                cout<<"\n- A partir de agora voc� tem apenas duas op��es para sair daqui com o livro do espa�o tempo: Me ven�a em uma batalha ou se torne leal ao Lord Mepless. ";
                cout<<"\nDigite 1 para lutar contra Osceles, Digite 2 para se tornar leal a Mepless";
                cin>>num;
//2.1 - LUTAR CONTRA OSCELES
                if(num==1){
                    cout<<"\nOsceles ativa um feiti�o para que todos dentro da gruta percam suas habilidades m�sticas sobrando somente a for�a f�sica para o combate";
                    cout<<"\nCom tamanho poder e experi�ncia, Osceles investe apenas um grande soco e voc� cai sobre o ch�o da gruta";
                    cout<<"\nGAME OVER";
                    return 0;
                }
//2.2 - SE TORNAR LEAL
//A MEPLESS
                if(num==2){
                    cout<<"\nOsceles ent�o lhe concede acesso a uma sala onde estava o artefato";
                    cout<<"\nLogo ao adentrar a sala, o livro estava flutuando e uma luz do sol estava o iluminando";
                    cout<<"\nSem pensar muito voc� pega o livro e corre para a sa�da que j� n�o estava mais fechada";
                    cout<<"\nOsceles come�ou a dizer algo, mas voc� admirado com a facilidade que foi conseguir o livro, s� conseguia pensar na recompensa do resgate";
                    cout<<"\nAp�s sair da gruta voc� abre o livro e consulta o nome do mago askalakiano";
                    cout<<"\nfeiti�o feito e voc� tem tudo que precisa para resgatar a princesa com seguran�a";
                    cout<<"\nVoc� come�a a sua longa jornada";
                    cout<<"\nNa metade do caminho, voc� se depara com uma m�e em apuros";
                    cout<<"\n -Preciso de ajuda para encontrar o meu filho, n�o o vejo a 10 dias e estou desesperada!";
                    cout<<"\nVoc� se depara com duas op��es: ajudar a pobre m�e usando o livro da realidade para ver onde o seu filho estava ou seguir a caminhada em dire��o a miss�o";
                    cout<<"\nDigite 1 para ajudar a m�e, Digite 2 para continuar a jornada";
                    cin>>num;
// 3.1 - AJUDAR A M�E
                    if(num==1){
                        ajudar = true;
                        cout<<"\nPara ajudar a m�e, voc� consulta o livro do espa�o tempo, e encontra o garoto facilmente.";
                        cout<<"\nMuito agradecida a m�e, vai em busca de seu filho que estava em um bar no norte do reino.";
                        cout<<"\nAp�s ajudar a m�e voc� continua sua jornada.";
                    }
//3.2 - N�O AJUDAR E
//CONTINUAR JORNADA
                    if(num == 2){
                        ajudar = false;
                        cout<<"\nMuito ocupado com sua miss�o voc� decide ent�o n�o ajudar e continuar";
                    }
//SEGUINDO A JORNADA
                    cout<<"\nDias depois, voc� ent�o chega � ilha onde est� a princesa. O lugar era obscuro e o acesso a ilha s� poderia ser feito por uma ponte que estava caindo aos peda�os";
                    cout<<"\nEntrando na ilha voc� � recebido por �rvores que lhe jogam galhos envenenados e ra�zes parasitas que prendem os p�s, mas nada disso � suficiente para lhe barrar";
                    cout<<"\nDepois de derrotar as defesas do askalakiano, uma nuvem negra se aproxima e se torna o mago askalakiano";
                    cout<<"\nNada que ele pudesse fazer iria lhe afetar pois o seu ponto fraco estava em nossas m�os";
                    cout<<"\nDerrotando-o com apenas um belo ataque m�stico voc� estava livre para buscar a princesa e receber a recompensa";
// MORRE SE AJUDOU
                    if(ajudar == true){
                        cout<<"\nSaindo com a princesa em seus bra�os, uma enorme tempestade se aproxima e voc� percebe que algo de estranho estava se aproximando";
                        cout<<"\nAs ra�zes novamente come�am a prender seus p�s, mas dessa vez mais forte. Voc� ent�o solta a princesa e come�a a se livrar das ra�zes, que j� estavam nos seus joelhos";
                        cout<<"\nCom as ra�zes j� na cintura e a tempestade consumindo toda a ilha, um raio estrondoso estremece todo o local, e dele o Lord Mepless aprece e diz";
                        cout<<"\n-Voc� falhou a �nica regraque impus sobre o livro";
                        cout<<"\nUs�-lo apenas uma vez � necess�rio para que nosso mundo permane�a estabilizado, Osceles tentou lhe informar, mas voc� n�o o ouviu. E voc� agora ser� usado para reequilibrar a terra";
                        cout<<"\nEnt�o as ra�zes terminam de consumir voc� e seu corpo � puxado para baixo da terra";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
// GANHA SE N�O AJUDOU
                    if(ajudar == false){
                        cout<<"\nSaindo com a princesa em seus bra�os e um sentimento de vit�ria voc� vai em dire��o a bulfrock para receber a recompensa";
                        cout<<"\nYOU WIN";
                        return 0;
                    }
                }
            }
 //1.2 TROCAR DE MISS�O
            if(num==2){
                cout<<"\nVoc� optou por trocar de miss�o e ir atr�s da bruxa suprema";
                trocar = true;
                num=2;
            }
         }
//1 - SER FEITO PELA BRUXA SUPREMA
        if(num==2){
//FILTRAR COUT CASO O CLIENT TENHA TROCADO DE MISS�O
            if(trocar == false){
                cout<<"\nAp�s se lembrar de boatos sobre o grande poder que a bruxa suprema detinha, voc� decide ir at� ela para pedir ajuda";
            }
            cout<<"\nSem informa��es sobre ela, voc� decide perguntar a Bulfrock";
            cout<<"\nOnde posso encontrar a bruxa Bulfrock";
            cout<<"\nN�o tenho muita informa��o sobre a bruxa, por�m sei que o an�o ferreiro j� pediu a ajuda dela em uma miss�o, talvez ele possa ajud�-lo";
            cout<<"\nDigite 1 para falar com o an�o ferreiro ,2 para falar com outra pessoa: ";
            cin>>num;
//1.1 - FALAR COM O AN�O
            if(num == 1){
            cout<<"\nO an�o ferreiro morava pr�ximo ao vulc�o springfire, um lugar com temperaturas muito desagrad�veis, mesmo assim a recompensa seria muito boa e valeria a pena o desconforto";
            cout<<"\nAo se aproximar de springfire voc� j� poderia sentir o calor. E estava claro a possibilidade de um poss�vel mal-estar.";
            cout<<"\nChegando na casa do an�o, voc� estava muito suado e cansado. ";
            cout<<"\nAo entrar, o an�o estava fazendo uma armadura, e por ser rude, n�o parou o trabalho para lhe dar aten��o, quando voc� perguntou";
            cout<<"\n- Conheces a Bruxa Suprema?";
            cout<<"\n- Conhe�o, ela � uma mulher que n�o gosta muito de visitas, mas sou um amigo pr�ximo e posso ajuda-lo, por�m para tudo h� um pre�o�, respondeu o an�o.";
            cout<<"\n- Posso lhe dar uma boa recompensa�, voc� responde.";
            cout<<"\n- N�o falo de moedas, caro viajante. Estas s�o valiosas apenas em tabernas, mas nas batalhas o verdadeiro poder est� na for�a m�stica que carrega.";
            cout<<"\n- O que voc� quer ent�o? Voc� pergunta. ";
            cout<<"\n-N�s an�es estamos em guerra com os askalaquianos a muito tempo. Temos mais for�a e estamos sempre em maior n�mero, mas a for�a m�stica deles sempre nos supera. Estou construindo armaduras e armas m�sticas e preciso de uma po��o para poder finalizas.";
            cout<<"\n Se me ajudar a buscar uma das duas po��es que preciso para destruir todos os lugares onde os askalaquianos moram, poderei lhe fornecer informa��es sobre a bruxa suprema. ";
            cout<<"\nDigite 1 para ajudar o an�o, 2 para oferecer dinheiro novamente: ";
            cin>>num;
//2.1 - ACEITAR BUSCAR PO��ES
            if(num == 1){
                cout<<"\n-Me conte mais sobre as po��es. Voc� disse.";
                cout<<"\n-As duas po��es ser�o complicadas, mas com o aux�lio das ferramentas que constru� voc� conseguira.";
                cout<<"\n-A po��o do ar est� localizada no mais alto ponto do reino e a po��o do fogo est� dentro do vulc�o. Springfire. As duas po��es do reino me dar�o for�a m�stica suficiente para completa minha miss�o de acabar com os magos. ";
                cout<<"\nDigite 1 para buscar a po��o do ar 2 para buscar a po��o do fogo: ";
                cin>>num;
//3.1 - BUSCAR PO��O DO AR
                if(num==1){
                    cout<<"\n-S� irei se for para buscar a po��o do ar. Voc� responde.";
                    cout<<"\n-Certo,espere aqui e n�o mexa em nada, irei buscar o mapa e os equipamentos que voc� precisa para buscar a po��o e guard�-la com seguran�a. ";
                    cout<<"\nO an�o sai da sala e voc� fica sozinho na oficina dele.";
                    cout<<"\nDigite 1 para vasculhar a oficina do an�o 2 para apenas esperar: ";
                    cin>>num;
//4.1 - VASCULHAR A OFICINA
                    if(num==1){
                        cout<<"\nVoc� n�o tem muito tempo e deve escolher apenas 1 dos 4 lugares para procurar algo na oficina do an�o: ";
                        cout<<"\nDigite: \n1 - Para procurar nas gavetas do arm�rio\n2 - Para procurar na dispensa da oficina\n3 - procurar no barril\n4 � Procurar dentro de caixas de metal\n ";
                        cin>>num;
//5 - ESCOLHER O LUGAR PARA
//VASCULHAR

// 5.1 - VASCULHAR NA GAVETA
                        if(num == 1){
                            cout<<"\nAssim que ele fechou a porta voc� olha para as gavetas e imediatamente abre elas para ver se conseguiria achar algo que pudesse lhe ajudar.";
                            cout<<"\nAp�s abrir muitas gavetas voc� encontra uma ferramenta que o an�o usou para forjar o metal m�stico ";
                            cout<<"\nEla � muito poderosa e pode quebrar qualquer coisa ou moldar qualquer coisa";
                            cout<<"\nDigite 1 para pegar a ferramente 2 para n�o pegar: ";
                            cin>>num;
//6.1 - PEGAR FERRAMENTA
                            if(num==1){
                                ferramenta =true;
                                cout<<"\nVoc� pega a ferramente e volta para onde estava";
                            }
//6.2 - N�O PEGAR
                            if(num==2){
                                num=0;
                                cout<<"\nPor ficar com receio de pegar a ferramenta voc� volta para onde estava";
                            }
                        }
//5.2 -VASCULHAR NA DISPENSA
                        if(num == 2){
                            cout<<"\nAssim que ele fechou a porta voc� olha para a dispensa e imediatamente abre ela para ver se conseguiria achar algo que pudesse lhe ajudar ";
                            cout<<"\nDentro da dispensa s� havia comida, voc� n�o pegou nada, pois n�o precisava no momento.";
                        }
//5.3 -VASCULHAR NO BARRIL
                        if(num == 3){
                            cout<<"\nAssim que ele fechou a porta voc� olha para um barril e imediatamente abre e olha para dentro dele para ver se poderia encontrar algo para lhe ajudar ";
                            cout<<"\nNo barril, havia uma luva resfriando, semelhante a que o an�o usaria para poder manusear o poder do das po��es.";
                            cout<<"\nDigite 1 para pegar a luva 2 para n�o pegar a luva";
//6.1 - PEGAR LUVA
                            if(num == 1){
                                cout<<"\nAo estender a m�o para pegar a luva que estava no fundo do barril, voc� queima a m�o com �gua quente.";
                                cout<<"\nPara n�o se machucar mais, voc� volta para onde estava. ";
                            }
//6.2 - N�O PEGAR LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva voc� volta para onde estava";
                            }
                        }
//5.4 - VASCULHAR NA CAIXA DE METAL
                        if(num == 4){
                            cout<<"\nAssim que ele fechou a porta voc� olha para uma caixa de metal e imediatamente vai at� ela e a abre para ver se poderia encontrar algo para lhe ajudar. ";
                            cout<<"\nNa caixa haviam v�rias luvas semelhantes a que o an�o usaria para manusear o poder das po��es.";
                            cout<<"\nDigite 1 para pegar a uma das luvas 2 pra n�o pegar a luva";
                            cin>>num;
// 6.1 - PEGAR A LUVA
                            if(num==1){
                                luva = true;
                                cout<<"\nvoc� pega a luva, a coloca em sua bolsa e volta para onde estava. ";
                            }
// 6.2 - N�O PEGAR A LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva voc� volta para onde estava";
                            }
                        }
                    }
//O AN�O CHEGOU
                    cout<<"\n �Bem aqui est� o mapa com as coordenadas para voc� chegar a po��o, um escudo m�stico e uma mochila com ar para voc� conseguir voar. A mochila n�o tem muito combust�vel, ent�o n�o desperdice e seja r�pido na hora de usar. Uma boa sorte para voc� mago �x�. ";
                    cout<<"\nVoc� ent�o parte para o lugar mais alto do reino.";
                    cout<<"\nA jornada era simples, um bom caminho e sem complica��es ou criaturas m�sticas no cominho. ";
                    cout<<"\nAo chegar na montanha, voc� mal conseguia compreender o seu tamanho pois as nuvens a cobriam.";
                    cout<<"\nCom ajuda do seu escudo m�stico subir a montanha se tornou algo f�cil, porque ele se movia sozinho por causa da magia.";
                    cout<<"\nSem muito trabalho, chega no topo da montanha. Voc� podia avistar uma luz e uma passagem que parecia uma ponte. ";
                    cout<<"\nVoc� ent�o come�a a andar pela ponte com muito cuidado. Olhando pela borda da ponte dava para ver o ch�o, que estava muito distante. Um erro ali seria fatal. ";
                    cout<<"\nSe aproximando da nuvem voc� percebe que a ponte est� chegando ao fim e ter� que usar a mochila de ar.";
                    cout<<"\nCom muito cuidado voc� liga a mochila e continua at� chegar � nuvem;";
                    cout<<"\nDentro da nuvem estava a po��o, com toda sendo luz exalado a sua volta.";
                    cout<<"\nVoc� vai em dire��o a ela e quando a pega o combust�vel da mochila acaba e voc� come�a a cair em queda livre.";
                    cout<<"\nSem muita op��o a sua �nica sa�da seria usar a po��o do ar para voar.";
                    cout<<"\nEnt�o voc� abre sua mochila e encontra ";
//COME�OU A CAIR COM A LUVA
                    if(luva==true){
                        cout<<"a luva do an�o ferreiro, e rapidamente a coloca em sua m�o, injeta a po��o e come�a a voar tranquilamente em dire��o a oficina do an�o ferreiro.";
                        cout<<"\nAo perceber que j� tinha poder o suficiente para matar o askalquiano, voc� vai em dire��o � Askalack. ";
                        cout<<"\nEntrando na ilha voc� � recebido por �rvores que lhe jogam galhos envenenados e ra�zes parasitas que prendem os p�s, mas nada disso � suficiente para lhe barrar";
                        cout<<"\nDepois de derrotar as defesas do askalakiano, uma nuvem negra se aproxima e se torna o mago askalakiano ";
                        cout<<"\nAntes que ele pudesse fazer qualquer tipo de ataque voc� usa o poder m�ximo da luva para lan�ar um ataque poderoso contra o mago, jogando-o para t�o longe que ele at� saiu das terras do reino.";
                        cout<<"\nAgora voc� estava livre para resgatar a princesa e receber sua recompensa. ";
                        cout<<"\nYOU WIN";
                    }
//COME�OU A CAIR SEM A LUVA
                    if(luva==false){
                        cout<<"muitos equipamentos que voc� tinha preparado para a viagem, mas nada que pudesse te ajudar neste momento.";
                        cout<<"\nEnt�o voc� chega ao ch�o e tem uma morte tr�gica.";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
//COME�OU A CAIR COM A FERRAMENTA
                    if(ferramenta==true){
                        cout<<"a ferramenta que voc� encontrou na gaveta do an�o, que infelizmente n�o seria �til neste momento";
                        cout<<"\nEnt�o voc� chega ao ch�o e tem uma morte tr�gica.";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
                }
//3.2 - BUSCAR PO��O DO FOGO
                if(num==2){
                    cout<<"\n-S� irei se for para buscar a po��o do fogo. Voc� responde.";
                    cout<<"\n-Certo,espere aqui e n�o mexa em nada, irei buscar o mapa e os equipamentos que voc� precisa para buscar a po��o e guard�-la com seguran�a. ";
                    cout<<"\nO an�o sai da sala e voc� fica sozinho na oficina dele.";
                    cout<<"\nDigite 1 para vasculhar a oficina do an�o 2 para apenas esperar: ";
                    cin>>num;
//4.1 - VASCULHAR A OFICINA
                    if(num==1){
                        cout<<"\nVoc� n�o tem muito tempo e deve escolher apenas 1 dos 4 lugares para procurar algo na oficina do an�o: ";
                        cout<<"\nDigite: \n1 - Para procurar nas gavetas do arm�rio\n2 - Para procurar na dispensa da oficina\n3 - procurar no barril\n4 � Procurar dentro de caixas de metal\n ";
                        cin>>num;
//5 - ESCOLHER O LUGAR PARA
//VASCULHAR

// 5.1 - VASCULHAR NA GAVETA
                        if(num == 1){
                            cout<<"\nAssim que ele fechou a porta voc� olha para as gavetas e imediatamente abre elas para ver se conseguiria achar algo que pudesse lhe ajudar.";
                            cout<<"\nAp�s abrir muitas gavetas voc� encontra uma ferramenta que o an�o usou para forjar o metal m�stico ";
                            cout<<"\nEla � muito poderosa e pode quebrar qualquer coisa ou moldar qualquer coisa";
                            cout<<"\nDigite 1 para pegar a ferramente 2 para n�o pegar: ";
                            cin>>num;
//6.1 - PEGAR FERRAMENTA
                            if(num==1){
                                ferramenta = true;
                                cout<<"\nVoc� pega a ferramente e volta para onde estava";
                            }
//6.2 - N�O PEGAR
                            if(num==2){
                                num=0;
                                cout<<"\nPor ficar com receio de pegar a ferramenta voc� volta para onde estava";
                            }
                        }
//5.2 -VASCULHAR NA DISPENSA
                        if(num == 2){
                            cout<<"\nAssim que ele fechou a porta voc� olha para a dispensa e imediatamente abre ela para ver se conseguiria achar algo que pudesse lhe ajudar ";
                            cout<<"\nDentro da dispensa s� havia comida, voc� n�o pegou nada, pois n�o precisava no momento.";
                        }
//5.3 -VASCULHAR NO BARRIL
                        if(num == 3){
                            cout<<"\nAssim que ele fechou a porta voc� olha para um barril e imediatamente abre e olha para dentro dele para ver se poderia encontrar algo para lhe ajudar ";
                            cout<<"\nNo barril, havia uma luva resfriando, semelhante a que o an�o usaria para poder manusear o poder do das po��es.";
                            cout<<"\nDigite 1 para pegar a luva 2 para n�o pegar a luva";
//6.1 - PEGAR LUVA
                            if(num == 1){
                                cout<<"\nAo estender a m�o para pegar a luva que estava no fundo do barril, voc� queima a m�o com �gua quente.";
                                cout<<"\nPara n�o se machucar mais, voc� volta para onde estava. ";
                            }
//6.2 - N�O PEGAR LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva voc� volta para onde estava";
                            }
                        }
//5.4 - VASCULHAR NA CAIXA DE METAL
                        if(num == 4){
                            cout<<"\nAssim que ele fechou a porta voc� olha para uma caixa de metal e imediatamente vai at� ela e a abre para ver se poderia encontrar algo para lhe ajudar. ";
                            cout<<"\nNa caixa haviam v�rias luvas semelhantes a que o an�o usaria para manusear o poder das po��es.";
                            cout<<"\nDigite 1 para pegar a uma das luvas 2 pra n�o pegar a luva";
                            cin>>num;
// 6.1 - PEGAR A LUVA
                            if(num==1){
                                luva = true;
                                cout<<"\nvoc� pega a luva, a coloca em sua bolsa e volta para onde estava. ";
                            }
// 6.2 - N�O PEGAR A LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva voc� volta para onde estava";
                            }
                        }
                    }
//O AN�O CHEGOU
                    cout<<"\n� Bem aqui est� o mapa com as coordenadas para voc� chegar a po��o e um escudo m�stico para voc� n�o suportar o calor. ";
                    cout<<"\nVoc� ent�o parte para o vulc�o Springfire, que ficava logo atr�s da casa do an�o ferreiro. ";
                    cout<<"\nAo chegar no topo do vulc�o voc� percebe que h� um caminho que te leva direto para o centro do vulc�o. ";
                    cout<<"\nAo se aproximar do centro voc� percebe que h� uma po��o bem no meio da lava. ";
                    cout<<"\nSeu escudo m�stico permite que voc� ande sobre a lava, ent�o n�o teve muita dificuldade de chegar at� a po��o. ";
                    cout<<"\nQuando pegou a po��o o vul��o come�a a desmoronar. Pedras come�am a cair e voc� come�a a correr para o topo. ";
                    cout<<"\nCom muita velocidade est� quase conseguindo chegar a sa�da, mas uma grande pedra cai na sua frente e bloqueia a �nica sa�da, neste momento voc� olha para sua mochila e encontra  ";
                    if(ferramenta==true){
                        cout<<"a ferramenta que encontrou na gaveta do an�o ";
                        cout<<"\nSem muita dificuldade voc� a usa para abrir um caminho e est� livre para seguir at� a casa do an�o.";
                        cout<<"\nNo caminho at� a casa do an�o voc� pensa em seguir direto para a ilha, j� que a luva com a po��o seria o suficiente para matar o askalaquiano, mas a casa do an�o era bem pr�xima do vulc�o e ele poderia lhe interceptar.";
                        cout<<"\nAo chegar na oficina, voc� percebe que aparentemente ela est� vazia e come�a a entrar.  ";
                        cout<<"\nAo entrar um grande soco lhe recebe e voc� cai ao ch�o. ";
                        cout<<"\nO an�o estava enfurecido por voc� ter roubado sua luva e iria se vingar. ";
                        cout<<"\nCom uma de suas armas m�sticas ele tira sua vida e sua hist�ria acaba ali. ";
                        cout<<"\nGAME OVER";
                    }
                    if(ferramenta==false){
                        cout<<"muitos objetos que tinha preparado para a viagem mas nada que pudesse ajudar voc� neste momento";
                        cout<<"Ent�o, voc� fica preso e acaba sendo empurrado para o fundo do vulc�o pelas enormes pedras.";
                        cout<<"GAME OVER";
                    }
                    if(luva == true){
                        cout<<"a luva que encontrou na oficina do an�o, mas infelizmente ela n�o serviria de nada no momento";
                        cout<<"Ent�o, voc� fica preso e acaba sendo empurrado para o fundo do vulc�o pelas enormes pedras.";
                        cout<<"GAME OVER";
                    }
                }
            }
//2.2 - OFERECER DINHEIRO NOVAMENTE
                if(num ==2){
                    expulso=true;
                    cout<<"\n�Estou sem tempo posso lhe pagar muito bem. Voc� reafirma. ";
                    cout<<"\nO an�o que n�o tem muita paci�ncia ordenou que voc� fosse em bora imediatamente. ";
                    cout<<"\nPor n�o ter outra op��o voc� chega na taberna de bulfrock e";
                }
            }
        }
//1.1 - PERGUNTAR A OUTRA PESSOA
        if(num==2){
            if(expulso==false){
                cout<<"Por n�o confiar no an�o ferreiro, voc�";
            }
            cout<<" decide perguntar para outras pessoas. ";
            cout<<"\nVoc� passa o dia inteiro perguntando para todos no reino qualquer informa��o que possa aproveitar sobre a bruxa";
            cout<<"\nAp�s muitas perguntas e nenhuma pista sobre a bruxa, um homem se aproxima de voc�. ";
            cout<<"\n�  Ol� mago x, me chamo Meierd, sou um cientista m�stico e acho que tenho a solu��o para salvar a princesa.  ";
            cout<<"\n� Prossiga, voc� diz sem muita expectativa. ";
            cout<<"\n� Eu foquei muito tempo de meus estudos na cria��o de um rob� que acredito que possa vencer qualquer mago em uma batalha, se quiser posso lhe mostrar como funciona. ";
            cout<<"\nVoc� curioso com o rob� segue o homem at� sua oficina. ";
            cout<<"\nVendo o rob�, voc� pede para que ele de uma demonstra��o de seu funcionamento. ";
            cout<<"\nEnt�o Meierd ativa o rob� que come�a a crescer. Cada cent�metro que o rob� crescia voc� ficava mais fraco. Ap�s 20 segundos com um rob� crescendo do seu lado, voc� j� estava muito fraco e pede pra que Meierd o desligue.";
            cout<<"\nE recuperando o f�lego voc� diz: ";
            cout<<"\n� Certo, acredito que podemos vencer o mago Askalaquiano.  ";
            cout<<"\n� Perfeito, vou prepara-lo para viagem. S� h� um problema, o rob� pesa 10 toneladas e nenhum animal do reino � capaz de carrega-lo, por�m com magia podemos diminuir pela metade o peso e conseguiremos levar ele at� a ilha, mas a magia ir� custar muito de sua integridade f�sica. ";
            cout<<"\nDigite 1 para seguir com o Meierd 2 para Desistir e ir embora";
            cin>>num;
// 2.1 - SEGUIR O PLANO
            if(num = 1){
                cout<<"\n� Isso n�o ser� um problema Meierd, a viagem ser� longa, e demorada (aproximadamente 10 vezes mais do que o tempo que levaria sem o rob�), mas a recompensa ser� muito boa. ";
                cout<<"\nMeierd finaliza os preparativos para a viagem e voc�s saem";
                cout<<"\nA viagem � muito dif�cil e custa muito de sua sa�de. ";
                cout<<"\nMuito tempo depois, voc� chega � ilha onde est� a princesa. O lugar era obscuro e o acesso a ilha s� poderia ser feito por uma ponte que estava caindo aos peda�os. ";
                cout<<"\nAo entrar na ilha voc� percebe que algo estranho est� acontecendo, normalmente o mago deixa armadilhas para receber os visitantes n�o desejados, mas nada havia acontecido. ";
                cout<<"\nAp�s procurar em toda a ilha, e perceber que n�o havia mais ningu�m naquele local. Voc� diz a Meierd: ";
                cout<<"\n� Demoramos muito Meierd, algu�m j� conseguiu resgata-la.";
                cout<<"\n� Infelizmente demoramos muito. ";
                cout<<"\n� O que nos resta agora � voltar";
                cout<<"\n� Desculpe, mas n�o posso sair dessa ilha de m�os vazias. Disse Meierd, enquanto ligava o rob�. ";
                cout<<"\nEnt�o ap�s uma longa viagem o que restar� de sua sa�de � sugada por um rob�. ";
                cout<<"\nGAME OVER";
                return 0;
            }
//2.2 - DESISTIR DO PLANO
            if(num == 2){
                cout<<"\n� Desculpe Meierd, n�o poderei fazer isso, ser� muito trabalho e ainda tenho outras op��es.  ";
                cout<<"\n� � uma pena. Disse Meierd ";
                cout<<"\nAp�s se recuperar voc� se levante e come�a a ir em bora. Quando se sente fraco novamente e escuta Meierd no fundo da oficina. ";
                cout<<"\n�Sinto muito, mas infelizmente n�o posso deixar voc� sair com a informa��o da minha inven��o. ";
                cout<<"\nEnt�o o rob� de Meierd cresce at� que suas energias acabam. ";
                cout<<"\nGAME OVER";
            }
        }
    }
    return 0;
}
