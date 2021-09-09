#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, ajudar=false,ferramenta=false,luva=false,trocar=false, expulso=false,cajado_fogo_verdadeiro,escolha1, escolha2, escolha3, escolha4, escolha5;;


//INTRODUÇÃO
    cout<<"Em uma realidade medieval de feiticeiros e seres desconhecidos, você é um misterioso e poderoso mago de uma grande guilda. ";
    cout<<"\nSentado na taberna da guilda em mais um dia frio do rigoroso inverno de Freljord, sem dinheiro para sobreviver, o implacável mago vai até o mural de missões e se depara com missões de diferentes níveis.";
    cout<<"\nUma fácil que não lhe retornaria muito dinheiro, outra mediana que poderia lhe dar alguns dias de folga e uma a desafiar suas habilidades místicas, porém iria lhe recompensar pela tamanha dificuldade. ";
    cout<<"\nDigite 1 2 ou 3: ";
    cin>>num;
//1 - INÍCIO DA HISTÓRIA 1
    if (num == 1){
        cout<<endl<< "  Você fala com o líder da guilda e aceita a missão de caçar os espíritos da neve. Ele\n te orienta dizendo que a montanha guarda diversos perigos, e é difícil saber quando você\n pode correr perigo ou não. Você vai até o pé das montanhas gélidas. Se depara com dois caminhos: ";
        cout<<endl<< "  Na opção 1 tem um terreno irregular, e na opção 2 um terreno mais plano, porém ambas têm placas de perigo.";
        cout<<endl<< "\n  Digite a opção: ";
        cin>> num;
//1.1 - TERRENO IRREGULAR
        if(num==1){
            cout<<endl<<"  Você escolhe ir pelo terreno irregular. Seguindo em direção até a parte alta da montanha.";
            cout<<endl<<"  Você tem um pouco de dificuldade na subida então acaba ficando cada vez mais \n tarde, o frio da montanha não é nem um pouco aconchegante, porém quanto \n mais você demorar,quanto mais tarde, mais perigo você corre. Então você deve fazer uma difícil decisão:";
            cout<<endl<<"  A opção 1 é armar abrigo e repousar até a manhã seguinte. E a opção 2 você continuar em meio a noite.";
            cout<<endl<<"\n  Digite a opção: ";
            cin>> num;
//2.1 - ARMAR ABRIGO E REPOUSAR
            if(num==1){
                cout<<endl<<"  Você escolhe montar um abrigo e repousar até a manhã seguinte.";
                cout<<endl<<"  A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante \n próximo ao topo da montanha. Você chega próximo ao topo da montanha e \n finalmente encontra um montante de espíritos da nave. São como bolas de neves \n flutuantes, seu valor provém da baixa temperatura que emite de seu corpo. No verão \n custam fortunas para resfriar os lares. Você coleta algumas dezenas e coloca em \n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma \n avalanche vindo em sua direção. Você pode escolher entre:";
                cout<<endl<<"  A opção 1 que é correr ou a opção 2 ficar e utilizar magia de fogo para conter a neve.";
                cout<<endl<<"\n  Digite a opção: ";
                cin>> num;
//3.1 - CORRER
                if(num==1){
                    cout<<endl<<"  Você escolhe correr o mais rápido possível.";
                    cout<<endl<<"  Ao correr o mais rápido possível, o estrondo se aproximou rapidamente.\n  No meio da sua corrida você é apunhalado nas costas.";
                    cout<<endl<<"\n  Você morreu.";
                    return 0;}
//3.2 - UTILIZAR A MAGIA
                else{
                    cout<<endl<<"  Você escolhe utilizar sua magia de fogo para conte a neve.";
                    cout<<endl<<"  Você utiliza a magia de fogo para conter a neve. Você conseguiu conter \n a avalanche, em meio ao vapor criado do calor e do frio surge uma figura\n com uma ,presença inabalável. Amedrontado você tem duas opções: ";
                    cout<<endl<<"  A opção 1 é se reverenciar, pedir perdão por qualquer coisa que tenha feito\n e pedir permissão para ir embora. A opção 2 é levantar o seu cajado e atacar com sua magia poderosa.";
                    cout<<endl<<"\n  Digite a opção: ";
                    cin>> num;
//4.1 - REVERENCIAR
                    if(num==1){
                        cout<<endl<<"  Você escolhe se reverenciar, pedir perdão por qualquer coisa que tenha feito e pedir permissão para ir embora.";
                        cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, pede para soltar\n os espíritos e o permite ir embora apenas com o que é seu.\n Você desce a montanha em direção a cidade da casa da guilda.\n Você continua vivo, mas sem os espíritos para vender.";
                        cout<<endl<<"\n  Você vence por conseguir sair vivo.";
                        return 0;}
//4.2 - ATACAR
                    else{
                        cout<<endl<<"  Você escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                        cout<<endl<<"  Você ataca com uma poderosa magia de fogo, em meio as labaredas\n surgem a figura em uma velocidade sobre humana e corta sua cabeça.";
                        cout<<endl<<"\n Você morre decapitado.";
                        return 0;}
                    }
                }
//2.2 - SEGUIR VIAGEM
            else{
                cout<<endl<<"  Você escolher seguir viajem durante a noite.";
                cout<<endl<<"  Em meio a noite você ouve alguns uivos vindo em sua direção, quando avista com a \n luz do luar uma alcateia de lobos, vindo em sua direção. Você tem que rapidamente decidir: ";
                cout<<endl<<"  A opção 1 é pegar seu cajado e utilizar magia para enfrentá-los, a opção 2 é se esconder embaixo da neve.";
                cout<<endl<<"\n  Digite a opção: ";
                cin>> num;
//3.1 - ATACAR
                if(num==1){
                    cout<<endl<<"  Você escolhe utilizar seu cajado para atacar os lobos.";
                    cout<<endl<<"  Você derrota alguns lobos, mas são muito, depois do primeiro lobo\n te alcançar fica difícil lutar então você não resiste as mordidas.";
                    cout<<endl<<"\n Você foi devorado.";
                    return 0;}
//3.2 - SE ESCONDER
                else{
                    cout<<endl<<"  Você escolhe se esconder embaixo da neve.";
                    cout<<endl<<"  Você escolhe se esconder embaixo da neve. Você comeu pouco pela falta de mantimentos\n e nem se quer parou para descansar. A fraqueza o levou a um choque térmico.";
                    cout<<endl<<"\n Você morre soterrado onde se escondeu.";
                    return 0;}
                }
            }
//1.2 - TERRENO PLANO
        else{
            cout<<endl<<"  Você escolhe ir pelo terreno plano. Seguindo em direção até a parte alta da montanha.";
            cout<<endl<<"  Você segue tranquilamente em um caminho quase que esculpido pelos ventos das \n montanhas. E de enquanto caminhava encontra um pequeno vilarejo. Os morados \n os avistam de longe, porém não parecem ser muito agradáveis. Você tem apenas \n alguns mantimentos:";
            cout<<endl<<"  A opção 1 seria parar e se informar no vilarejo. A opção 2 seria seguir direto por conta da hostilidade dos moradores.";
            cout<<endl<<"\n Digite a opção: ";
            cin>> num;
//2.1 - PARA NO VILAREJO
            if (num==1){
                cout<<endl<<"  Você escolhe parar no vilarejo e se informar sobre a montanha.";
                cout<<endl<<"  Você se engana sobre o povoado do vilarejo, o recebem muito bem. Quando você \n pergunta sobre a montanha, eles dizem em meio a algumas antigas histórias que o \n espírito de um Cavaleiro muito poderoso, O Cavaleiro do Inverno, que defende os \n animais selvagens que ali habitam, e que isso as vezes até atrapalha eles para \n conseguir alimentos. Então após o líder ouvir o que você buscava ali, oferece a você \n uma arma poderosa, forjada com matérias conhecidos apenas por eles, O Cajado do Fogo Verdadeiro,\n mas você entrará em divida com eles e futuramente terá que pagar pelo cajado.";
                cout<<endl<<"  A opção 1 aceitar a oferta e a opção 2 recusar a oferta e não ter nenhuma dívida com eles.";
                cout<<endl<<"\n Digite a opção: ";
                cin>> num;
//3.1 - ACEITAR OFERTA
                if(num==1){
                    cajado_fogo_verdadeiro=true;
                    cout<<endl<<"  Você aceita a oferta e terá que pagar pelo cajado futuramente.";
                    }
// 3.2 - NÃO ACEITAR A OFERTA
                else{
                    cajado_fogo_verdadeiro=false;
                    cout<<endl<<"  Você escolhe recusar para não ter sem nenhuma divida.";
                    }
//SEGUINDO A VIAGEM
                    cout<<endl<<"  Você agradece a hospitalidade e segue sua viagem. Revigorado pelo descanso que\n conseguiu ter no vilarejo. Em instantes você chega próximo ao topo da montanha e\n finalmente encontra um montante de espíritos da nave. São como bolas de neves \n flutuantes, seu valor provém da baixa temperatura que emite de seu corpo. No verão\n custam fortunas para resfriar os lares. Você coleta algumas dezenas e coloca em\n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma\n avalanche vindo em sua direção. ";
                    cout<<endl<<"\n  Você pode escolher a opção 1 que é ficar e utilizar magia de fogo para conter a neve ou a opção 2 que é correr.";
                    cout<<endl<<"\n  Digite a opção: ";
                    cin>> num;
//4.1 - CONTER A NEVE
                    if(num==1){
                        cout<<endl<<"  Você escolhe utilizar sua magia de fogo para conter a neve.";
                        cout<<endl<<"  Você utiliza a sua magia de fogo para conter a neve. Você conseguiu conter \n a avalanche. Em meio ao vapor criado do calor e do frio surge uma figura com uma \npresença inabalável. É o Cavaleiro do Inverno que as pessoas do vilarejo falaram. \nEle está protegendo os Espíritos da Neve. Você sabe o que ele quer, mas tem duas \nopções: ";
                        cout<<endl<<"  A opção 1 é levantar o seu cajado e atacar com sua magia poderosa. A opção 2 é se reverenciar, pedir perdão por qualquer coisa que tenha feito\ne pedir permissão para ir embora.";
                        cout<<endl<<"\n Digite a opção: ";
                        cin>> num;
//5.1 - LUTAR CONTRA O CAVALEIRO
                        if(num==1){
// COM O CAJADO
                            if(cajado_fogo_verdadeiro==true){
                                cout<<endl<<"  Você escolhe levantar o seu Cajado do Fogo Verdadeiro e ataca com sua magia poderosa.";
                                cout<<endl<<"  Você ataca com a magia de Fogo Verdadeiro, o Cavaleiro não resiste\n ao poder e desaparece em meio ao vapor. Então você recolhe um pouco mais\n de espiritos da neve para pagar sua dívida e desce em direção\n ao vilarejo para assim ir para a cidade da casa da guilda. ";
                                cout<<endl<<"\n Você vence e consegue dinheiro ao vender os espíritos na casa da guilda.";
                                return 0;}
// SEM O CAJADO
                            else{
                                cout<<endl<<"  Você escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                                cout<<endl<<"  Você ataca com uma poderosa magia de fogo, em meio as labaredas surge\n o Cavaleiro em uma velocidade sobre humana e corta sua cabeça.";
                                cout<<endl<<"\n Você morre decapitado.";
                                return 0;}
                            }
// 5.2 - SE REVERENCIAR
                        else{
                        cout<<endl<<"  Você escolhe se reverenciar, pedir perdão por qualquer coisa que tenha feito e pedir permissão para ir embora.";
                        cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, você solta os espíritos e ele\n permite você para ir embora apenas com o que é seu. Você desce a montanha em\n direção a cidade da casa da guilda. Você continua vivo, mas sem os espíritos da\n neve para vender.";
                        cout<<endl<<"\n Você vence por conseguir sair vivo mas endividado com o povoado do vilarejo.";
                        return 0;}
                        }
//4.2 - CORRER
                    else{
                        cout<<endl<<"  Você escolhe correr o mais rápido possível.";
                        cout<<endl<<"  Ao correr o mais rápido possível, o estrondo se aproximou rapidamente.\n No meio da sua corrida você é apunhalado nas costas.";
                        cout<<endl<<"\n Você morreu apunhalado.";
                        return 0;}
                }
//2.2 - NÃO PARAR NO VILAREJO
            else{
                cout<<endl<<"  Você segue sua viajem sem parar no vilarejo.";
                cout<<endl<<"  Por não ter muita comida nem descansar você está um pouco cansado então parece\n que a viajem demora mais, no meio de sua caminhada você se depara com gritos de\n socorro, quando avista em meio a neve caindo uma pessoa na beira do penhasco. É\n difícil de enxerga qual a situação da pessoa, que parece estar pendurada. Você tem duas opções: ";
                cout<<endl<<"  A opção 1 é seguir sua viajem, a opção 2 é então ajudar a pessoa que está a pedindo ajuda.";
                cout<<endl<<"\n Digite a opção: ";
                cin>> num;
// 3.1 - SEGUIR VIAGEM
                if(num==1){
                    cout<<endl<<"  Você escolhe seguir sua viajem.";
                    cout<<endl<<"  Acaba ficando cada vez mais tarde, o frio no da montanha não é nem um pouco\n aconchegante, e você avista uma cadeia de nuvens que ira se tornar\n uma nevasca. Então o mago deve fazer uma difícil decisão: ";
                    cout<<endl<<"  A opção 1 é armar abrigo e repousar até a manhã seguinte. E a opção 2 é você continuar.";
                    cout<<endl<<"\n Digite a opção: ";
                    cin>> num;
// 4.2 - MONTAR ABRIGO
                    if(num==1){
                        cout<<endl<<"  Você escolhe montar um abrigo e repousar até a manhã seguinte.";
                        cout<<endl<<"  A noite passa tranquila, o sol resplandece no horizonte em uma vista estonteante\n próximo ao topo da montanha. Você chega próximo ao topo da montanha e\n finalmente encontra um montante de espíritos da nave. São como bolas de neves\n flutuantes, seu valor provém da baixa temperatura que emite de seu corpo. No verão\n custam fortunas para resfriar os lares. Você coleta algumas dezenas e coloca em\n algumas bolsas. Ouve um grande estrondo e avista mais ao topo da montanha uma\n avalanche vinda em sua direção. Você pode escolher entre:";
                        cout<<endl<<"  A opção 1 que é correr ou a opção 2 ficar e utilizar magia de fogo para conter a neve.";
                        cout<<endl<<"\n Digite a opção: ";
                        cin>> num;
// 5.1 - CORRER
                        if(num==1){
                            cout<<endl<<"  Você escolhe correr o mais rápido possível.";
                            cout<<endl<<"  Ao correr o mais rápido possível, o estrondo se aproximou rapidamente. No meio da sua corrida você é apunhalado nas costas.";
                            cout<<endl<<"\n Você morreu.";
                            return 0;}
// 5.2 - UTILIZAR MAGIA DE FOGO
                        else{
                            cout<<endl<<"  Você escolhe utilizar sua magia de fogo para conte a neve.";
                            cout<<endl<<"  Você utiliza a magia de fogo para conter a neve. Você conseguiu conter\n a avalanche, em meio ao vapor criado do calor e do frio surge\n uma figura com uma ,presença inabalável. Amedrontado você tem duas opções: ";
                            cout<<endl<<"  A opção 1 é se reverenciar, pedir perdão por qualquer coisa que tenha feito\n e pedir permissão para ir embora. A opção 2 é levantar o seu cajado e atacar com sua magia poderosa.";
                            cout<<endl<<"\n Digite a opção: ";
                            cin>> num;
// 6.1 - REVERENCIAR
                            if (num==1){
                                cout<<endl<<"  Você escolhe se reverenciar, pedir perdão por qualquer coisa que tenha feito e pedir permissão para ir embora.";
                                cout<<endl<<"  Ele aceita sua reverencia como pedido de desculpas, pede para\n soltar os espíritos e o permite ir embora apenas com o que é seu.\n Você desce a montanha em direção a cidade da casa da guilda.";
                                cout<<endl<<"\n Você vence por conseguir sair vivo mas sem espíritos da neve para vender.";
                                return 0;}
// 6.2 - LUTAR CONTRA CAVALEIRO
                            else{
                                cout<<endl<<"  Você escolhe levantar o seu cajado e atacar com sua magia poderosa.";
                                cout<<endl<<"  Você ataca com uma poderosa magia de fogo, em meio as labaredas surgem\n a figura em uma velocidade sobre humana e corta sua cabeça.";
                                cout<<endl<<"\n Você morre decapitado.";
                                return 0;}
                            }
                        }
// 4.2 - CONTINUAR VIAGEM
                    else{
                        cout<<endl<<"  Você escolhe continuar.";
                        cout<<endl<<"  Ao continuar iniciou uma forte nevasca, sem conseguir enxergar por conta dos ventos\n cortantes, você fica sem conseguir sair de onde está e o frio o consome por completo.";
                        cout<<endl<<"\n Você morre de frio.";
                        return 0;}
                    }
// 3.2 - AJUDAR A PESSOA
                else{
                    cout<<endl<<"  Você escolhe ajudar a pessoa.";
                    cout<<endl<<"  É difícil enxergar por conta da espessa neve, porém você consegue se guiar pelo grito\n da pessoa por socorro, você chega perto, e quando vê já é tarde demais. São\n Sereias das Neves. Utilizam a ideia de ser um chamariz para atrair heróis\n para sua armadilha. Ela o agarra e arranca seus membros com sua boca larga e dentes afiados. ";
                    cout<<endl<<"\n Você morreu para uma sereia das neves.";
                    return 0;}
                }
            }
    return 0;
    }


    //INÍCIO DA HISTÓRIA 2
    if (num == 2){
        cout << endl << " ---------------------------------------------------------------------------------------------   ";
    cout << endl << " Após selecionar a missão média, você fala com o líder da guilda e aceita a missão de Escoltar o Marquês Eliot de volta ao castelo do Reino de Freljord.";
    cout << endl << " Ele o orienta a ser cauteloso, visto que o Marquês de 17 anos é filho de Eratus, um renomado Lorde do reino.";
    cout << endl << " Você também deve concluir a missão em um dia, caso contrário, receberá metade do valor acordado.";
    cout << endl << " - Alguma vez falhei em alguma missão Bjork? - Você diz ao chefe da guilda. O mesmo gargalha e concorda com a cabeça.";
    //começo da missão

    cout << endl << " O dia amanhace, você arruma seus mantimentos e parte.";
    cout << endl << " A estrada é calma, e sem imprevistos ou surpresas desagradáveis, você chega ao local marcado no contrato e entrega";
    cout << endl << " uma túnica ao Marquês, que a recebe com relutância.";
    cout << endl << " - Porque eu deveria usar isso? - Pergunta o Marquês curioso.";
    cout << endl << " - A estrada de volta é incerta, seja quem formos encontrar no caminho, sabe que o valor agregado a um Marquês é alto.";
    cout << endl << " - E o valor agregado a um renomado mago? - Retruca Eliot, que ao ver você também colocando uma túnica, se cala.";
    cout << endl << " - Preocupe-se consigo e faça oque eu mandar, as coisas aqui são diferentes do que dentro de um castelo.";
    cout << endl << "  O marquês concorda com a cabeça e veste a túnica, que o cobre quase por completo.";
    cout << endl << " Vocês iniciam a viagem, o tempo está fechado, e o sol em cima de vocês reluta em aparecer.";
    cout << endl << " Durante todo o percurso o jovem lhe faz várias perguntas, das quais você desconversa.";
    cout << endl << " - Vocês são todos assim? - Pergunta Eliot, em um tom mais alto do que o usado anteriormente.";
    cout << endl << " - Assim, como? - Você responde.";
    cout << endl << " - Poucas palavras, misteriosos, frios... de certa forma. - Responde o Marquês.";
    cout << endl << " - Não somos pagos para conversar.";
    cout << endl << " - É claro que não. - Responde o jovem cabisbaixo.";
    cout << endl << " Vocês caminham por um tempo, até chegar ao ínicio da Grande Ponte Rinfih, um centro de transações e vendas, infestado de mercantes, mercenários e pessoas perigosas. Um caminho do qual você conhece bem.";
    cout << endl << " Antes mesmo de chegarem a seu início, já é possível escutar as pessoas gritando, anunciando produtos, rindo e conversando.";
    cout << endl << " - Não pare de me seguir, não converse com ninguém, e principalmente, não retire o capuz da túnica, não importa oque aconteça. - Você fala seriamente, Eliot concorda com a cabeça.";
    cout << endl << " Nesta ponte sem leis, tudo é comercializado, desde armas e escudos roubados a feitiços de afeição.";
    cout << endl << " Vocês caminham lentamente para não levantar suspeitas, com a cabeça baixa você apenas ouve as pessoas anunciando seus produtos ao seu redor e os trovões acima da sua cabeça.";
    cout << endl << " - Procurando por algum feitiço jovem meu jovem? - Anuncia uma mulher em frente a sua tenda.";
    cout << endl << " - Escolha uma espada para se proteger - Comenta outro senhor, tão magro quanto a espada que anunciará.";
    cout << endl << " - Gostaria de uma bebida senhor? - Oferece outro mercador.";
    cout << endl << " - Ignore-os. - Você comenta a Eliot, em voz baixa.";
    cout << endl << " Vocês seguem adiante pela ponte, mas você se lembra que está sem poções de mana, e talvez fosse uma boa ideia reabastecer o estoque.";
    cout << endl << " Você deve escolher entre:";
    cout << endl << " Opção 1: Parar em uma tenda de poções.";
    cout << endl << " Opção 2: Continuar a travessia.";
    cout << endl << " Digite a opção: ";
    cin >> escolha1;
        if (escolha1 == 1) {
            cout << endl << " Você segue em direção a uma mercadora que anuncia poções, e faz sinal para Evelot lhe seguir.";
            cout << endl << " - Oque gostaria meu senhor? - Pergunta a velha senhora, cega de um olho e com um estranho sorriso no rosto.";
            cout << endl << " - Uma poção, apenas.";
            cout << endl << " - E para o jovem? - Pergunta a velha, olhando em direção ao jovem Marquês.";
            cout << endl << " - A poção é tudo que buscamos.";
            cout << endl << " A velha então entra na tenda, voltando alguns instantes depois com dois frascos em mãos. Um contendo mana, um líquido azul escuro;" << endl << " e o outro, contendo um misterioso líquido vermelho-rubro.";
            cout << endl << " Pegando rapidamente as moedas que você deixou em cima da mesa como pagamento, a velha estende o braço, lhe entregando os dois frascos.";
            cout << endl << " - Apenas o frasco de mana. - Você responde friamente.";
            cout << endl << " - Vamos, não se recusa presentes de uma velha senhora. Se provará de bom uso na hora certa." << endl << " - Suas poções meu senhor. - Insiste a velha caolha, estendendo novamente o braço com os frascos.";
            cout << endl << " Você aceita, mas ao tentar pegar os frascos a velha os segura com mais força.";
            cout << endl << " - Tome cuidado meu senhor, magos não são bem vistos por aqui, ainda mais acompanhando pessoas..." << endl << "de tal classe. - Diz ela olhando para o jovem Marquês. A velha sorri e volta para dentro de sua tenda.";
            cout << endl << " Você entrega o frasco com líquido vermelho-rubro para o Marquês, que o guarda dentro de sua túnica, vocês voltam a passar pela ponte.";
            cout << endl << " - Como ela sabia sobre mim? - Sussura Eliot, incrédulo.";
            cout << endl << " - Magia escura provavelmente, a fez enchergar além do que uma simples túnica cobre. - Você responde olhando ao redor para se certificar que ninguém escutaria.";
            cout << endl << " - Mas magia escura sempre vem com um preço, nesse caso, seu olho. - Você conclui, chocando ainda mais Eliot.";
            cout << endl << " Vocês seguem andando, e já no fim da ponte o tempo se fecha, o vento aumenta e a chuva começa.";
            cout << endl << " As pessoas rapidamente começam a recolher seus pertences e itens de venda, vocês aceleram o passo, porém, uma forte rajada de vento sopra contra vocês e ambos os capuzes acabam caindo.";
            cout << endl << " Olhando em direção a vocês, as pessoas começam a sussurar entre sí.";
            cout << endl << " - Um mago! - Cochicha um comerciante.";
            cout << endl << " - Oque este tipo de coisa faz aqui? - Alguém esbraveja.";
            cout << endl << " - E... o Marquês? - Comenta outro comerciante.";
            cout << endl << " Você coloca o capuz novamente, Eliot faz o mesmo, acelerando o passo vocês finalmente concluem a travessia pela ponte, deixando os murmurinhos para trás," << endl << " é quando você percebe uma suspeita movimentação em meio as árvores da misteriosa Floresta Catherine, que acompanha a estrada.";
            cout << endl << " Você tem duas opções:";
            cout << endl << " Opção 1: Investigar a estranha movimentação.";
            cout << endl << " Opção 2: Continuar no caminho.";
            cout << endl << " Digite sua opção: ";
            cin >> escolha2;
                if (escolha2 == 1){
                    cout << endl << " Você entra na mata, Eliot ainda com o capuz o segue, vocês caminham por alguns minutos, a floresta está inquieta," << endl << " e só é possível ouvir os sons das gotas da chuva batendo vagamente contra as folhas das árvores.";
                    cout << endl << " Após alguns minutos de caminhada, o silêncio é quebrado quando Eliot é bruscamente puxado para cima, gritando desesperado em seguida.";
                    cout << endl << " Você olha para trás e se depara com um Knar que espreitava por entre as árvores. Uma espécie de centopéia gigante, que se enrola em suas vítimas, perfurando os órgãos e dilacerando impiedosamente a carne.";
                    cout << endl << " O Knar agarra o jovem com uma de suas centenas patas, o levando para o topo da árvore.";
                    cout << endl << " Rapidamente você lança sua magia de fogo, queimando a árvore, mas o Knar é incrivelmente veloz, se movendo habilmente por entre as árvores.";
                    cout << endl << " O jovem Marquês grita desesperado por ajuda, mas não há oque se possa fazer.";
                    cout << endl << " Com um golpe certeiro, o Knar perfura o peito de Eliot com suas presas.";
                    cout << endl << " O Marquês está morto, a missão fracassou.";
                return 0;

                }

                if (escolha2 == 2) {
                    cout << endl << " Sem tempo para devaneios vocês seguem pelo caminho, porém, ainda com receio sobre a suspeita movimentação, você acha melhor manterem um passo acelerado.";
                    cout << endl << " - Não podemos parar agora, continue me seguindo. - Você fala, acelerando ainda mais o passo.";
                    cout << endl << " - Porque não podemos? Estou exausto. - Indaga o Marquês, já cansado.";
                    cout << endl << " - Acho que estamos sendo seguidos, até não ter certeza, não podemos desacelerar.";
                    cout << endl << " Vocês caminham por mais algum tempo, até uma espécie de clareira, e se sentam embaixo de algumas árvores com grandes galhos e folhas," << endl << " onde a chuva já não os atinge tão fortemente.";
                    cout << endl << " Você usa uma de suas magias para por fogo em um monte de gravetos empilhados. Eliot se senta para descansar, botando as mãos próximas ao fogo.";
                    cout << endl << " Após alguns minutos de descanso, a chuva antes forte, agora se resume a poucos pingos.";
                    cout << endl << " Você retira de sua bolsa duas maçãs e dois pães, entregando um de cada para o Marquês." << endl << " Eliot come ambos os alimentos e volta a se esquentar próximo a fogueira que queima vivamente.";
                    cout << endl << " Pouco tempo depois, você sente uma estranha presença, vindo por entre as árvores que os cercam." << endl << " - Levante-se. - Você diz bruscamente ao Marquês, que rapidamente se põem de pé. Em um girar de mãos, você apaga o fogo.";
                    cout << endl << " - Oque aconteceu? - Pergunta o jovem, preocupado.";
                    cout << endl << " - Nos encontraram, precisamos seguir.";
                    cout << endl << " Antes mesmo que pudesse reagir, vocês se veem cercados de mercenários, surgindo por detrás das árvores.";
                    cout << endl << " Eliot se esconde atrás de você e ao todo você conta sete homens armados com facas e punhais.";
                    cout << endl << " - Um mago e um marquês, parece que procuramos prata e achamos ouro rapazes. - Comenta um dos mercenários, com um sorriso no rosto.";
                    cout << endl << " - Se tentar alguma gracinha não sobrarão restos para contar história. - Grita outro.";
                    cout << endl << " Os homens começam a se aproximar cada vez mais, rapidamente, prevendo o pior, você empurra Eliot no tronco onde antes vocês repousavam. Usando uma poderosa magia," << endl << " você bate no chão, fazendo com que todos a sua volta voem com o impacto, Eliot segura-se no tronco, mas acaba atingido por um dos galhos da árvore, que acaba caindo com seu poder.";
                    cout << endl << " Aproveitando os inimigos atordoados, o Marquês corre, ainda desnorteado, por entre as árvores, sumindo logo em seguida.";
                    cout << endl << " Um dos homens levanta e corre em sua direção, e você deve agir rapidamente, escolhendo entre:";
                    cout << endl << " Opção 1: Magia de ricochete: Por um curto período, você se torna invulnerável a ataques de armas brancas.";
                    cout << endl << " Opção 2: Magia de fogo: Carboniza completamente o corpo dos inimigos, mas demanda tempo para canalização.";
                    cout << endl << " Opção 3: Correr atrás de Eliot.";
                    cout << endl << " Digite a opção: ";
                    cin >> escolha3;
                }
                if (escolha3 == 1) {

                            cout << endl << " Você opta por usar a magia de ricochete em sí mesmo. Os mercenários tentam lhe acertar, porém sem sucesso pois sua pele e roupa se tornaram impenetráveis.";
                            cout << endl << " Após uma grande luta de lâminas e magias, você derrota os mercenários, que agora mortos, estão caidos ao seu redor, porém, você acaba esgotado. Usando o resto da mana que lhe resta," << endl << " você usa uma magia de rastreamento para encontrar Eliot, que sumiu em meio a mata.";
                            cout << endl << " Ainda ofegante, você se concentra, sentindo uma energia fluir por entre as árvores. Após alguns minutos de caminhada, você chega" << endl << " a uma espécie de caverna, e sente um pouco da energia de Eliot fluindo la dentro.";
                            cout << endl << " Ao adentrar a caverna, sua mana acaba, o impossibilitando de seguir com o rastreamento, felizmente você tem um frasco" << endl << " de mana, que comprou na tenda da velha caolha. Você bebe o frasco, e sente sua mana recuperar.";
                            cout << endl << " Acendendo um pedaço de madeira com fogo mágico, você volta ao rastreamento. Após alguns minutos andando dentro da caverna, você se depara com Eliot caído, mas sente algo estranho." << endl << " As chamas começam a iluminar cada vez mais o ambiente, e você percebe que aquela não é uma simples caverna, e sim um ninho de Grogous.";
                            cout << endl << " Pequenos e irritantes monstros que andam em bando, saindo apenas a noite para caçar e dormindo durante todo o dia.";
                            cout << endl << " Você se mantem em silêncio, e caminha lentamente em direção ao Marquês, que segue desmaiado.";
                            cout << endl << " Ao se aproximar, Eliot acorda bruscamente, e com um grito assustado, acorda o mini exército de Grogous que ali dormia.";
                            cout << endl << " Os pequenos monstros acordam enfurecidos, e sem mana para outro grande poder, você se ve encurralado.";
                            cout << endl << " Eliot levanta rapidamente, e um líquido espesso avermelhado escorre por entre sua túnica, mas não é sangue, e sim o frasco antes entregue pela velha das poções.";
                            cout << endl << " Os Grogous farejam o ar, e após sentirem o cheiro do desconhecido líquido, começam a gritar, quase como se sentissem dor," << endl << " correndo em seguida em direção a saída da caverna, que antes clara, agora é iluminada apenas pela lua.";
                            cout << endl << " - Oq-Oque aconteceu? Eu achei que a gente já era. - Comenta Eliot, ainda espantado.";
                            cout << endl << " - Isso era Espanta Besta, uma poção difícil de ser encontrada, e mais ainda de ser produzida. E se não fosse por ela, sim, a gente já era.";
                            cout << endl << " Você está exaustado e está escuro la fora agora, talvez seja melhor descansar na caverna até amanhacer para recuperar as energias, lembrando que" << endl << " caso o Marquês seja entregue no dia seguinte, você receberá metade do valor acordado.";
                            cout << endl << " Oque você deseja fazer?";
                            cout << endl << " Opção 1: Passar a noite na caverna.";
                            cout << endl << " Opção 2: Partir agora.";
                            cout << endl << " Digite a opção: ";
                            cin >> escolha4;

                    }            else if (escolha3 == 2) {

                                    cout << endl << " Você opta por usar a magia de fogo, porém, ao começar a canalização, um dos mercenários lança sua adaga, o acertando em cheio na panturilha.";
                                    cout << endl << " Fazendo você cair de joelhos no chão, outro o esfaqueia no ombro, e você grita de dor. Você tenta voltar atrás, e lançar o feitiço de ricochete em sí mesmo,";
                                    cout << endl << " porém ja é tarde. Um dos mercenários o chuta no estômago, você cai no chão, agonizando.";
                                    cout << endl << " Você morreu e Eliot desapareceu.";
                                    cout << endl << " A missão fracassou.";

                                    return 0;

                    }            else  {

                                    cout << endl << " Você opta por tentar correr atrás de Eliot, e ao adentrar na mata, o vê cambaleando por entre algumas árvores.";
                                    cout << endl << " Antes que ele desmaiasse, você rapidamente se põe a sua frente, fazendo com que o mesmo aterrisse em suas costas.";
                                    cout << endl << " Com o Marquês desacordado em sua garupa, lutar se torna impossível. Você tenta se esconder entre alguns arbustos dos homens que o procuram,";
                                    cout << endl << " mas a floresta molhada deixa evidenciada as pegadas pelos locais passados.";
                                    cout << endl << " Não demora até vocês serem encontrados, um dos homens lança várias lâminas, uma acerta seu ombro e outra sua perna. Eliot cai, ainda desacordado.";
                                    cout << endl << " Você tenta usar um de seus poderes, mas um dos mercenários o segura. - Você os olha furioso.";
                                    cout << endl << " - Você vem conosco, sua sorte é ter certo valor, porque eu adoraria terminar o serviço aqui. - Um dos mercenários fala" << endl << " enquanto usa uma abraçadeira como algema em seus braços.";
                                    cout << endl << " - E esse aqui, sem dúvidas será de grande valor. - Diz um dos homens enquanto passa a mão pelo rosto de Eliot.";
                                    cout << endl << " Vocês foram pegos e o Marquês foi levado.";
                                    cout << endl << " A missão fracassou.";

                                    return 0;

           }             if (escolha4 == 1) {

                            cout << endl << " Você opta por esperar amanhecer. Eliot se aconchega em uma das pedras e dorme, após alguns minutos, você faz o mesmo.";
                            cout << endl << " O dia amanhece, e vocês, com a energia e mana já respectivamente recuperados, partem novamente.";
                            cout << endl << " - Espera, eu sei onde estamos, estamos nas redondezas do castelo. - Eliot fala animado, correndo em direção a saída da clareira.";
                            cout << endl << " Você segue Eliot, e se depara com o castelo ao longe, caminhando para o fim da jornada. O resto da viagem é tranquila, e sem demora vocês chegam aos portões do castelo.";
                            cout << endl << " - Eu falarei com meu pai, sei que no contrato dizia que caso a escolta atrasasse o pagamento seria cortado pela metade.";
                            cout << endl << " - Não precisa, o contrato era específico e essa foi uma decisão que eu tomei.";
                            cout << endl << " - Eu vivi mais experiências nesses quase dois dias, do que minha vida toda dentro desse castelo. - Eliot responde, convicto.";
                            cout << endl << " - E você quase morreu, várias vezes.";
                            cout << endl << " - Sim, foi incrível não foi?";
                            cout << endl << " - Você é doido. - Você responde rindo.";
                            cout << endl << " Eliot ri, se despede e entra no castelo.";
                            cout << endl << " A missão foi um sucesso e você recebeu o pagamento completo.";

                            return 0;



            }               else {

                                cout << endl << " Visando o pagamento cheio da missão, vocês partem na calada da noite e com sua mana esgotada, você só tem forças para criar uma pequena tocha, que ilumina vagamente o caminho.";
                                cout << endl << " Seus reflexos estão lentos, e sem conseguir enxergar direito vocês caminham lentamente, para não se perderem um do outro.";
                                cout << endl << " Um som de algo correndo por entre as árvores o faz parar bruscamente, fazendo com que Eliot esbarre em você.";
                                cout << endl << " - Por que paramos? - Reclama Eliot, esfregando o nariz amassado.";
                                cout << endl << " - Quieto. - Você responde, fazendo sinal de silêncio para o mesmo.";
                                cout << endl << " O barulho se torna cada vez mais alto, e seja lá oque for, esta correndo em círculos ao redor de vocês, quase como se estivesse brincando.";
                                cout << endl << " Você joga a tocha para frente, para tentar ver oque se esconde por entre as árvores, mas oque vocês veem é assustador, algo que até mesmo você,";
                                cout << endl << " se recusa acreditar, um Licandrogo, o lendário caçador noturno, poucas pessoas realmente acreditam que ele seja real, e você, agora mais que nunca, sabe que sim.";
                                cout << endl << " Com o corpo de tigre, grandes chifres, garras afiadas e uma cauda com espinhos venenosos, a majestosa fera o encara friamente.";
                                cout << endl << " O Licandrogo corre na direção de vocês dois, cravando suas grandes garras em seu peito e injetando toxinas de sua cauda em Eliot. ";
                                cout << endl << " O Marquês cai em sua frente, morto, sua visão fica turva e tudo se apaga";
                                cout << endl << " Vocês morreram, a missão fracassou.";


                                return 0;
            }
        }




           else {
                cout << endl << " Você opta por seguir em frente, mas o fato de estar sem poções martela na sua cabeça.";
                cout << endl << " A travessia é calma, mas o tempo segue fechando.";
                cout << endl << " Faltando pouco para o fim da Grande Ponto Rinfih, as nuvens se chocam, o vento aumenta e a chuva começa.";
                cout << endl << " As pessoas rapidamente começam a recolher seus pertences e itens de venda, vocês aceleram o passo, porém, uma forte rajada de vento sopra contra vocês e ambos os capuzes acabam caindo.";
                cout << endl << " Olhando em direção a vocês, as pessoas começam a sussurar entre sí.";
                cout << endl << " - Um mago! - Cochicha um comericante.";
                cout << endl << " - Oque este tipo de coisa faz aqui? - Alguém esbraveja.";
                cout << endl << " - E... o Marquês? - Comenta outro comerciante.";
                cout << endl << " Você coloca o capuz novamente, Eliot faz o mesmo, acelerando o passo vocês finalmente concluem a travessia pela ponte, deixando os murmurinhos para trás," << endl << " é quando você percebe uma suspeita movimentação em meio as árvores da misteriosa Floresta Catherine, que acompanha a estrada.";
                cout << endl << " Você tem duas opções:";
                cout << endl << " Opção 1: Investigar a estranha movimentação.";
                cout << endl << " Opção 2: Continuar no caminho.";
                cout << endl << " Digite sua opção: ";
                cin >> escolha2;



        }          if (escolha2 == 1) {

                    cout << endl << " Você entra na mata, Eliot ainda com o capuz o segue, vocês caminham por alguns minutos, a floresta está inquieta," << endl << " e só é possível ouvir os sons das gotas da chuva batendo vagamente contra as folhas das árvores.";
                    cout << endl << " Após alguns minutos de caminhada, o silêncio é quebrado quando Eliot é bruscamente puxado para cima, gritando desesperado em seguida.";
                    cout << endl << " Você olha para trás e se depara com um Knar que espreitava por entre as árvores. Uma espécie de centopéia gigante, que se enrola em suas vítimas, perfurando os órgãos e dilacerando impiedosamente a carne.";
                    cout << endl << " O Knar agarra o jovem com uma de suas centenas patas, o levando para o topo da árvore.";
                    cout << endl << " Rapidamente você lança sua magia de fogo, queimando a árvore, mas o Knar é incrivelmente veloz, se movendo habilmente por entre as árvores.";
                    cout << endl << " O jovem Marquês grita desesperado por ajuda, mas não há oque se possa fazer.";
                    cout << endl << " Com um golpe certeiro, o Knar perfura o peito de Eliot com suas presas.";
                    cout << endl << " O Marquês está morto, a missão fracassou.";

                        return 0;

        }               else {

                            cout << endl << " Sem tempo para devaneios vocês seguem pelo caminho, porém, ainda com receio sobre a suspeita movimentação, você acha melhor manterem um passo acelerado.";
                            cout << endl << " - Não podemos parar agora, continue me seguindo. - Você fala, acelerando ainda mais o passo.";
                            cout << endl << " - Porque não podemos? Estou exausto. - Indaga o Marquês, já cansado.";
                            cout << endl << " - Acho que estamos sendo seguidos, até não ter certeza, não podemos desacelerar.";
                            cout << endl << " Vocês caminham por mais algum tempo, até uma espécie de clareira, e se sentam embaixo de algumas árvores com grandes galhos e folhas," << endl << " onde a chuva já não os atinge tão fortemente.";
                            cout << endl << " Você usa uma de suas magias para por fogo em um monte de gravetos empilhados. Eliot se senta para descansar, botando as mãos próximas ao fogo.";
                            cout << endl << " Após alguns minutos de descanso, a chuva antes forte, agora se resume a poucos pingos.";
                            cout << endl << " Você retira de sua bolsa duas maçãs e dois pães, entregando um de cada para o marquês." << endl << " Eliot come ambos os alimentos e volta a se esquentar próximo a fogueira que queima vivamente.";
                            cout << endl << " Pouco tempo depois, você sente uma estranha presença, vindo por entre as árvores que os cercam." << endl << " - Levante-se. - Você diz bruscamente ao Marquês, que rapidamente se põem de pé. Em um girar de mãos, você apaga o fogo.";
                            cout << endl << " - Oque aconteceu? - Pergunta o Marquês, preocupado.";
                            cout << endl << " - Nos encontraram, precisamos seguir.";
                            cout << endl << " Antes mesmo que pudesse reagir, vocês se veem cercados de mercenários, surgindo de trás das árvores.";
                            cout << endl << " Eliot se esconde detrás de você e ao todo, você conta sete homens armados com facas e punhais.";
                            cout << endl << " - Um mago e um marquês, parece que procuramos prata e achamos ouro rapazes. - Comenta um dos mercenários, com um sorriso no rosto.";
                            cout << endl << " - Se tentar alguma gracinha não sobrarão restos para contar história. - Grita outro.";
                            cout << endl << " Os homens começam a se aproximar cada vez mais, rapidamente, prevendo o pior, você empurra Eliot no tronco onde antes vocês repousavam. Usando uma poderosa magia" << endl << " você bate no chão, fazendo com que todos a sua volta voem com o impacto, Eliot segura-se no tronco, mas acaba atingido por um dos galhos da árvore, que acaba caindo com seu poder.";
                            cout << endl << " Aproveitando os inimigos atordoados, o Marquês corre, ainda desnorteado, por entre as árvores, sumindo logo em seguida.";
                            cout << endl << " Um dos homens levanta e corre em sua direção, e você deve agir rapidamente, escolhendo entre:";
                            cout << endl << " Opção 1: Magia de ricochete: Por um curto período, você se torna invulnerável a ataques de armas brancas.";
                            cout << endl << " Opção 2: Magia de fogo: Carboniza completamente o corpo dos inimigos, mas demanda tempo para canalização.";
                            cout << endl << " Opção 3: Correr atrás de Eliot.";
                            cout << endl << " Digite sua opção: ";
                            cin >> escolha3;


}                                if (escolha3 == 1) {

                                     cout << endl << " Você opta por usar a magia de ricochete em sí mesmo. Os mercenários tentam lhe acertar, porém sem sucesso, pois sua pele e roupa se tornaram impenetráveis.";
                                     cout << endl << " Após uma grande luta de lâminas e magias, você derrota os mercenários, que agora mortos, estão caidos ao seu redor, mas você acaba esgotado. Usando o resto da mana que lhe resta," << endl << " você usa uma magia de rastreamento para encontrar Eliot, que sumiu em meio a mata.";
                                     cout << endl << " Ainda ofegante, você se concentra, sentindo uma energia fluir por entre as árvores. Após alguns minutos de caminhada, você chega" << endl << " a uma espécie de caverna, e sente um pouco da energia de Eliot fluindo la dentro.";
                                     cout << endl << " Ao adentrar a caverna, sua mana acaba, o impossibilitando de seguir com o rastreamento. O sol está se pondo e a lua começando a aparecer." << endl << " O resto da pouca luz que ilumina a caverna lhe mostra dois caminhos a seguir.";
                                     cout << endl << " Você tem duas opções:";
                                     cout << endl << " Opção 1: Tomar o caminho da esquerda.";
                                     cout << endl << " Opção 2: Tomar o caminho da direita.";
                                     cout << endl << " Digite sua opção: ";
                                     cin >> escolha4;


                              }       else if (escolha3 == 2) {

                                            cout << endl << " Você opta por usar a magia de fogo, porém, ao começar a canalização, um dos mercenários lança sua adaga, o acertando em cheio na panturilha";
                                            cout << endl << " fazendo você cair de joelhos no chão, outro o esfaqueia no ombro, e você grita de dor. Você tenta voltar atrás, e lançar o feitiço de ricochete em sí mesmo,";
                                            cout << endl << " porém ja é tarde. Um dos mercenários o chuta no estômago, você cai no chão, agonizando.";
                                            cout << endl << " Você morreu e Eliot desapareceu.";
                                            cout << endl << " A missão fracassou.";

                                           return 0;


}                                      else {

                                            cout << endl << " Você opta por tentar correr atrás de Eliot, e ao adentrar na mata, o vê cambaleando por entre algumas árvores.";
                                            cout << endl << " Antes que ele desmaiasse, você rapidamente se põe a sua frente, fazendo com que o mesmo aterrisse em suas costas.";
                                            cout << endl << " Com o Marquês desacordado em sua garupa, lutar se torna impossível. Você tenta se esconder entre alguns arbustos dos homens que o procuram,";
                                            cout << endl << " mas a floresta molhada deixa evidenciada as pegadas pelos locais passados.";
                                            cout << endl << " Não demora até vocês serem encontrados, um dos homens lança várias lâminas, uma acerta seu ombro e outra sua perna. Eliot cai, ainda desacordado.";
                                            cout << endl << " Você tenta usar um de seus poderes, mas um dos mercenários o segura. - Você os olha furioso.";
                                            cout << endl << " - Você vem conosco, sua sorte é ter certo valor, porque eu adoraria terminar o serviço aqui. - Um dos mercenários fala" << endl << " enquanto usa uma abraçadeira como algema em seus braços.";
                                            cout << endl << " - E esse aqui, sem dúvidas será de grande valor. - Diz um dos homens enquanto passa a mão pelo rosto de Eliot.";
                                            cout << endl << " Vocês foram pegos e o Marquês foi levado.";
                                            cout << endl << " A missão fracassou.";

                                                                return 0;




       }                                 if (escolha4 == 1) {

                                            cout << endl << " Você toma o caminho da esquerda e retira de sua sacola uma pequena pedra mágica, que emite uma luz fraca, porém útil.";
                                            cout << endl << " Após caminhar um pouco pelo caminho da esquerda você se depara com um cadáver que felizmente, não é de Eliot.";
                                            cout << endl << " Você vasculha o corpo, em busca de mantimentos e fica feliz com oque ali encontra. Um frasco de mana e um Colar de Anatema.";
                                            cout << endl << " Um colar poderoso, que exige um pouco de magia para ativação. O mesmo atua como um escudo para quem o usa, contanto que a pessoa que ativou o colar esteja viva.";
                                            cout << endl << " Ao beber o frasco de mana, você sente seu corpo ser preenchido de energia, sua mana foi restaurada.";
                                            cout << endl << " Se concentrando no rastreamento, você sente uma fraca energia de Eliot fluir por entre a caverna. Com sua magia recuperada, você energiza o Colar de Anathema, que agora brilha fortemente.";
                                            cout << endl << " Pegando uma tocha apagada ao lado do corpo, você a acende com seu fogo mágico e volta a vagar pela caverna, encontrando Eliot minutos depois.";
                                            cout << endl << " Você o avista de longe, porém percebe que esta não é uma simples caverna, e sim um ninho de Grogous.";
                                            cout << endl << " Pequenos e irritantes monstros parecidos com goblins, que andam em bando, saindo apenas a noite para caçar e dormindo durante todo o dia.";
                                            cout << endl << " Eles ainda estão dormindo, você se mantem em silêncio e caminha lentamente em direção ao Marquês, que segue desacordado, porém antes mesmo de chegar até ele, os Grougos" << endl << " instintivamente acordam famintos, você passou muito tempo dentro da caverna.";
                                            cout << endl << " Você grita para Eliot, que acorda assustado.";
                                            cout << endl << " Os pequenos monstros que cercam Eliot estão de pé e o mini exército de Grogous se prepara para atacar.";
                                            cout << endl << " Eliot desesperado, corre em sua direção, os Grogous o seguem sedentos por carne. Os monstros pulam, se lançando na direção do Marquês, e no momento em que pegariam Eliot," << endl << " você coloca o Colar de Anatema no mesmo, repelindo todos os Grogous, que, ao tentar se agarrarem no jovem, voam contra as paredes de pedra da caverna.";
                                            cout << endl << " Os monstros levantam novamente, furiosos e com fome eles correm na direção de vocês dois.";
                                            cout << endl << " Você entra na frente de Eliot, canaliza e lança sua magia de fogo, carbonizando todos os Grogous que ali estavam.";
                                            cout << endl << " O Marquês senta no chão, aliviado. Você o acompanha, sentando exausto a seu lado.";
                                            cout << endl << " - Essa foi por pouco, muito, muito pouco. - Eliot comenta, ainda ofegante.";
                                            cout << endl << " - Você me deu mais trabalho do que eu imaginava. - Você responde, tão ofengante quanto.";
                                            cout << endl << " Vocês estão cansados e está escuro la fora agora, talvez seja melhor descansar na caverna até amanhacer para recuperar as energias, lembrando que" << endl << " caso o Marquês seja entregue no dia seguinte, você receberá metade do valor acordado.";
                                            cout << endl << " Você deve escolher entre:";
                                            cout << endl << " Opção 1: Partir agora.";
                                            cout << endl << " Opção 2: Passar a noite na caverna.";
                                            cout << endl << " Digite sua opção: ";
                                            cin >> escolha5;


                                    }       else {

                                                cout << endl << " Você opta por tomar o caminho da direita, e retira de sua sacola uma pequena pedra mágica, que emite uma luz fraca, porém útil.";
                                                cout << endl << " Você anda por um bom tempo, mas não encontra Eliot, e acaba optando por retornar e tomar o outro caminho. Ao chegar na entrada da caverna" << endl << " você percebe que o sol já se pôs e a lua agora brilha no céu.";
                                                cout << endl << " Pegando o outro caminho você finalmente encontra o jovem Marquês, ainda desacordado no fim da caverna, mas percebe que esta não é uma simples caverna, e sim um ninho de Grogous.";
                                                cout << endl << " Pequenos e irritantes monstros parecidos com goblins, que andam em bando, saindo apenas a noite para caçar e dormindo durante todo o dia.";
                                                cout << endl << " Antes que pudesse fazer qualquer coisa, os Grogous acordam instintivamente, você corre em direção a Eliot, mas já é tarde.";
                                                cout << endl << " Você perdeu muito tempo tomando o caminho errado e os Grogou devoraram Eliot.";
                                                cout << endl << " O Marquês está morto, a missão fracassou.";

                                                return 0;


                 }                    if (escolha5 == 1) {

                                                    cout << endl << " Visando o pagamento cheio da missão, vocês partem na calada da noite e com sua mana esgotada, você só tem forças para criar uma pequena tocha, que ilumina vagamente o caminho.";
                                                    cout << endl << " Seus reflexos estão lentos, e sem conseguir enxergar direito vocês caminham lentamente para não se perderem um do outro.";
                                                    cout << endl << " Um som de algo correndo por entre as árvores o faz parar bruscamente, fazendo com que Eliot esbarre em você.";
                                                    cout << endl << " - Por que paramos? - Reclama Eliot, esfregando o nariz amassado.";
                                                    cout << endl << " - Quieto. - Você responde, fazendo sinal de silêncio para o mesmo.";
                                                    cout << endl << " O barulho se torna cada vez mais alto, e seja lá oque for, esta correndo em círculos ao redor de vocês, quase como se estivesse brincando.";
                                                    cout << endl << " Você joga a tocha para frente, para tentar ver oque se esconde por entre as árvores, mas oque vocês veem é assustador, algo que até mesmo você,";
                                                    cout << endl << " se recusa acreditar, um Licandrogo, o lendário caçador noturno, ser cujo poucas pessoas realmente acreditam ser real, e você agora, sabe que sim.";
                                                    cout << endl << " Com o corpo de tigre, grandes chifres, garras afiadas e uma cauda com espinhos venenosos, a majestosa fera o encara friamente.";
                                                    cout << endl << " O Licandrogo corre na direção de vocês dois, cravando suas grandes garras em seu peito e injetando toxinas de sua cauda em Eliot. ";
                                                    cout << endl << " O Marquês cai em sua frente, morto, sua visão fica turva e tudo se apaga.";
                                                    cout << endl << " Vocês morreram, a missão fracassou.";

                                                    return 0;


                                        }               else {

                                                            cout << endl << " Você opta por esperar amanhecer. Eliot se aconchega em uma das pedras e dorme, após alguns minutos, você faz o mesmo.";
                                                            cout << endl << " O dia amanhece, e vocês, com a energia e mana já respectivamente recuperados, partem novamente.";
                                                            cout << endl << " - Espera, eu sei onde estamos, estamos nas redondezas do castelo. - Eliot fala animado, correndo em direção a saída da clareira.";
                                                            cout << endl << " Você segue Eliot, e se depara com o castelo ao longe, caminhando para o fim da jornada. O resto da viagem é tranquila, e sem demora vocês chegam aos portões do castelo.";
                                                            cout << endl << " - Eu falarei com meu pai, sei que no contrato dizia que caso a escolta atrasasse o pagamento seria cortado pela metade.";
                                                            cout << endl << " - Não precisa, o contrato era específico e essa foi uma decisão que eu tomei.";
                                                            cout << endl << " - Eu vivi mais experiências nesses quase dois dias, do que minha vida toda dentro desse castelo. - Eliot responde, convicto.";
                                                            cout << endl << " - E você quase morreu, várias vezes.";
                                                            cout << endl << " - Sim, foi incrível não foi?";
                                                            cout << endl << " - Você é doido. - Você responde rindo.";
                                                            cout << endl << " Eliot ri, se despede e entra no castelo.";
                                                            cout << endl << " A missão foi um sucesso e você recebeu o pagamento completo.";

                                                            return 0;


                    }



    }

//INÍCIO DA HISTÓRIA 3
    if (num == 3){
//INTRODUÇÃO DA MISSÃO
        cout<<"Após escolher a missão para resgatar a princesa, você lê nas informações do contrato: 'Presa em Ascalack'.";
        cout<<"\nAscalack, é a ilha mais distante de todo o reino, além de ser uma viagem longa e rigorosa com dificuldades pelo caminho, a princesa era guardada por um antigo mago Ascalackiano (Ascalackianos eram os magos mais experientes do reino).";
        cout<<"\nTodos os magos do reino têm um ponto fraco e esta é a única maneira de derrotar um mago mais experiente.";
        cout<<"\nPara descobrir o ponto fraco de um mago, basta fazer um feitiço que tem os seguintes requisitos para ser feito:";
        cout<<"\n1-Nome do Mago\n2-Ser feito pela Bruxa Suprema";
        cout<<"\nEscolha o número do requisito o qual você deseja usar para fazer o feitiço:  ";
        cin>>num;
// OPÇÃO 1 - NOME
        if(num==1){
            cout<<"\nO nome de um mago é algo secreto muito secreto.";
            cout<<"\nPorém todos os nomes e posições dos habitantes do reino estão escritos no livro do espaço/tempo, que é guardado por Osceles";
            cout<<"\n(um veterano de batalha que possui muita força física)";
            cout<<"\nCom isso em mente, você vai até Bulfrock, o dono da Guilda, para perguntar sobre o livro.";
            cout<<"\n-Onde fica o livro do espaço/tempo Bulfrock?";
            cout<<"\nEspantado, Bulfrock responde:";
            cout<<"\n-Há um veterano de batalha neste local, sair de lá com o livro será um trabalho difícil, mas posso lhe dar um mapa com as coordenadas para o local.";
            cout<<"\nDigite 1 se deseja usar o mapa de bulfrock e 2 se deseja trocar de missão:";
            cin>>num;
// 1.1 -  PEGAR O MAPA
            if (num==1){
                cout<<"\nBulfrock lhe entrega um mapa com o local e você parte para a jornada. ";
                cout<<"\nChegando no local, você vê uma gruta com uma passagem escura e muitos restos mortais ao lado. ";
                cout<<"\nAo entar na gruta, uma pedra rola e fecha a única passagem que a gruta tem, obrigando você a seguir.";
                cout<<"\nApós um tempo de caminhada dentro da gruta um esqueleto com 2 metros de altura e uma armadura poderosa te aborda:";
                cout<<"\n- Bem-vindo a gruta do espaço tempo, meu nome é Osceles, sou o Guardião da gruta. ";
                cout<<"\n- A partir de agora você tem apenas duas opções para sair daqui com o livro do espaço tempo: Me vença em uma batalha ou se torne leal ao Lord Mepless. ";
                cout<<"\nDigite 1 para lutar contra Osceles, Digite 2 para se tornar leal a Mepless";
                cin>>num;
//2.1 - LUTAR CONTRA OSCELES
                if(num==1){
                    cout<<"\nOsceles ativa um feitiço para que todos dentro da gruta percam suas habilidades místicas sobrando somente a força física para o combate";
                    cout<<"\nCom tamanho poder e experiência, Osceles investe apenas um grande soco e você cai sobre o chão da gruta";
                    cout<<"\nGAME OVER";
                    return 0;
                }
//2.2 - SE TORNAR LEAL
//A MEPLESS
                if(num==2){
                    cout<<"\nOsceles então lhe concede acesso a uma sala onde estava o artefato";
                    cout<<"\nLogo ao adentrar a sala, o livro estava flutuando e uma luz do sol estava o iluminando";
                    cout<<"\nSem pensar muito você pega o livro e corre para a saída que já não estava mais fechada";
                    cout<<"\nOsceles começou a dizer algo, mas você admirado com a facilidade que foi conseguir o livro, só conseguia pensar na recompensa do resgate";
                    cout<<"\nApós sair da gruta você abre o livro e consulta o nome do mago askalakiano";
                    cout<<"\nfeitiço feito e você tem tudo que precisa para resgatar a princesa com segurança";
                    cout<<"\nVocê começa a sua longa jornada";
                    cout<<"\nNa metade do caminho, você se depara com uma mãe em apuros";
                    cout<<"\n -Preciso de ajuda para encontrar o meu filho, não o vejo a 10 dias e estou desesperada!";
                    cout<<"\nVocê se depara com duas opções: ajudar a pobre mãe usando o livro da realidade para ver onde o seu filho estava ou seguir a caminhada em direção a missão";
                    cout<<"\nDigite 1 para ajudar a mãe, Digite 2 para continuar a jornada";
                    cin>>num;
// 3.1 - AJUDAR A MÃE
                    if(num==1){
                        ajudar = true;
                        cout<<"\nPara ajudar a mãe, você consulta o livro do espaço tempo, e encontra o garoto facilmente.";
                        cout<<"\nMuito agradecida a mãe, vai em busca de seu filho que estava em um bar no norte do reino.";
                        cout<<"\nApós ajudar a mãe você continua sua jornada.";
                    }
//3.2 - NÃO AJUDAR E
//CONTINUAR JORNADA
                    if(num == 2){
                        ajudar = false;
                        cout<<"\nMuito ocupado com sua missão você decide então não ajudar e continuar";
                    }
//SEGUINDO A JORNADA
                    cout<<"\nDias depois, você então chega à ilha onde está a princesa. O lugar era obscuro e o acesso a ilha só poderia ser feito por uma ponte que estava caindo aos pedaços";
                    cout<<"\nEntrando na ilha você é recebido por árvores que lhe jogam galhos envenenados e raízes parasitas que prendem os pés, mas nada disso é suficiente para lhe barrar";
                    cout<<"\nDepois de derrotar as defesas do askalakiano, uma nuvem negra se aproxima e se torna o mago askalakiano";
                    cout<<"\nNada que ele pudesse fazer iria lhe afetar pois o seu ponto fraco estava em nossas mãos";
                    cout<<"\nDerrotando-o com apenas um belo ataque místico você estava livre para buscar a princesa e receber a recompensa";
// MORRE SE AJUDOU
                    if(ajudar == true){
                        cout<<"\nSaindo com a princesa em seus braços, uma enorme tempestade se aproxima e você percebe que algo de estranho estava se aproximando";
                        cout<<"\nAs raízes novamente começam a prender seus pés, mas dessa vez mais forte. Você então solta a princesa e começa a se livrar das raízes, que já estavam nos seus joelhos";
                        cout<<"\nCom as raízes já na cintura e a tempestade consumindo toda a ilha, um raio estrondoso estremece todo o local, e dele o Lord Mepless aprece e diz";
                        cout<<"\n-Você falhou a única regraque impus sobre o livro";
                        cout<<"\nUsá-lo apenas uma vez é necessário para que nosso mundo permaneça estabilizado, Osceles tentou lhe informar, mas você não o ouviu. E você agora será usado para reequilibrar a terra";
                        cout<<"\nEntão as raízes terminam de consumir você e seu corpo é puxado para baixo da terra";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
// GANHA SE NÃO AJUDOU
                    if(ajudar == false){
                        cout<<"\nSaindo com a princesa em seus braços e um sentimento de vitória você vai em direção a bulfrock para receber a recompensa";
                        cout<<"\nYOU WIN";
                        return 0;
                    }
                }
            }
 //1.2 TROCAR DE MISSÃO
            if(num==2){
                cout<<"\nVocê optou por trocar de missão e ir atrás da bruxa suprema";
                trocar = true;
                num=2;
            }
         }
//1 - SER FEITO PELA BRUXA SUPREMA
        if(num==2){
//FILTRAR COUT CASO O CLIENT TENHA TROCADO DE MISSÃO
            if(trocar == false){
                cout<<"\nApós se lembrar de boatos sobre o grande poder que a bruxa suprema detinha, você decide ir até ela para pedir ajuda";
            }
            cout<<"\nSem informações sobre ela, você decide perguntar a Bulfrock";
            cout<<"\nOnde posso encontrar a bruxa Bulfrock";
            cout<<"\nNão tenho muita informação sobre a bruxa, porém sei que o anão ferreiro já pediu a ajuda dela em uma missão, talvez ele possa ajudá-lo";
            cout<<"\nDigite 1 para falar com o anão ferreiro ,2 para falar com outra pessoa: ";
            cin>>num;
//1.1 - FALAR COM O ANÃO
            if(num == 1){
            cout<<"\nO anão ferreiro morava próximo ao vulcão springfire, um lugar com temperaturas muito desagradáveis, mesmo assim a recompensa seria muito boa e valeria a pena o desconforto";
            cout<<"\nAo se aproximar de springfire você já poderia sentir o calor. E estava claro a possibilidade de um possível mal-estar.";
            cout<<"\nChegando na casa do anão, você estava muito suado e cansado. ";
            cout<<"\nAo entrar, o anão estava fazendo uma armadura, e por ser rude, não parou o trabalho para lhe dar atenção, quando você perguntou";
            cout<<"\n- Conheces a Bruxa Suprema?";
            cout<<"\n- Conheço, ela é uma mulher que não gosta muito de visitas, mas sou um amigo próximo e posso ajuda-lo, porém para tudo há um preço, respondeu o anão.";
            cout<<"\n- Posso lhe dar uma boa recompensa, você responde.";
            cout<<"\n- Não falo de moedas, caro viajante. Estas são valiosas apenas em tabernas, mas nas batalhas o verdadeiro poder está na força mística que carrega.";
            cout<<"\n- O que você quer então? Você pergunta. ";
            cout<<"\n-Nós anões estamos em guerra com os askalaquianos a muito tempo. Temos mais força e estamos sempre em maior número, mas a força mística deles sempre nos supera. Estou construindo armaduras e armas místicas e preciso de uma poção para poder finalizas.";
            cout<<"\n Se me ajudar a buscar uma das duas poções que preciso para destruir todos os lugares onde os askalaquianos moram, poderei lhe fornecer informações sobre a bruxa suprema. ";
            cout<<"\nDigite 1 para ajudar o anão, 2 para oferecer dinheiro novamente: ";
            cin>>num;
//2.1 - ACEITAR BUSCAR POÇÕES
            if(num == 1){
                cout<<"\n-Me conte mais sobre as poções. Você disse.";
                cout<<"\n-As duas poções serão complicadas, mas com o auxílio das ferramentas que construí você conseguira.";
                cout<<"\n-A poção do ar está localizada no mais alto ponto do reino e a poção do fogo está dentro do vulcão. Springfire. As duas poções do reino me darão força mística suficiente para completa minha missão de acabar com os magos. ";
                cout<<"\nDigite 1 para buscar a poção do ar 2 para buscar a poção do fogo: ";
                cin>>num;
//3.1 - BUSCAR POÇÃO DO AR
                if(num==1){
                    cout<<"\n-Só irei se for para buscar a poção do ar. Você responde.";
                    cout<<"\n-Certo,espere aqui e não mexa em nada, irei buscar o mapa e os equipamentos que você precisa para buscar a poção e guardá-la com segurança. ";
                    cout<<"\nO anão sai da sala e você fica sozinho na oficina dele.";
                    cout<<"\nDigite 1 para vasculhar a oficina do anão 2 para apenas esperar: ";
                    cin>>num;
//4.1 - VASCULHAR A OFICINA
                    if(num==1){
                        cout<<"\nVocê não tem muito tempo e deve escolher apenas 1 dos 4 lugares para procurar algo na oficina do anão: ";
                        cout<<"\nDigite: \n1 - Para procurar nas gavetas do armário\n2 - Para procurar na dispensa da oficina\n3 - procurar no barril\n4  Procurar dentro de caixas de metal\n ";
                        cin>>num;
//5 - ESCOLHER O LUGAR PARA
//VASCULHAR

// 5.1 - VASCULHAR NA GAVETA
                        if(num == 1){
                            cout<<"\nAssim que ele fechou a porta você olha para as gavetas e imediatamente abre elas para ver se conseguiria achar algo que pudesse lhe ajudar.";
                            cout<<"\nApós abrir muitas gavetas você encontra uma ferramenta que o anão usou para forjar o metal místico ";
                            cout<<"\nEla é muito poderosa e pode quebrar qualquer coisa ou moldar qualquer coisa";
                            cout<<"\nDigite 1 para pegar a ferramente 2 para não pegar: ";
                            cin>>num;
//6.1 - PEGAR FERRAMENTA
                            if(num==1){
                                ferramenta =true;
                                cout<<"\nVocê pega a ferramente e volta para onde estava";
                            }
//6.2 - NÃO PEGAR
                            if(num==2){
                                num=0;
                                cout<<"\nPor ficar com receio de pegar a ferramenta você volta para onde estava";
                            }
                        }
//5.2 -VASCULHAR NA DISPENSA
                        if(num == 2){
                            cout<<"\nAssim que ele fechou a porta você olha para a dispensa e imediatamente abre ela para ver se conseguiria achar algo que pudesse lhe ajudar ";
                            cout<<"\nDentro da dispensa só havia comida, você não pegou nada, pois não precisava no momento.";
                        }
//5.3 -VASCULHAR NO BARRIL
                        if(num == 3){
                            cout<<"\nAssim que ele fechou a porta você olha para um barril e imediatamente abre e olha para dentro dele para ver se poderia encontrar algo para lhe ajudar ";
                            cout<<"\nNo barril, havia uma luva resfriando, semelhante a que o anão usaria para poder manusear o poder do das poções.";
                            cout<<"\nDigite 1 para pegar a luva 2 para não pegar a luva";
//6.1 - PEGAR LUVA
                            if(num == 1){
                                cout<<"\nAo estender a mão para pegar a luva que estava no fundo do barril, você queima a mão com água quente.";
                                cout<<"\nPara não se machucar mais, você volta para onde estava. ";
                            }
//6.2 - NÃO PEGAR LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva você volta para onde estava";
                            }
                        }
//5.4 - VASCULHAR NA CAIXA DE METAL
                        if(num == 4){
                            cout<<"\nAssim que ele fechou a porta você olha para uma caixa de metal e imediatamente vai até ela e a abre para ver se poderia encontrar algo para lhe ajudar. ";
                            cout<<"\nNa caixa haviam várias luvas semelhantes a que o anão usaria para manusear o poder das poções.";
                            cout<<"\nDigite 1 para pegar a uma das luvas 2 pra não pegar a luva";
                            cin>>num;
// 6.1 - PEGAR A LUVA
                            if(num==1){
                                luva = true;
                                cout<<"\nvocê pega a luva, a coloca em sua bolsa e volta para onde estava. ";
                            }
// 6.2 - NÃO PEGAR A LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva você volta para onde estava";
                            }
                        }
                    }
//O ANÃO CHEGOU
                    cout<<"\n Bem aqui está o mapa com as coordenadas para você chegar a poção, um escudo místico e uma mochila com ar para você conseguir voar. A mochila não tem muito combustível, então não desperdice e seja rápido na hora de usar. Uma boa sorte para você mago x. ";
                    cout<<"\nVocê então parte para o lugar mais alto do reino.";
                    cout<<"\nA jornada era simples, um bom caminho e sem complicações ou criaturas místicas no cominho. ";
                    cout<<"\nAo chegar na montanha, você mal conseguia compreender o seu tamanho pois as nuvens a cobriam.";
                    cout<<"\nCom ajuda do seu escudo místico subir a montanha se tornou algo fácil, porque ele se movia sozinho por causa da magia.";
                    cout<<"\nSem muito trabalho, chega no topo da montanha. Você podia avistar uma luz e uma passagem que parecia uma ponte. ";
                    cout<<"\nVocê então começa a andar pela ponte com muito cuidado. Olhando pela borda da ponte dava para ver o chão, que estava muito distante. Um erro ali seria fatal. ";
                    cout<<"\nSe aproximando da nuvem você percebe que a ponte está chegando ao fim e terá que usar a mochila de ar.";
                    cout<<"\nCom muito cuidado você liga a mochila e continua até chegar à nuvem;";
                    cout<<"\nDentro da nuvem estava a poção, com toda sendo luz exalado a sua volta.";
                    cout<<"\nVocê vai em direção a ela e quando a pega o combustível da mochila acaba e você começa a cair em queda livre.";
                    cout<<"\nSem muita opção a sua única saída seria usar a poção do ar para voar.";
                    cout<<"\nEntão você abre sua mochila e encontra ";
//COMEÇOU A CAIR COM A LUVA
                    if(luva==true){
                        cout<<"a luva do anão ferreiro, e rapidamente a coloca em sua mão, injeta a poção e começa a voar tranquilamente em direção a oficina do anão ferreiro.";
                        cout<<"\nAo perceber que já tinha poder o suficiente para matar o askalquiano, você vai em direção à Askalack. ";
                        cout<<"\nEntrando na ilha você é recebido por árvores que lhe jogam galhos envenenados e raízes parasitas que prendem os pés, mas nada disso é suficiente para lhe barrar";
                        cout<<"\nDepois de derrotar as defesas do askalakiano, uma nuvem negra se aproxima e se torna o mago askalakiano ";
                        cout<<"\nAntes que ele pudesse fazer qualquer tipo de ataque você usa o poder máximo da luva para lançar um ataque poderoso contra o mago, jogando-o para tão longe que ele até saiu das terras do reino.";
                        cout<<"\nAgora você estava livre para resgatar a princesa e receber sua recompensa. ";
                        cout<<"\nYOU WIN";
                    }
//COMEÇOU A CAIR SEM A LUVA
                    if(luva==false){
                        cout<<"muitos equipamentos que você tinha preparado para a viagem, mas nada que pudesse te ajudar neste momento.";
                        cout<<"\nEntão você chega ao chão e tem uma morte trágica.";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
//COMEÇOU A CAIR COM A FERRAMENTA
                    if(ferramenta==true){
                        cout<<"a ferramenta que você encontrou na gaveta do anão, que infelizmente não seria útil neste momento";
                        cout<<"\nEntão você chega ao chão e tem uma morte trágica.";
                        cout<<"\nGAME OVER";
                        return 0;
                    }
                }
//3.2 - BUSCAR POÇÃO DO FOGO
                if(num==2){
                    cout<<"\n-Só irei se for para buscar a poção do fogo. Você responde.";
                    cout<<"\n-Certo,espere aqui e não mexa em nada, irei buscar o mapa e os equipamentos que você precisa para buscar a poção e guardá-la com segurança. ";
                    cout<<"\nO anão sai da sala e você fica sozinho na oficina dele.";
                    cout<<"\nDigite 1 para vasculhar a oficina do anão 2 para apenas esperar: ";
                    cin>>num;
//4.1 - VASCULHAR A OFICINA
                    if(num==1){
                        cout<<"\nVocê não tem muito tempo e deve escolher apenas 1 dos 4 lugares para procurar algo na oficina do anão: ";
                        cout<<"\nDigite: \n1 - Para procurar nas gavetas do armário\n2 - Para procurar na dispensa da oficina\n3 - procurar no barril\n4  Procurar dentro de caixas de metal\n ";
                        cin>>num;
//5 - ESCOLHER O LUGAR PARA
//VASCULHAR

// 5.1 - VASCULHAR NA GAVETA
                        if(num == 1){
                            cout<<"\nAssim que ele fechou a porta você olha para as gavetas e imediatamente abre elas para ver se conseguiria achar algo que pudesse lhe ajudar.";
                            cout<<"\nApós abrir muitas gavetas você encontra uma ferramenta que o anão usou para forjar o metal místico ";
                            cout<<"\nEla é muito poderosa e pode quebrar qualquer coisa ou moldar qualquer coisa";
                            cout<<"\nDigite 1 para pegar a ferramente 2 para não pegar: ";
                            cin>>num;
//6.1 - PEGAR FERRAMENTA
                            if(num==1){
                                ferramenta = true;
                                cout<<"\nVocê pega a ferramente e volta para onde estava";
                            }
//6.2 - NÃO PEGAR
                            if(num==2){
                                num=0;
                                cout<<"\nPor ficar com receio de pegar a ferramenta você volta para onde estava";
                            }
                        }
//5.2 -VASCULHAR NA DISPENSA
                        if(num == 2){
                            cout<<"\nAssim que ele fechou a porta você olha para a dispensa e imediatamente abre ela para ver se conseguiria achar algo que pudesse lhe ajudar ";
                            cout<<"\nDentro da dispensa só havia comida, você não pegou nada, pois não precisava no momento.";
                        }
//5.3 -VASCULHAR NO BARRIL
                        if(num == 3){
                            cout<<"\nAssim que ele fechou a porta você olha para um barril e imediatamente abre e olha para dentro dele para ver se poderia encontrar algo para lhe ajudar ";
                            cout<<"\nNo barril, havia uma luva resfriando, semelhante a que o anão usaria para poder manusear o poder do das poções.";
                            cout<<"\nDigite 1 para pegar a luva 2 para não pegar a luva";
//6.1 - PEGAR LUVA
                            if(num == 1){
                                cout<<"\nAo estender a mão para pegar a luva que estava no fundo do barril, você queima a mão com água quente.";
                                cout<<"\nPara não se machucar mais, você volta para onde estava. ";
                            }
//6.2 - NÃO PEGAR LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva você volta para onde estava";
                            }
                        }
//5.4 - VASCULHAR NA CAIXA DE METAL
                        if(num == 4){
                            cout<<"\nAssim que ele fechou a porta você olha para uma caixa de metal e imediatamente vai até ela e a abre para ver se poderia encontrar algo para lhe ajudar. ";
                            cout<<"\nNa caixa haviam várias luvas semelhantes a que o anão usaria para manusear o poder das poções.";
                            cout<<"\nDigite 1 para pegar a uma das luvas 2 pra não pegar a luva";
                            cin>>num;
// 6.1 - PEGAR A LUVA
                            if(num==1){
                                luva = true;
                                cout<<"\nvocê pega a luva, a coloca em sua bolsa e volta para onde estava. ";
                            }
// 6.2 - NÃO PEGAR A LUVA
                            if(num == 2){
                                cout<<"\nPor ficar com receio de pegar a luva você volta para onde estava";
                            }
                        }
                    }
//O ANÃO CHEGOU
                    cout<<"\n Bem aqui está o mapa com as coordenadas para você chegar a poção e um escudo místico para você não suportar o calor. ";
                    cout<<"\nVocê então parte para o vulcão Springfire, que ficava logo atrás da casa do anão ferreiro. ";
                    cout<<"\nAo chegar no topo do vulcão você percebe que há um caminho que te leva direto para o centro do vulcão. ";
                    cout<<"\nAo se aproximar do centro você percebe que há uma poção bem no meio da lava. ";
                    cout<<"\nSeu escudo místico permite que você ande sobre a lava, então não teve muita dificuldade de chegar até a poção. ";
                    cout<<"\nQuando pegou a poção o vulção começa a desmoronar. Pedras começam a cair e você começa a correr para o topo. ";
                    cout<<"\nCom muita velocidade está quase conseguindo chegar a saída, mas uma grande pedra cai na sua frente e bloqueia a única saída, neste momento você olha para sua mochila e encontra  ";
                    if(ferramenta==true){
                        cout<<"a ferramenta que encontrou na gaveta do anão ";
                        cout<<"\nSem muita dificuldade você a usa para abrir um caminho e está livre para seguir até a casa do anão.";
                        cout<<"\nNo caminho até a casa do anão você pensa em seguir direto para a ilha, já que a luva com a poção seria o suficiente para matar o askalaquiano, mas a casa do anão era bem próxima do vulcão e ele poderia lhe interceptar.";
                        cout<<"\nAo chegar na oficina, você percebe que aparentemente ela está vazia e começa a entrar.  ";
                        cout<<"\nAo entrar um grande soco lhe recebe e você cai ao chão. ";
                        cout<<"\nO anão estava enfurecido por você ter roubado sua luva e iria se vingar. ";
                        cout<<"\nCom uma de suas armas místicas ele tira sua vida e sua história acaba ali. ";
                        cout<<"\nGAME OVER";
                    }
                    if(ferramenta==false){
                        cout<<"muitos objetos que tinha preparado para a viagem mas nada que pudesse ajudar você neste momento";
                        cout<<"Então, você fica preso e acaba sendo empurrado para o fundo do vulcão pelas enormes pedras.";
                        cout<<"GAME OVER";
                    }
                    if(luva == true){
                        cout<<"a luva que encontrou na oficina do anão, mas infelizmente ela não serviria de nada no momento";
                        cout<<"Então, você fica preso e acaba sendo empurrado para o fundo do vulcão pelas enormes pedras.";
                        cout<<"GAME OVER";
                    }
                }
            }
//2.2 - OFERECER DINHEIRO NOVAMENTE
                if(num ==2){
                    expulso=true;
                    cout<<"\nEstou sem tempo posso lhe pagar muito bem. Você reafirma. ";
                    cout<<"\nO anão que não tem muita paciência ordenou que você fosse em bora imediatamente. ";
                    cout<<"\nPor não ter outra opção você chega na taberna de bulfrock e";
                }
            }
        }
//1.1 - PERGUNTAR A OUTRA PESSOA
        if(num==2){
            if(expulso==false){
                cout<<"Por não confiar no anão ferreiro, você";
            }
            cout<<" decide perguntar para outras pessoas. ";
            cout<<"\nVocê passa o dia inteiro perguntando para todos no reino qualquer informação que possa aproveitar sobre a bruxa";
            cout<<"\nApós muitas perguntas e nenhuma pista sobre a bruxa, um homem se aproxima de você. ";
            cout<<"\n  Olá mago x, me chamo Meierd, sou um cientista místico e acho que tenho a solução para salvar a princesa.  ";
            cout<<"\n Prossiga, você diz sem muita expectativa. ";
            cout<<"\n Eu foquei muito tempo de meus estudos na criação de um robô que acredito que possa vencer qualquer mago em uma batalha, se quiser posso lhe mostrar como funciona. ";
            cout<<"\nVocê curioso com o robô segue o homem até sua oficina. ";
            cout<<"\nVendo o robô, você pede para que ele de uma demonstração de seu funcionamento. ";
            cout<<"\nEntão Meierd ativa o robô que começa a crescer. Cada centímetro que o robô crescia você ficava mais fraco. Após 20 segundos com um robô crescendo do seu lado, você já estava muito fraco e pede pra que Meierd o desligue.";
            cout<<"\nE recuperando o fôlego você diz: ";
            cout<<"\n Certo, acredito que podemos vencer o mago Askalaquiano.  ";
            cout<<"\n Perfeito, vou prepara-lo para viagem. Só há um problema, o robô pesa 10 toneladas e nenhum animal do reino é capaz de carrega-lo, porém com magia podemos diminuir pela metade o peso e conseguiremos levar ele até a ilha, mas a magia irá custar muito de sua integridade física. ";
            cout<<"\nDigite 1 para seguir com o Meierd 2 para Desistir e ir embora";
            cin>>num;
// 2.1 - SEGUIR O PLANO
            if(num = 1){
                cout<<"\n Isso não será um problema Meierd, a viagem será longa, e demorada (aproximadamente 10 vezes mais do que o tempo que levaria sem o robô), mas a recompensa será muito boa. ";
                cout<<"\nMeierd finaliza os preparativos para a viagem e vocês saem";
                cout<<"\nA viagem é muito difícil e custa muito de sua saúde. ";
                cout<<"\nMuito tempo depois, você chega à ilha onde está a princesa. O lugar era obscuro e o acesso a ilha só poderia ser feito por uma ponte que estava caindo aos pedaços. ";
                cout<<"\nAo entrar na ilha você percebe que algo estranho está acontecendo, normalmente o mago deixa armadilhas para receber os visitantes não desejados, mas nada havia acontecido. ";
                cout<<"\nApós procurar em toda a ilha, e perceber que não havia mais ninguém naquele local. Você diz a Meierd: ";
                cout<<"\n Demoramos muito Meierd, alguém já conseguiu resgata-la.";
                cout<<"\n Infelizmente demoramos muito. ";
                cout<<"\n O que nos resta agora é voltar";
                cout<<"\n Desculpe, mas não posso sair dessa ilha de mãos vazias. Disse Meierd, enquanto ligava o robô. ";
                cout<<"\nEntão após uma longa viagem o que restará de sua saúde é sugada por um robô. ";
                cout<<"\nGAME OVER";
                return 0;
            }
//2.2 - DESISTIR DO PLANO
            if(num == 2){
                cout<<"\n Desculpe Meierd, não poderei fazer isso, será muito trabalho e ainda tenho outras opções.  ";
                cout<<"\n É uma pena. Disse Meierd ";
                cout<<"\nApós se recuperar você se levante e começa a ir em bora. Quando se sente fraco novamente e escuta Meierd no fundo da oficina. ";
                cout<<"\nSinto muito, mas infelizmente não posso deixar você sair com a informação da minha invenção. ";
                cout<<"\nEntão o robô de Meierd cresce até que suas energias acabam. ";
                cout<<"\nGAME OVER";
            }
        }
    }
    return 0;
}
