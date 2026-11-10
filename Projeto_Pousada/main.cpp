#include <iostream>
#include "Aluguel.h"

using namespace std;

int main(int argc, char** argv) {

    AluguelQuarto *A1 = new AluguelQuarto();

    int opcao;
    double diaria;

    cout << "---------- Pousada IFSP ----------" << endl;

    cout << "Digite o valor da diaria: R$ ";
    cin >> diaria;

    while (diaria <= 0) {
        cout << "Valor invalido! Digite novamente: R$ ";
        cin >> diaria;
    }

    AluguelQuarto::setValorDiaria(diaria);

    do {

        cout << "\n---------- MENU ----------" << endl;
        cout << "1 - Registrar entrada em quarto" << endl;
        cout << "2 - Registrar saida do quarto" << endl;
        cout << "3 - Atualizar valor da diaria" << endl;
        cout << "0 - Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1: {

                if (A1->getOcupado()) {

                    cout << "\nErro: Quarto ja esta ocupado!" << endl;

                } else {

                    string nome;
                    int dia, mes, ano, hora, minuto;

                    cin.ignore();

                    cout << "\nNome do locatario: ";
                    getline(cin, nome);

                    cout << "Dia de entrada: ";
                    cin >> dia;

                    cout << "Mes de entrada: ";
                    cin >> mes;

                    cout << "Ano de entrada: ";
                    cin >> ano;

                    cout << "Hora de entrada: ";
                    cin >> hora;

                    cout << "Minuto de entrada: ";
                    cin >> minuto;

                    A1->registrarEntrada(
                        nome, dia, mes, ano, hora, minuto
                    );

                    cout << "\nEntrada registrada com sucesso!" << endl;
                }

                break;
            }

            case 2: {

                if (!A1->getOcupado()) {

                    cout << "\nErro: Quarto nao esta ocupado!" << endl;

                } else {

                    int dia, mes, ano, hora, minuto;

                    cout << "\nDia de saida: ";
                    cin >> dia;

                    cout << "Mes de saida: ";
                    cin >> mes;

                    cout << "Ano de saida: ";
                    cin >> ano;

                    cout << "Hora de saida: ";
                    cin >> hora;

                    cout << "Minuto de saida: ";
                    cin >> minuto;

                    A1->registrarSaida(
                        dia, mes, ano, hora, minuto
                    );

                    A1->exibeDados();

                    A1->liberarQuarto();

                }

                break;
            }

            case 3: {

                cout << "\nNovo valor da diaria: R$ ";
                cin >> diaria;

                if (diaria > 0) {

                    AluguelQuarto::setValorDiaria(diaria);

                    cout << "Valor atualizado com sucesso!" << endl;

                } else {

                    cout << "Erro: O valor deve ser maior que zero!" << endl;

                }

                break;
            }

            case 0:

                cout << "\nEncerrando o programa..." << endl;
                break;

            default:

                cout << "\nOpcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}
