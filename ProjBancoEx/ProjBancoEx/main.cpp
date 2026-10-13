#include <iostream>
#include <string>
#include "Conta.cpp"

//Primeiramente, lembre-se que para entender o programa principal, você primeiro precisa fazer as classes, então antes de ver esse código, veja a classe.
//Certo, tendo em mente que você já deve ter dado uma olhada na Classe que utilizamos, vamos começar.
//include "Conta.cpp"... por que aquilo está ali? Simples, para incluir a classe que acabamos de criar. Sem inclui-la, ela é, com todas as palavras e em todos os sentidos, inútil para esse programa, então lembre-se de incluir sua classe no programa.

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//A partir daqui que o programa real começa. Lembre-se que é possível fazer vários programas em um arquivo só, mas a questão é que só existe um Main e ele TEM que ser o principal.
int main(int argc, char** argv) {
	string Nome, Cpf, Cont;
	double ope;
	int cont=0;
	
	//Criando o objeto. Observe que existe um "()" logo após a classe, e ele não está ali para nada. Ele serve para métodos construtores, é usado para dar as informações que o método construtor foi criado para receber, basicamente criando o objeto com algo já pré-feito
	Conta *cont1 = new Conta();
	
	//Aqui só serve para perguntar coisas para o usuário. cout para perguntar, cin para receber a resposta, usando respectivamente "<<" e ">>".
	cout << "Digite seu nome: " << endl;
	cin >> Nome;
	cout << "Digite seu Cpf: " << endl;
	cin >> Cpf;
	cout << "Digite seu numero de contato(ex: (xx) xxxxx - xxxx): " << endl;
	cin >> Cont;
	
	//Se lembra dos métodos "set" que fizemos? É aqui que eles entram. Usando as informações que o usuário deu, iremos usar eles para fazer os objetos receberem e guardarem essas informações. Legal né?
	cont1->setNome(Nome);
	cont1->setCpf(Cpf);
	cont1->setContato(Cont);
	
	//Sim sim, eu sei, "por que vamos usar while????" é o que você deve estar pensando, e é simples: A gente precisa que o usuário possa repetir essas ações o quanto ele quiser até chegar no limite do programa, que nesse caso, é ditado pelo limite do histórico que fizemos anteriormente, ou seja, 30.
	//Note que, mesmo que o while sirva para ter no máximo 30 repetições, isso está ligado a outra coisa, o contador. Por que isso acontece? Simples, não é porque o programa está se repetindo, que ele automaticamente adicionou uma informação no histórico, em outras palavras, só precisamos limitar as coisas em relação à isso... e também caso o usuário queira sair do programa. Também é importante :)
	while(cont != 30 || ope != 30)
	{
		//Aqui, estamos apenas criando um menu de escolhas para o usuário, e note também que estamos utilizando o cout de forma que cada linha faz uma coisa. Uma linha emprime, outra quebra a linha, outra imprime de novo e por aí vai, parando APENAS quando ";" chegar.
		cout << endl
		<< endl
		<< "------------------------------"
		<< endl
		<< "Qual operacao deseja realizar?"
		<< endl
		<< "1 - Deposito"
		<< endl
		<< "2 - Saque"
		<< endl
		<< "3 - Saldo atual"
		<< endl 
		<< "4 - Historico"
		<< endl
		<< "30 - Encerrar"
		<< endl
		<< "------------------------------"
		<< endl
		<< endl;
		cin >> ope;
		//O "cin" aqui apenas faz o seguinte: registra a escolha do usuário. Mas ele não fara apenas isso durante o programa, então tenta ficar de olho nisso.
		
		cout << endl << endl;
		
		//If e else para realizar cada operação. Basicamente: "Se o usuário digitou 1, vai esse, se 2, vai esse, se 3..." e por aí vai.
		if(ope == 1)
		{
			//Aqui iremos depositar, e note que estamos utilizando NOVAMENTE a variável "ope" aqui. Por quê? Simples, é mais fácil e prático do que criar outra completamente nova apenas para isso. Não precisamos guardar as informações de "escolhas" anteriores, apenas o "resultado" de algumas delas.
			cout << "Quanto deseja depositar?"
			<< endl
			<< "R$ ";
			cin >> ope;
			//Aqui, "ope" está sendo utilizado para se comunicar com o programa e dizer quanto o usuário deseja depositar. No saque é a mesma coisa, então só vou fazer esse comentário. Dúvidas? Manda no zap que eu respondo.
			cont1->Deposito(ope);
			//E temos o infame contador. Se lembra que eu mencionei ele láááá na classe? Então, aqui estamos. Ele que vai dizer pro histórico quais operações queremos que ele nos mostre durante a amostragem do histórico.
			cont++;
		}else
		if(ope == 2)
		{
			cout << "Quanto deseja sacar?"
			<< endl
			<< "R$ ";
			cin >> ope;
			
			//Sim, um if e else aqui também. A razão é bem simples na verdade: Se o usuário não tiver dinheiro o suficiente para o saque, ele não tem porquê conseguir tirar dinheiro da conta, e por isso que esse if está aqui, para fazer essa checagem.
			if(cont1->getSaldo() >= ope)
			{
				cont1->Saque(ope);
				cont++;
			}
			else
			{
				//Normalmente é uma mensagem normal tá? Eu só gosto de fazer piadas no meio dos programas que eu faço.
				cout << "Saldo insuficiente! Tenta novamente quando nao for pobre" << endl;
			}
		}else
		if(ope == 3)
		{
			//Note que você NÃO precisa desse passo. Por que? Simples! Porque você pode mostrar o saldo toda vez que o programa fazer outro loop dentro daquele mini menu que fizemos lá em cima.
			cout << "---------------------------"
			<< endl
			<< "Titular da conta: "
			<< cont1->getNomClien()
			<< endl
			<< "             Cpf: " 
			<< cont1->getCpf()
			<< endl
			<< "         Contato: "
			<< cont1->getContato()
			<< endl
			<< "           Saldo: R$ "
			<< cont1->getSaldo() 
			<< endl
			<< "---------------------------"
			<< endl;
		}else
		if(ope == 4)
		{
			//Note que o "for" foi feito usando o Contador do main para determinar o limite de ações que podem ser feitas, desde que sabemos que o histórico só teve uma "certa quantidade" de informações armazenadas, informações essas que sabemos a quantidade por conta do contador.
			cout << "---------------------------"
			<< endl;
			for(int i=0; i<cont; i++)
			{
				cout << "Operacao " 
				<< i+1 
				<< ": R$ "
				<< cont1->getHist(i) << endl;
				//getHist(i)... por quê? Okay, vamos lá. O histórico recebe algo: uma posição. Para que serve? Ele apenas localiza a informação dentro daquele vetor de dentro da classe, Isso significa que o programa irá pegar essas informações e printar na tela a informação daquela posição.
			}
			cout << "---------------------------"
			<< endl;
		}else
		if(ope == 30)
		{
			//Só serve para o programa acabar. Só isso mesmo :)
			return 0;
		}
		else
		{
			//É basicamente para dizer que o programa não tinha qualquer outra opção além de 1, 2, 3, 4 e 30.
			cout << "Operacao invalida, le direito po" << endl << endl;
		}
		ope = 0;
	}

	return 0;
}