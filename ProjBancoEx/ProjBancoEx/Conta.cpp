#include <string>

//Okay, para que serve a linha 4? Simples. Quando você está escrevendo algo que precisasse de "std" (standard), o programa já coloca ele automaticamente sem precisar que você escreva ele toda vez
using namespace std;

//Durante a criação da classe, você pode colocar ela como pública ou protegida por exemplo, mas quando você não coloca nada na frente, ela virá como pública por padrão
class Conta{
	//Aqui é só o encapsulamento e as variáveis que vamos utilizar
	//NomClien é para o nome do cliente, Cpf e Saldo são óbvios e o Contato seria o número de cel do usuário
	//Agora Cont e Hist são diferentes. Note que existe este contador e um contador no programa principal, onde este se faz necessário para o REGISTRO das informações do histórico, enquanto no principal é para a CHECAGEM do mesmo histórico
	//Note também que Hist se faz como um VETOR, já que iremos armazenar uma certa quantidade de informações DENTRO dele para usarmos mais tarde
	private:
		//Ah... atributos. Sim, atributos NÃO SÃO variáveis. Lembre-se, atributo se refere a uma característica de algo, variável é algo que varia de acordo com uma ou mais condições. Atributos pertencem a um objeto, variável à um código, entendeu?
		string NomClien;
		string Cpf;
		string Contato;
		double Saldo;
		int Cont;
		double Hist[30];
		
	public:
		//Notou que esse método tem o mesmo nome da classe? Pois é. Esse é o "método construtor". Ele aparece toda vez que você precisa definir algo no momento de criação do objeto, neste caso, SALDO e CONTADOR, onde, assim como na programação estruturada, é utilizado para que o objeto não acabe utilizando LIXO durante o programa.
		Conta()
		{
			Saldo = 0;
			Cont = 0;
		}
		
		//Por padrão, métodos GET são utilizados para RETORNAR algo, seja string, int, float ou qualquer outra informação já existente dentro do objeto. Note que, por padrão, o método GET se resume à isso, mas pode ser utilizado para outras coisas caso venha a ser útil.
		//Olhando para o método GET e SET, temos que falar sobre COMO utilizá-los. Para usá-los, pense o seguinte: A primeira coisa que você precisa perguntar é "ele retorna algo ou só faz uma operação?", caso retorne algo, coloque o FORMATO da variável que ele irá retornar antes do NOME do método e também o que ele irá retornar DENTRO do método, caso ele faça alguma operação SEM RETORNAR nada, coloque "void" e, dessa vez, o formato da informação que ele RECEBE dentro do parênteses.
		//Formato de get:   TipoDaVariavelQueRetorna getAlgumaCoisa(nada) { return AlgumaCoisa; }
		//Formato de set:   void setAlgumaCoisa(TipoDaVariavelQueRecebe _AlgumaCoisa){ AlgumaCoisa = _AlgumaCoisa; }
		string getNomClien()
		{
			return NomClien;
		}
		
		string getCpf()
		{
			return Cpf;
		}
		
		string getContato()
		{
			return Contato;
		}
		
		double getSaldo()
		{
			return Saldo;
		}
		
		void setNome(string _nome)
		{
			NomClien = _nome;
		}
		
		void setCpf(string _cpf)
		{
			Cpf = _cpf;
		}
		
		void setContato(string _contato)
		{
			Contato = _contato;
		}
		
		//Este método é muito diferente dos outros, por que dessa vez, ele não dá ou recebe algo, mas sim realiza uma operação dentro do objeto. Porém, se você tiver prestado atenção, ele parece com o método SET, desde que NÃO retorna nada e apenas realiza algo dentro do objeto, que neste caso, é ADICIONAR uma certa quantia à conta.
		void Deposito(double _ope)
		{
			Saldo += _ope;
			Hist[Cont]= _ope;
			Cont++;
		}
		
		//Este método é parecido com o último, porém com o seguinte detalhe: ele NÃO pode ocorrer caso o valor pedido seja maior que o valor atual dentro da conta, logo, foi necessário a utilização de um IF e Else, para assim, barrar o usuário de realizar tal operação caso ele não tenha o dinheiro necessário.
		void Saque(double _ope)
		{
			if(Saldo >= _ope)
			{
				Saldo -= _ope;
				Hist[Cont]= -1 * _ope;
				Cont++;
			}else
			{
			}
		}
		
		//"Ah, mas por que o método pega o contador do main e não do objeto atual?", simples pequeno gafanhoto. Aqui, nós precisamos MOSTRAR o histórico, ou seja, passar por todas as operações ANTERIORES e, para isso, precisamos que o contador utilizado possa passar por elas SEM AFETAR o objeto, ou seja: Não podemos utilizar o contador do objeto, desde que o mesmo se faz fixo a não ser que realizemos uma operação de saque ou depósito.
		double getHist(int _cont)
		{
			return Hist[_cont];
		}
};