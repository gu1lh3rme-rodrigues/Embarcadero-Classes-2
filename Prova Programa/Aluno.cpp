#include <string>
using namespace std;

class Aluno {

    private:
        string nome;
        int Matricula;
        int n1, n2, n3, n4;
        double media;

    public:
        static int UltMatricula;

        Aluno(string _nome) {
            Aluno::UltMatricula++;
            Matricula = Aluno::UltMatricula;
            nome = _nome;

            n1 = n2 = n3 = n4 = 0;
            media = 0;
        }

        string getNome() {
            return nome;
        }

        void setNome(string _nome) {
            nome = _nome;
        }

        int getMatricula() {
            return Matricula;
        }

        void setNota(int _n1, int _n2, int _n3, int _n4) {
            n1 = _n1;
            n2 = _n2;
            n3 = _n3;
            n4 = _n4;
        }

        double getMedia() {
            media = (n1 + n2 + n3 + n4) / 4;
            return media;
        }
};