#include <string>
#include <iostream>
#define Diaria 100

using namespace std;

class AluguelQuarto {

    private:

        static double valorDiaria;

        int numDiaria;
        string nomeLocatario;
        int numPessoas;

        int diaE, mesE, anoE, horaE, minE;
        int diaS, mesS, anoS, horaS, minS;

        bool ocupado;

    public:

        AluguelQuarto();

        double getValorDiaria();
        string getNomeLocatario();
        int getNumPessoas();
        bool getOcupado();

        static void setValorDiaria(double valor);

        void setNomeLocatario(string nome);
        void setNumPessoas(int pessoas);

        void registrarEntrada(string nome, int _diaE, int _mesE,
                              int _anoE, int _horaE, int _minE);

        bool anoBissexto(int ano);
        int diasMes(int mes, int ano);

        int converterData(int dia, int mes, int ano);

        int CalcDiaria();
        double CalcValor();

        void registrarSaida(int _diaS, int _mesS, int _anoS,
                            int _horaS, int _minS);

        void exibeDados();
        void liberarQuarto();
};