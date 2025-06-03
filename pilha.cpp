#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack<string> historico; // Pilha para armazenar versões do texto
	string texto_atual;
	int opcao;

	do
	{
		cout << "\nTexto atual: \"" << texto_atual << "\"\n";
		cout << "Menu:\n";
		cout << "1. Adicionar texto\n";
		cout << "2. Desfazer (Undo)\n";
		cout << "3. Sair\n";
		cout << "Escolha uma opção: ";
		cin >> opcao;
		cin.ignore(); // Limpa o buffer do cin
	
		if (opcao == 1)
		{
			string novoTexto;
			cout << "Digite o texto a adicionar: ";
			getline(cin, novoTexto);
	
			// Salva o estado atual antes de modificar
			historico.push(texto_atual);
			texto_atual += novoTexto;
		}
		else if (opcao == 2)
		{
			if (!historico.empty())
			{
				texto_atual = historico.top();
				historico.pop();
				cout << "Última ação desfeita.\n";
			}
			else
			{
				cout << "Nada para desfazer.\n";
			}
		}
		else if (opcao != 3)
		{
			cout << "Opção inválida.\n";
		}

	} while (opcao != 3);

	return 0;
}
