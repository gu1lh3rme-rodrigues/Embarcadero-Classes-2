#include <string>
#include <iostream>
using namespace std;

public class Funcionario {
    protected string nome;
    protected double salario;

    public Funcionario(string nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    public string getNome() {
        return nome;
    }

    public double getSalario() {
        return salario;
    }

    public void exibeDados() {
        System.out.println("Nome: " + nome);
        System.out.println("Salário: R$ " + salario);
    }
};