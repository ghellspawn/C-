#include<iostream>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Bem vindos ao jogo da adivinhação! *" << endl;
    cout << "**************************************" << endl;

    const int NUMERO_SECRETO = 42;

    int chute;
    cout << "Qual seu chute?" << endl;
    cin >> chute;

    cout << "O valor do seu chute é:" << chute << endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if(acertou)
    {
        cout << "Parabéns, você acertou o número secreto!" << endl;
    }
    else if(maior)
    {
        cout << "Seu chute foi maior do que o número secreto!" << endl;
    }
    else
    {
        cout << "Seu chute foi menor do que o número secreto!" << endl;
    }
    
}