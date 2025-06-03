#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<string> pacientes;
    int opcao;
    string nome;

    do
    {
        cout << "\n1. Adicionar paciente\n2. Atender paciente\n3. Mostrar fila\n0. Sair\nEscolha: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Nome do paciente: ";
            cin >> nome;
            pacientes.push(nome);
            break;
        case 2:
            if (!pacientes.empty())
            {
                cout << "Atendendo: " << pacientes.front() << endl;
                pacientes.pop();
            } else {
                cout << "Fila vazia!\n";
            }
            break;
        case 3:
            cout << "Fila: ";
            
            queue<string> copia = pacientes;
            while (!copia.empty())
            {
                cout << copia.front() << " ";
                copia.pop();
            }
            cout << endl;
            
            break;
        }
    } while (opcao != 0);
    
    return 0;
}
